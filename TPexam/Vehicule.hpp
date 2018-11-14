#ifndef FIGURE_HPP__
#define FIGURE_HPP__

#include <cstdlib>
#include <string>
#include <iostream>

class Vehicule {

public:
	//\brief constructors
	Vehicule(const std::string& marque, const int date, const int prix);

	//\brief getters
	inline std::string getMarque() const { return _marque; };
	inline int getDate_achat() const { return _date_achat; };
	inline int getPrix_achat() const { return _prix_achat; };

	//\brief methods
	virtual void afficher_infos() const = 0;

protected:
	std::string _marque;
	int _date_achat;
	int _prix_achat;
	
};

#endif