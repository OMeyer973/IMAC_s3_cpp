#include "Circle.hpp"

//constructors
//default
Circle::Circle(const double& side)
:Ellipsis(side,side)
{
	//std::cout << "circle contructor" << std::endl;
};

Circle::Circle()
:Circle(0)
{};

//copy
//constructeur par copie facultatif. 
//par défaut le compilateur créé un constructeur par copie
//en appelant les constructeurs par copie de tous les membres
// (donc exactement ce qu'on a codé ici)
Circle::Circle(const Circle& c)
:Circle(c._bigRadius)
{};

//destructor
//destructeur par défaut appelle les destructeurs de chacun de ses membres
//on n'a rien a coder
Circle::~Circle() 
{
};

//methods

