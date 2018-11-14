#include "Vehicule.hpp"

//constructors
//default
// Vehicule::Vehicule()
// :_marque(""), _date_achat(0), _prix_achat(0)
// {};

Vehicule::Vehicule( const std::string& marque, const int date, const int prix)
:_marque(marque), _date_achat(date), _prix_achat(prix)
{
	//std::cout << "Vehicule constructor" << std::endl;
};


//copy
//constructeur par copie facultatif. 
//par défaut le compilateur créé un constructeur par copie
//en appelant les constructeurs par copie de tous les membres
// (exactement ce qu'on a codé ici)
// Vehicule::Vehicule(const Vehicule& v)
// :_marque(v._marque), _date_achat(v._date_achat), _prix_achat(v._prix_achat)
// {};

//destructor
//-> auto