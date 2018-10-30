#include <iostream>
#include <cstdlib>


int maxValue (int* tab, size_t size);

int main () {

	std::cout << "créer un tableau de taille : ";

	size_t tabSize = 0;
	std::cin >> tabSize;

	int *tab = new int[tabSize];

	for (size_t i=0; i<tabSize; i++) {
		std::cin >> tab[i];
	}
	
	std::cout << "3 first adresses of tab : " << &tab[0] << " " << &tab[1] << " " << &tab[2] << std::endl;
	std::cout << "size of element : " << sizeof(tab[0]) << std::endl;
	std::cout << "tab[0] : " << *tab << std::endl;
	std::cout << "tab[5] : " << *(tab+5) << std::endl;
	std::cout << "max : " << maxValue(tab, tabSize) << std::endl;

	//todo : libérer la mémoire ???
	delete(tab);

	return 0;
}

int maxValue (int* tab, size_t size) {
	int max = tab[0];
	for (size_t i=0; i<size; i++) {
		if (max < tab[i])
			max = tab[i];
	}
	return max;
}