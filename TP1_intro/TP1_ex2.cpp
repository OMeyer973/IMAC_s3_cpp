#include <iostream>
#include <cstdlib>

int main () {

	std::cout << "entre un nombre : ";
	int nb = 0;
	std::cin >> nb;
	if (nb == 79)
		std::cout << "parfait" << std::endl;
	else if (nb > 0)
		std::cout << "strictement positif" << std::endl;
	else {
		std::cerr << "négatif" << std::endl;
	}
	return 0;
}