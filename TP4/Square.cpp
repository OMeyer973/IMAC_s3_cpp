#include "Square.hpp"

#include <iostream>
#include <cstdlib>



//constructors
//default
Square::Square(const double& side)
:Rectangle(side,side)
{
	std::cout << "constructeur par défaut (dimensions)" << std::endl;
};

Square::Square()
:Rectangle(0,0)
{
	std::cout << "constructeur par défaut" << std::endl;
};

//copy
//constructeur par copie facultatif. 
//par défaut le compilateur créé un constructeur par copie
//en appelant les constructeurs par copie de tous les membres
// (donc exactement ce qu'on a codé ici)
Square::Square(const Square& s)
:Rectangle(s._width, s._height)
{
	std::cout << "constructeur par copie" << std::endl;
};

//destructor
//destructeur par défaut appelle les destructeurs de chacun de ses membres
//on n'a rien a coder
Square::~Square() 
{
};

//methods

