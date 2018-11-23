#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>
#include <deque>
#include <list>
#include <map>
#include <functional>
#include "Majuscule.hpp"
#include "AjouteSiPair.hpp"


// cool template function to print the content of a container
template<class T>
void printContainer(T container) {
	std::cout << "container size : " << container.size() << std::endl;
	typedef typename T::const_iterator containerIterator;
	for (containerIterator i=container.begin(); i!=container.end(); i++) {
		std::cout << *i <<' ';
	}
	std::cout << std::endl;
}

////////////////////////
//exo1

namespace exo1 {

	int main(int argc, char const *argv[]) {
		
		std::cout << "----------------" << std::endl << "ex 1" << std::endl;
		std::vector<int> vec;

		//display
		if (vec.empty()) {
			std::cout << "empty" << std::endl;
		} else {
			std::cout << "not empty" << std::endl;
		}

		std::cout << "vec size : " << vec.size() << std::endl;

		std::cout << "max size : " << vec.max_size() << std::endl;
		
		//fill
		vec.push_back(2);
		vec.push_back(3);
		vec.push_back(1);
		vec.push_back(4);

		//display
		printContainer(vec);
		
		return 0;
	}
}

////////////////////////
//exo2
namespace exo2 {

	int main(int argc, char const *argv[]) {
		std::cout << std::endl << "----------------" << std::endl << "ex 2" << std::endl;

		//fill
		std::vector<std::string> v1;
		v1.push_back("Test");
		std::vector<std::string> v2;
		v2.push_back("Swap");

		std::cout << "v1 : " << v1[0] << std::endl;
		std::cout << "v2 : " << v2[0] << std::endl;
		std::cout << "swap !" << std::endl;

		//swap
		v1.swap(v2);

		std::cout << "v1 : " << v1[0] << std::endl;
		std::cout << "v2 : " << v2[0] << std::endl;

		return 0;
	}
}


////////////////////////
//exo3
namespace exo3 {

	int main(int argc, char const *argv[]) {
		std::cout << std::endl << "----------------" << std::endl << "ex 3" << std::endl;

		//fill
		std::vector<int> v(20);
		for (size_t i=0; i<v.size(); i++) {
			v[i] = std::rand() % 21;
		}
		printContainer(v);
		
		//sort
		std::sort(v.begin(), v.end());
		
		printContainer(v);

		//count of iterations
		std::cout << "number of sevens : " 
		<< std::count(v.begin(), v.end(), 7) << std::endl;
		return 0;
	}
}

////////////////////////
//exo4

namespace exo4 {

	int main(int argc, char const *argv[]) {
		std::cout << std::endl << "----------------" << std::endl << "ex 4" << std::endl;

		//fill
		std::deque<int> d(5);
		for (size_t i=0; i<d.size(); i++) {
			d[i] = std::rand() % 21;
		}

		//push & pop
		printContainer(d);
		for (size_t i=0; i<5; i++) {
			d.push_front(std::rand() % 21);
			d.pop_back();
			printContainer(d);
		}
		return 0;
	}
}

////////////////////////
//exo5

namespace exo5 {

	int main(int argc, char const *argv[]) {
		std::cout << std::endl << "----------------" << std::endl << "ex 5" << std::endl;

		//fill
		std::list<std::string> l_philo;
		l_philo.push_front("Platon");
		l_philo.push_front("Aristote");
		l_philo.push_front("Descartes");
		l_philo.push_front("Kant");
		printContainer(l_philo);

		std::list<std::string> l_math;
		l_math.push_front("Gauss");
		l_math.push_front("Laplace");
		l_math.push_front("Poincaré");
		l_math.push_front("Descartes");
		printContainer(l_math);

		//sort
		l_philo.sort();
		printContainer(l_philo);
		l_math.sort();
		printContainer(l_math);

		//merge
		std::list<std::string> l_intello;
		l_intello.merge(l_philo);
		l_intello.merge(l_math);
		printContainer(l_intello);

		//unique
		l_intello.unique();
		printContainer(l_intello);

		//reverse
		l_intello.reverse();
		printContainer(l_intello);

		return 0;
	}
}

////////////////////////
//exo6

typedef std::map<std::string, int>::const_iterator MapIterator;

