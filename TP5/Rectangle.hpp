#ifndef RECTANGLE_HPP__
#define RECTANGLE_HPP__

#include <cstdlib>
#include <string>
#include <vector>


class Rectangle {
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

		inline void setWidth(double w) { _width = w; };

		inline void setHeight(double h) { _height = h; };

		inline double surface() const { return _width * _height; };
};


#endif