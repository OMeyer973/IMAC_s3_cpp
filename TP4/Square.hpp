#ifndef SQUARE_HPP__
#define SQUARE_HPP__

#include "Rectangle.hpp"

class Square : public Rectangle {
	
	public:
		//\brief constructors
		Square();
		Square(const double& side);
		Square(const Square& s);

		///\brief destructor
		~Square();

		//\brief methods
		inline double getSide() const { return _width; };

		inline void setSide(const double& s) { 
			_height = s; 
			_width = s;
		};

		inline void setWidth(const double& w) { setSide(w); };

		inline void setHeight(const double& h) { setSide(h); };

		inline void whoAmI() const { 
			std::cout << "I'm a square" << std::endl;
 		};
};


#endif