//prints the size and content of a map of str to int
void printMapStri(const std::map<std::string, int>& map) {
	std::cout << "map size : " << map.size() << std::endl;

	for (MapIterator i = map.begin(); i != map.end(); ++i)
		std::cout << i->first << ", " << i->second << " | ";
	std::cout << std::endl;
}

namespace exo6 {

	//looks for marie in the ages map
	void lookForMarie (std::map<std::string, int> ages) {
	 	if (ages.find("marie") == ages.end()) {
			std::cout << "can't find marie :'(" << std::endl;
	 	} else {
			std::cout << "marie is " << (ages.find("marie"))->second << std::endl;
	 	}
	}

	int main(int argc, char const *argv[]) {
		std::cout << std::endl << "----------------" << std::endl << "ex 6" << std::endl;

		//fill
		std::map<std::string, int> ages;
	 	ages.insert(std::pair <std::string, int> ("bob", 22)); 
	 	ages.insert(std::pair <std::string, int> ("pol", 12)); 
	 	ages.insert(std::pair <std::string, int> ("max", 58)); 
		
	 	printMapStri(ages);

		lookForMarie(ages);
	 	
	 	ages.insert(std::pair <std::string, int> ("marie", 19)); 
	 	std::cout << "marie added" << std::endl;

		lookForMarie(ages);

		return 0;
	}
}

////////////////////////
//exo7 foncteur

namespace exo7foncteur {

	int main(int argc, char const *argv[]) {
		std::cout << std::endl << "----------------" << std::endl << "ex 7" << std::endl;

		Majuscule M;
		std::string text("l'ImAc C'eSt TrOp BiEn");
		std::cout << text << std::endl;

		for (size_t i=0; i<text.size(); i++) {
			M(text[i]);
		}
		std::cout << text << std::endl;

		return 0;
	}
}


////////////////////////
//exo7

namespace exo7lambda {

	int main(int argc, char const *argv[]) {
		std::cout << std::endl << "----------------" << std::endl << "ex 7" << std::endl;

		std::string text("l'ImAc C'eSt TrOp BiEn");
		std::cout << text << std::endl;

		//déclaration de la lambda fonction
		std::function<void(char& a)> setUpper;

		//définition de la lambda fonction
		setUpper = [](char& a) -> void {
				a = std::toupper(a);
			};

		std::for_each(text.begin(), text.end(), setUpper);

		std::cout << text << std::endl;

		return 0;
	}
}

////////////////////////
//exo8 avec des foncteurs

namespace exo8foncteur {

	int main(int argc, char const *argv[]) {
		std::cout << std::endl << "----------------" << std::endl << "ex 8" << std::endl;

		AjouteSiPair A;
		std::list<int> l_ints;

		for (size_t i=0; i<20; i++) {
			l_ints.push_front(std::rand() % 20);
		}

		printContainer(l_ints);
		std::cout << "added 10 to even numbers" << std::endl;

		typedef std::list<int>::iterator ListiIterator;
		for (ListiIterator i=l_ints.begin(); i!=l_ints.end(); i++) {
			A(*i);
		}

		printContainer(l_ints);

		return 0;
	}
}


////////////////////////
//exo8 avec des lambda-fonctions

namespace exo8lambda {

	int main(int argc, char const *argv[]) {
		std::cout << std::endl << "----------------" << std::endl << "ex 8" << std::endl;

		std::list<int> l_ints;

		for (size_t i=0; i<20; i++) {
			l_ints.push_front(std::rand() % 20);
		}

		printContainer(l_ints);
		std::cout << "added 10 to even numbers" << std::endl;

		//déclaration de la lambda fonction
		std::function<void(int& a)> ajouteSiPair;

		//définition de la lambda fonction
		ajouteSiPair = [](int& a) -> void {
				if (a%2 == 0)
					a += 10;
			};

		std::for_each(l_ints.begin(), l_ints.end(), ajouteSiPair);

		printContainer(l_ints);

		return 0;
	}
}

int main(int argc, char const *argv[]) {

	exo1::main(argc, argv);
	exo2::main(argc, argv);
	exo3::main(argc, argv);
	exo4::main(argc, argv);
	exo5::main(argc, argv);
	exo6::main(argc, argv);
	exo7foncteur::main(argc, argv);
	exo7lambda::main(argc, argv);
	exo8foncteur::main(argc, argv);
	exo8lambda::main(argc, argv);

	return 0;
}