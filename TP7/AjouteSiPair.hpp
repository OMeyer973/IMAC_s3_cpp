#ifndef AJOUTESIPAIR_HPP__
#define AJOUTESIPAIR_HPP__

class AjouteSiPair {

public:
	inline void operator() (int& a) {
		if (a%2 == 0)
			a += 10;
	}
};

#endif