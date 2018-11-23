#include <iostream>
#include "Error.hpp"

int main(int argc, char const *argv[]) {
	int a = 10;
	int b = 0;
	
	std::cout << "a/2 = " << a/2 << std::endl;

	//exception à l'exécution
	try {
		if (b==0) {
			Error error(1, 856, "dénominateur nul !", __FILE__, __LINE__);
			throw (error);
		}
		std::cout << "a/b = " << a/b << std::endl;
	}
	catch(Error error) {
		// std::cerr << "exception lancée : " << std::endl;
		// std::cerr << "	Niveau : " << error.getLevel() << std::endl;
		// std::cerr << "	Code : " << error.getCode() << std::endl;
		
		error.what();
	}
	catch(...) {
		std::cerr << "Exception inconnue dans votre programme !" << std::endl;
	}

	std::cout << "a/5 = " << a/5 << std::endl;
	std::cout << "Terminé !" << std::endl;

	return 0;
}