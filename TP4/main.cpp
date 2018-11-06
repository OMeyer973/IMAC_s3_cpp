#include <iostream>
#include <cstdlib>
#include "Rectangle.hpp"
#include "Square.hpp"

/*

compiler:
g++ -Wall -std=c++11 -O2 main.cpp ./Rectangle.cpp -o rec.exe

*/

int main () {

	Rectangle r1(2.6, 4.42), r2;
	std::cout << r1.surface() << std::endl;
	r1.setWidth(3.9);
	
	Square c1(r1.getHeight());
	c1.setSide(3);

	std::cout << "surface " << c1.surface() << std::endl;

	return 0;
};