#include <iostream>
#include <cstdlib>
#include "ImageRGBu8.hpp"

/*
truc cool :
//convertir des images en autres formats
convert monimage.jpg, monimage.ppm
//lire les ppm
feh *ppm

*/

int main () {

	ImageRGBu8 img(50,50);

	/*
	ImageRGBu8 vec2(vec);

	vec.normalize();

	ImageRGBu8 vec3(3);
	vec3 = vec;
	vec3 = vec + vec2;

	std::cout << "vec size : " << vec.size() << std::endl;
	std::cout << "vec : " << vec.getValue(0) <<" "<< vec.getValue(1) <<" "<< vec.getValue(2) << std::endl;
	std::cout << "vec2 : " << vec2.getValue(0) <<" "<< vec2.getValue(1) <<" "<< vec2.getValue(2) << std::endl;
	std::cout << "vec3 : " << vec3.getValue(0) <<" "<< vec3.getValue(1) <<" "<< vec3.getValue(2) << std::endl;

	vec3.save("vec3.txt");
	*/
	return 0;
}