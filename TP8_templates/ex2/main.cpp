#include <iostream>
#include "Point3D.hpp"

namespace CPPIMAC2 {


int main(int argc, char const *argv[]) {

	Point3D<int> p1;
	Point3D<int> p2(1,2,3);
	Point3D<int> p3(p1);
	
	return 0;
}





};

int main(int argc, char const *argv[]) {
	return CPPIMAC2::main(argc, argv);
}