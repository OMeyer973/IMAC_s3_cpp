#include "Rectangle.hpp"

//constructors
//default
Rectangle::Rectangle(const double& width, const double& height)
: _width(width), _height(height)
{
	//std::cout << "rectangle constructor" << std::endl;
};

Rectangle::Rectangle()
: _width(0), _height(0)
{};

//copy
//constructeur par copie facultatif. 
//par défaut le compilateur créé un constructeur par copie
//en appelant les constructeurs par copie de tous les membres
// (exactement ce qu'on a codé ici)
Rectangle::Rectangle(const Rectangle& r)
: _width(r._width), _height(r._height)
{};

//destructor
//destructeur par défaut appelle les destructeurs de chacun de ses membres
//on n'a rien a coder
Rectangle::~Rectangle() 
{
};

//methods
