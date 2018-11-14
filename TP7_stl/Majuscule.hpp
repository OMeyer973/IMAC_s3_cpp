#ifndef MAJUSCULE_HPP__
#define MAJUSCULE_HPP__

#include <cstdlib>
#include <cctype>

class Majuscule {

public:
	inline void operator() (char& a) { 
		a = std::toupper(a);
	}
};

#endif