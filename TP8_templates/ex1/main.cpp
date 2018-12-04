#include <iostream>
#include <cctype>

namespace CPPIMAC2 {

template<typename T>
const T& getMinimum(const T& a, const T& b) {
	return a < b ? a : b;
}

template<>
const char& getMinimum(const char& a, const char& b) {
	return toupper(a) < toupper(b) ? a : b;
}



int main(int argc, char const *argv[]) {
	int a = 10;
	int b = 0;

	std::cout << "inf de 1 et 2 : " << getMinimum(1, 2) << std::endl;
	std::cout << "inf de 1.3f et 2.3f : " << getMinimum(1.3f, 2.3f) << std::endl;
	std::cout << "inf de a et b : " << getMinimum('a', 'b') << std::endl;
	std::cout << "inf de 1 et 1.3f : " << getMinimum<float>(1, 1.3f) << std::endl;
	std::cout << "inf de a et Z : " << getMinimum('a', 'Z') << std::endl;

	
	return 0;
}





};

int main(int argc, char const *argv[]) {
	return CPPIMAC2::main(argc, argv);
}