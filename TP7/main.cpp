#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>
#include <deque>
#include <list>

////////////////////////
//exo1

//prints the size and content of a vector of int
void printVectori(std::vector<int>& vec) {
	std::cout << "vec size : " << vec.size() << std::endl;

	for (std::vector<int>::const_iterator i = vec.begin(); i != vec.end(); ++i)
		std::cout << *i <<' ';
	std::cout << std::endl;
}

namespace exo1 {

	int main(int argc, char const *argv[]) {
		
		std::cout << "ex 1" << std::endl;
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
		printVectori(vec);

		return 0;
	}
}

////////////////////////
//exo2
namespace exo2 {

	int main(int argc, char const *argv[]) {
		std::cout << std::endl << "ex 2" << std::endl;

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
		std::cout << std::endl << "ex 3" << std::endl;

		//fill
		std::vector<int> v(20);
		for (size_t i=0; i<v.size(); i++) {
			v[i] = std::rand() % 21;
		}
		printVectori(v);
		
		//sort
		std::sort(v.begin(), v.end());
		
		printVectori(v);

		//count of iterations
		std::cout << "number of sevens : " 
		<< std::count(v.begin(), v.end(), 7) << std::endl;
		return 0;
	}
}

////////////////////////
//exo4

//prints the size and content of a deque of int
void printDequei(std::deque<int>& vec) {
	std::cout << "deque size : " << vec.size() << std::endl;

	for (std::deque<int>::const_iterator i = vec.begin(); i != vec.end(); ++i)
		std::cout << *i <<' ';
	std::cout << std::endl;
}

namespace exo4 {

	int main(int argc, char const *argv[]) {
		std::cout << std::endl << "ex 4" << std::endl;

		//fill
		std::deque<int> d(5);
		for (size_t i=0; i<d.size(); i++) {
			d[i] = std::rand() % 21;
		}

		//push & pop
		printDequei(d);
		for (size_t i=0; i<5; i++) {
			d.push_front(std::rand() % 21);
			//printDequei(d);
			d.pop_back();
			printDequei(d);
		}
		return 0;
	}
}

////////////////////////
//exo5

//prints the size and content of a list of std::string
void printListStr(std::list<std::string>& list) {
	std::cout << "list size : " << list.size() << std::endl;

	for (std::list<std::string>::const_iterator i = list.begin(); i != list.end(); ++i)
		std::cout << *i <<' ';
	std::cout << std::endl;
}

namespace exo5 {

	int main(int argc, char const *argv[]) {
		std::cout << std::endl << "ex 5" << std::endl;

		//fill
		std::list<std::string> l_philo;
		l_philo.push_front("Platon");
		l_philo.push_front("Aristote");
		l_philo.push_front("Descartes");
		l_philo.push_front("Kant");
		printListStr(l_philo);

		std::list<std::string> l_math;
		l_math.push_front("Gauss");
		l_math.push_front("Laplace");
		l_math.push_front("Poincaré");
		l_math.push_front("Descartes");
		printListStr(l_math);

		//sort
		l_philo.sort();
		printListStr(l_philo);
		l_math.sort();
		printListStr(l_math);

		//merge
		std::list<std::string> l_intello;
		l_intello.merge(l_philo);
		l_intello.merge(l_math);
		printListStr(l_intello);

		//unique
		l_intello.unique();
		printListStr(l_intello);

		//reverse
		l_intello.reverse();
		printListStr(l_intello);

		return 0;
	}
}

int main(int argc, char const *argv[]) {

	exo1::main(argc, argv);
	exo2::main(argc, argv);
	exo3::main(argc, argv);
	exo4::main(argc, argv);
	exo5::main(argc, argv);

	return 0;
}
