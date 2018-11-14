#include <iostream>

int main(int argc, char const *argv[]) {
	int a = 10;
	int b = 0;
	
	std::cout << "a/2 = " << a/2 << std::endl;

	//exception à l'exécution
	try {
		if (b==0) {
			//throw b;
			throw std::string("diviseur nul");
		}
		std::cout << "a/b = " << a/b << std::endl;
	}
	catch(const int divider) {
		std::cerr << "Erreur sur le diviseur : " << divider << std::endl;
	}
	catch(const std::string &err) {
		std::cerr << "Erreur : " << err << std::endl;
	}
	catch(...) {
		std::cerr << "Exception inconnue dans votre programme !" << std::endl;
	}

	std::cout << "a/5 = " << a/5 << std::endl;
	std::cout << "Terminé !" << std::endl;

	// questions :
	// 1. le programme plante à l'exécution, ligne "a/b ..."
	// 5. la division par zero n'est pas exécutée 
	// 	  car le bloc try est interrompu quand une exception est levée
	// 6. erreur si try sans catch 
	return 0;
}