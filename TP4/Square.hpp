#ifndef CIRCLE_HPP__
#define CIRCLE_HPP__

#include "Ellipsis.hpp"

class Circle : public Ellipsis {
	
	public:
		//\brief constructors
		Circle();
		Circle(const double& side);
		Circle(const Circle& s);

		///\brief destructor
		~Circle();

		//\brief methods
		inline double getSide() const { return _width; };

		inline void setSide(const double& s) { 
			_height = s; 
			_width = s;
		};

		inline void setWidth(const double& w) { 
			setSide(w); 
		};

		inline void setHeight(const double& h) { 
			setSide(h); 
		};

};


#endif