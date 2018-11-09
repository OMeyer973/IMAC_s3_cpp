#ifndef RECTANGLE_HPP__
#define RECTANGLE_HPP__

#include "Figure.hpp"

class Rectangle : public Figure {

	protected:
		double _width;
		double _height;
	
	public:
		//\brief constructors
		Rectangle();
		Rectangle(const double& width, const double& height);
		Rectangle(const Rectangle& r);

		///\brief destructor
		~Rectangle();

		//\brief methods
		inline double getWidth() const { return _width; };

		inline double getHeight() const { return _height; };

		inline void setWidth(const double& w) { _width = w; };

		inline void setHeight(const double& h) { _height = h; };

		inline double surface() const { return _width * _height; };

		inline void whoAmI() const { 
			std::cout << "I'm a rectangle" << std::endl;
 		};
};


#endif