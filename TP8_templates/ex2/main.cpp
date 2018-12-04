#include <iostream>
#include "Point3D.hpp"


//g++ main.cpp -Wall -std=c++11 -o main &&./main

namespace CPPIMAC2 {


int main(int argc, char const *argv[]) {

	Point3D<int> p1;
	Point3D<int> p2(1,2,3);
	Point3D<int> p3(p1);
	
	std::cout << p2 <<std::endl;
	std::cout << p3 <<std::endl;
	
	Point3D<int> p4 = p1 + 1;
	std::cout << p4 <<std::endl;

	Point3D<int> p5 = p2 + p4;
	std::cout << p5 << std::endl;
	
	Point3D<float> p6(p5);
	
	std::cout << p6[0] << p6[1] << p6[2] << p6[3] << std::endl;
	return 0;
}





};

int main(int argc, char const *argv[]) {
	return CPPIMAC2::main(argc, argv);
}