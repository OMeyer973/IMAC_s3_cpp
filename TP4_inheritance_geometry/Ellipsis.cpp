#include "Ellipsis.hpp"

//constructors
//default
Ellipsis::Ellipsis(const double& bigRadius, const double& SmallRadius)
: _bigRadius(bigRadius), _smallRadius(SmallRadius)
{
	//std::cout << "ellipsis constructor" << std::endl;
};

Ellipsis::Ellipsis()
: _bigRadius(0), _smallRadius(0)
{};

//copy
//constructeur par copie facultatif. 
//par défaut le compilateur créé un constructeur par copie
//en appelant les constructeurs par copie de tous les membres
// (exactement ce qu'on a codé ici)
Ellipsis::Ellipsis(const Ellipsis& r)
: _bigRadius(r._bigRadius), _smallRadius(r._smallRadius)
{};

//destructor
//destructeur par défaut appelle les destructeurs de chacun de ses membres
//on n'a rien a coder
Ellipsis::~Ellipsis() 
{
};

//methods
