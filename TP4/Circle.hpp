#ifndef CIRCLE_HPP__
#define CIRCLE_HPP__

#include "Ellipsis.hpp"

class Circle : public Ellipsis {
	
	public:
		//\brief constructors
		Circle();
		Circle(const double& radius);
		Circle(const Circle& c);

		///\brief destructor
		~Circle();

		//\brief methods
		inline double getRadius() const { return _bigRadius; };

		inline void setRadius(const double& r) { 
			_bigRadius = r; 
			_bigRadius = r;
		};

		inline void setBigRadius(const double& br) { setRadius(br); };

		inline void setSmallRadius(const double& sr) { setRadius(sr); };

		inline void whoAmI() const { 
			std::cout << "I'm a circle" << std::endl;
 		};
};


#endif