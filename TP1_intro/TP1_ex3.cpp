#include <iostream>
#include <cstdlib>
#include <string>

int main () {

	std::string input = "";

	std::cout << "entrez une chaîne de caractères :";

	std::cin >> input;

	std::cout << "string size : " << input.size() << std::endl << "last char : " << input.back() << std::endl;
	input.pop_back();

	//input.insert(0,"IMAC");
	input = "IMAC" + input;
	
	std::cout << input << std::endl;
	
	return 0;
}