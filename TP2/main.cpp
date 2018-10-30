#include <iostream>
#include <cstdlib>
#include "VectorD.hpp"

/*

compiler:
g++ -Wall -std=c++11 -O2 main.cpp ./VectorD.cpp -o vec.exe

*/

int main () {

	VectorD vec(3);

	vec.setValue(2,1);
	vec.setValue(1,1);
	vec.setValue(0,2);

	VectorD vec2(vec);

	vec.normalize();

	VectorD vec3(3);
	vec3 = vec;
	vec3 = vec + vec2;

	std::cout << "vec size : " << vec.size() << std::endl;
	std::cout << "vec : " << vec.getValue(0) <<" "<< vec.getValue(1) <<" "<< vec.getValue(2) << std::endl;
	std::cout << "vec2 : " << vec2.getValue(0) <<" "<< vec2.getValue(1) <<" "<< vec2.getValue(2) << std::endl;
	std::cout << "vec3 : " << vec3.getValue(0) <<" "<< vec3.getValue(1) <<" "<< vec3.getValue(2) << std::endl;

	vec3.save("vec3.txt");
	return 0;
}