#ifndef BUS_HPP__
#define BUS_HPP__

#include "Vehicule.hpp"

class Bus : public Vehicule {

public:
	//\brief constructors
	Bus(const std::string& marque, const int date, const int prix);

	//\brief methods
	void afficher_infos() const;
};

#endif