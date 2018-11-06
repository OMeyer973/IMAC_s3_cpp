#ifndef ELLIPSIS_HPP__
#define ELLIPSIS_HPP__

#include <cstdlib>
#include <string>
#include <vector>

#define PI 3.14159265359

class Ellipsis {

	protected:
		double _bigRadius;
		double _smallRadius;
	
	public:
		//\brief constructors
		Ellipsis();
		Ellipsis(const double& width, const double& height);
		Ellipsis(const Ellipsis& r);

		///\brief destructor
		~Ellipsis();

		//\brief methods
		inline double getWidth() const { return _bigRadius; };

		inline double getHeight() const { return _smallRadius; };

		inline void setWidth(const double& w) { _bigRadius = w; };

		inline void setHeight(const double& h) { _smallRadius = h; };

		inline double surface() const { return PI * _bigRadius * _smallRadius; };
};


#endif