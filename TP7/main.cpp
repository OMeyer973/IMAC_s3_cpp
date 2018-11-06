#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>

int main(int argc, char const *argv[]) {
	
	//exo1
	std::cout << "ex 1" << std::endl;
	std::vector<int> vec;

	if (vec.empty()) {
		std::cout << "empty" << std::endl;
	} else {
		std::cout << "not empty" << std::endl;
	}

	std::cout << "vec size : " << vec.size() << std::endl;

	std::cout << "max size : " << vec.max_size() << std::endl;
	
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(1);
	vec.push_back(4);

	std::cout << "vec size : " << vec.size() << std::endl;

	for (std::vector<int>::const_iterator i = vec.begin(); i != vec.end(); ++i)
		std::cout << *i <<' ';
	std::cout << std::endl;


	////////////////////////
	//exo2
	std::cout << std::endl << "ex 2" << std::endl;

	std::vector<std::string> v1;
	v1.push_back("Test");
	std::vector<std::string> v2;
	v2.push_back("Swap");

	std::cout << "v1 : " << v1[0] << std::endl;
	std::cout << "v2 : " << v2[0] << std::endl;
	std::cout << "swap !" << std::endl;

	v1.swap(v2);

	std::cout << "v1 : " << v1[0] << std::endl;
	std::cout << "v2 : " << v2[0] << std::endl;


	////////////////////////
	//exo3
	std::cout << std::endl << "ex 3" << std::endl;

	std::vector<int> v(20);
	for (size_t i=0; i<20; i++) {
		
	}


	return 0;
}