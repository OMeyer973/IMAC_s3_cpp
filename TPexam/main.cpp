#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include "Bus.hpp"
#include "Voiture.hpp"


//displays all the vehicules in the garage
void showGarage (std::vector<Vehicule*> garage) {
	std::cout << std::endl << "voici mon garage :" << std::endl;
	for (size_t i=0; i<garage.size(); i++) {
		garage[i]->afficher_infos();
	}
}

int main () {
	Voiture v1("pigeault", 1996, 1500);
	Bus b1("Toyotoy", 2004, 80000);

	std::cout << std::endl << "Vehicules garés dehors :" << std::endl;
	v1.afficher_infos();
	b1.afficher_infos();

	std::vector<Vehicule*> garage;

	std::cout << std::endl << "On rentre les véhicules au garage." << std::endl;
	garage.push_back(&v1);
	garage.push_back(&b1);

	garage.push_back(new Voiture("Nizzan", 2014, 8000));
	garage.push_back(new Voiture("BéHèMvé", 20, 10000));
	garage.push_back(new Bus("Mércédés", 20, 10000));

	showGarage(garage);
	
	std::cout << std::endl << "Nettoyage du garage." << std::endl;
	garage.clear();

	showGarage(garage);
	return 0;
};