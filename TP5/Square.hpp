#ifndef SQUARE_HPP__
#define SQUARE_HPP__

#include <cstdlib>
#include <string>
#include <vector>


class Square : public Rectangle {
	private:
		double _width;
		double _height;
	public:
		//\brief constructors
		Square();
		Square(const double& side);
		Square(const Square& r);

		///\brief destructor
		~Square();

		//\brief methods
		inline double getWidth() const { return _width; };

		inline double getHeight() const { return _height; };

		inline void setWidth(double w) { _width = w; };

		inline void setHeight(double h) { _height = h; };

		inline double surface() const { return _width * _height; };
};


#endif