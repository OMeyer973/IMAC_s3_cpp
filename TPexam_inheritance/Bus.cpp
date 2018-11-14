#include "Bus.hpp"

//constructors
Bus::Bus( const std::string& marque, const int date, const int prix)
:Vehicule(marque, date, prix)
{
	//std::cout << "Bus constructor" << std::endl;
};

//destructor
//->auto

//methods
void Bus::afficher_infos() const {
	std::cout  << "Bus :" << std::endl;
	std::cout  << "    marque du bus : " << _marque << std::endl;
	std::cout  << "    année du bus : " << _date_achat << std::endl;
	std::cout  << "    prix du bus : " << _prix_achat << std::endl;
};