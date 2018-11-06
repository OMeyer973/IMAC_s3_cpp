#include "Circle.hpp"

#include <iostream>
#include <cstdlib>



//constructors
//default
Circle::Circle(const double& side)
:Ellipsis(side,side)
{
	std::cout << "constructeur par défaut (dimensions)" << std::endl;
};

Circle::Circle()
:Ellipsis(0,0)
{
	std::cout << "constructeur par défaut" << std::endl;
};

//copy
//constructeur par copie facultatif. 
//par défaut le compilateur créé un constructeur par copie
//en appelant les constructeurs par copie de tous les membres
// (donc exactement ce qu'on a codé ici)
Circle::Circle(const Circle& s)
:Ellipsis(s._width, s._height)
{
	std::cout << "constructeur par copie" << std::endl;
};

//destructor
//destructeur par défaut appelle les destructeurs de chacun de ses membres
//on n'a rien a coder
Circle::~Circle() 
{
};

//methods

