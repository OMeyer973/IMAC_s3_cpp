#include <iostream>
#include "Tableau.hpp"
#include "Error.hpp"

namespace CPPIMAC2 {


int main(int argc, char const *argv[]) {

	Tableau<int, 8> tab; 
	std::cout << tab << std::endl;
	tab.push(1);

	
	std::cout << tab << std::endl;
	tab.push(4);
	tab.push(3);
	tab.push(6);
	tab.push(1);
	tab.push(5);

	std::cout << tab << std::endl;
	
	std::cout << "tab.first() : " << tab.first() << std::endl;
	std::cout << "tab[3] : " << tab[3] << std::endl;
	tab[3] = 1000;
	std::cout << "tab.at(3) : " << tab.at(3) << std::endl;
	tab.at(3) = 999;
	
	std::cout << "tab.last() : " << tab.last() << std::endl;
	std::cout << "tab.size() : " << tab.size() << std::endl;
	
	try {		
		tab.pop();
		tab.pop();
		tab.pop();
		tab.pop();
		tab.pop();
		tab.pop();
		tab.pop();
	} catch (Error error) { error.what(); };
	
	std::cout << tab << std::endl;
	
	tab.push(4);
	tab.push(3);
	tab.push(6);
	tab.push(1);
	tab.push(5);

	tab.insert(9,2);
	std::cout << tab << std::endl;

	tab.erase(1);
	std::cout << tab << std::endl;

	return 0;
}





};

int main(int argc, char const *argv[]) {
	return CPPIMAC2::main(argc, argv);
}