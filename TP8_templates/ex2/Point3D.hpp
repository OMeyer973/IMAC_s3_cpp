#include <cstdlib>
#include <exception>
#include <string>
#include <iostream>

#ifndef __POINT3D_HPP__
#define __POINT3D_HPP__

namespace CPPIMAC2 {


template<typename Type>
class Point3D {

public:
	///\brief constructor
	inline Point3D()
	:_x(0), _y(0), _z(0)
	{};
	
	Point3D(const Type& x, const Type& y, const Type& z)
	:_x(x), _y(y), _z(z)
	{};
	
	Point3D(const Point3D<Type>& p)
	:_x(p._x), _y(p._y), _z(p._z)
	{};

	///\brief destructor
	inline ~Point3D(){};


	///\brief getters
	inline Type getX() const { return _x; };
	inline Type getY() const { return _y; };
	inline Type getZ() const { return _z; };


protected:
	Type _x;
	Type _y;
	Type _z;

};




};

#endif