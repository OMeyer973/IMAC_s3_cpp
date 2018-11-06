#include "Ellipsis.hpp"

#include <iostream>
#include <cstdlib>

//constructors
//default
Ellipsis::Ellipsis(const double& width, const double& height)
: _bigRadius(width), _smallRadius(height)
{
	std::cout << "constructeur par défaut (dimensions)" << std::endl;
};

Ellipsis::Ellipsis()
: _bigRadius(0), _smallRadius(0)
{
	std::cout << "constructeur par défaut" << std::endl;
};

//copy
//constructeur par copie facultatif. 
//par défaut le compilateur créé un constructeur par copie
//en appelant les constructeurs par copie de tous les membres
// (exactement ce qu'on a codé ici)
Ellipsis::Ellipsis(const Ellipsis& r)
: _bigRadius(r._bigRadius), _smallRadius(r._smallRadius)
{
	std::cout << "constructeur par copie" << std::endl;
};

//destructor
//destructeur par défaut appelle les destructeurs de chacun de ses membres
//on n'a rien a coder
Ellipsis::~Ellipsis() 
{
};

//methods
