#include <iostream>
#include <cstdlib>
#include <algorithm>
#include "Square.hpp"
#include "Circle.hpp"

/*

compiler:
g++ -Wall -std=c++11 -O2 main.cpp ./Rectangle.cpp -o rec.exe

*/

void afficher(Figure *f){
	f->whoAmI();
}

int main () {
	Rectangle r1(2.6f, 4.42f);
	r1.whoAmI();
	afficher(&r1);
	std::cout  << "surface " << r1.surface() << std::endl;
	r1.setWidth(3.9);
	
	Square s1(r1.getHeight());
	s1.whoAmI();
	s1.setSide(3);

	std::cout << "surface " << s1.surface() << std::endl;

	Rectangle r2 = s1;
	r2.whoAmI();


	Ellipsis e1(2.6, 4.42);
	afficher(&e1);
	std::cout  << "surface " << e1.surface() << std::endl;
	e1.setBigRadius(3.9);
	
	Circle c1(e1.getBigRadius());
	c1.whoAmI();
	c1.setRadius(3);

	std::cout << "surface " << c1.surface() << std::endl;

	Ellipsis e2 = c1;
	e2.whoAmI();

	// A rectangle can describe a Square
	// An ellipsis can describe a Circle
	// A rectangle can't describe a circle ...
	// cf classes graph : can only go down a branch

	Rectangle *r = new Rectangle(1,8);
	afficher(r);
	Ellipsis *e = new Ellipsis(11,1);
	afficher(e);

	//exo10
	std::vector<Figure*> listFig;

	listFig.push_back(new Rectangle(1,2));
	listFig.push_back(new Ellipsis(2,1));
	listFig.push_back(new Square(1));
	listFig.push_back(new Circle(2));

	std::for_each(listFig.begin(), listFig.end(),
        [](Figure * figure)
        {

			std::cout << "surface " << figure->surface() << std::endl;   
        }
	);

	return 0;
};