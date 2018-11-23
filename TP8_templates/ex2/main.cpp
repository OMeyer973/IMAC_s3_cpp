#include <iostream>
#include "Point3D.hpp"

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
	std::cout << p5 <<std::endl;
	
	Point3D<float> p6(p5);
	return 0;
}





};

int main(int argc, char const *argv[]) {
	return CPPIMAC2::main(argc, argv);
}