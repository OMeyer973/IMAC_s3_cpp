#include "Voiture.hpp"

//constructors
Voiture::Voiture( const std::string& marque, const int date, const int prix)
:Vehicule(marque, date, prix)
{
	//std::cout << "Bus constructor" << std::endl;
};

//destructor
//->auto

//methods
void Voiture::afficher_infos() const {
	std::cout  << "Voiture :" << std::endl;
	std::cout  << "    marque de la voiture : " << _marque << std::endl;
	std::cout  << "    année de la voiture : " << _date_achat << std::endl;
	std::cout  << "    prix de la voiture : " << _prix_achat << std::endl;
};