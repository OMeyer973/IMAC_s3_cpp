#ifndef ELLIPSIS_HPP__
#define ELLIPSIS_HPP__

#include "Figure.hpp"

#define PI 3.14159265359

class Ellipsis : public Figure {

	protected:
		double _bigRadius;
		double _smallRadius;
	
	public:
		//\brief constructors
		Ellipsis();
		Ellipsis(const double& bigRadius, const double& SmallRadius);
		Ellipsis(const Ellipsis& r);

		///\brief destructor
		~Ellipsis();

		//\brief methods
		inline double getBigRadius() const { return _bigRadius; };

		inline double getSmallRadius() const { return _smallRadius; };

		inline void setBigRadius(const double& br) { _bigRadius = br; };

		inline void setSmallRadius(const double& sr) { _smallRadius = sr; };

		inline double surface() const { return PI * _bigRadius * _smallRadius; };

		inline void whoAmI() const { 
			std::cout << "I'm an ellipsis" << std::endl;
 		};
};


#endif