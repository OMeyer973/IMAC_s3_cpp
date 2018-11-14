#ifndef VOITURE_HPP__
#define VOITURE_HPP__

#include "Vehicule.hpp"

class Voiture : public Vehicule {

public:
	//\brief constructors
	Voiture(const std::string& marque, const int date, const int prix);

	//\brief methods
	void afficher_infos() const;
};

#endif