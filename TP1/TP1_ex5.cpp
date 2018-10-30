// ================================
// POO C++ - IMAC 2
// TP 1 - Exercice 5
// ================================

#include <iostream>
#include <cstdlib>
#include <vector>

namespace TP_CPP_IMAC2
{
	int main(int argc, char *argv[])
	{
		std::vector<int> vect;

		std::cout << "créer un vecteur de taille : ";

		size_t tabSize = 0;
		std::cin >> tabSize;

		int tmp = 0;
		for (size_t i=0; i<tabSize; i++) {
			std::cin >> tmp;
			vect.push_back(tmp % 10);
		}
		
		std::cout << "size of vector : " << sizeof(vect) << std::endl;
		std::cout << "3 first adresses of vect : " << &vect[0] << " " << &vect[1] << " " << &vect[2] << std::endl;
		std::cout << "size of element : " << sizeof(vect[0]) << std::endl;
		//les éléments sont les 1 à cotés des autres :)

		vect.pop_back();
		vect.clear();
		
		return 0;
	}
}

// Fonction main classique, point d'entr�e du programme
int main(int argc, char *argv[])
{
	// Appel de la fonction main de l'espace de nom TP_CPP_IMAC2
	return TP_CPP_IMAC2::main(argc, argv);
}

