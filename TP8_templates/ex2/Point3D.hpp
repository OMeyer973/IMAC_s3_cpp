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
	///\brief default constructor
	inline Point3D()
	:_x(0), _y(0), _z(0)
	{};
	
	///\brief default constructor
	Point3D(const Type& x, const Type& y, const Type& z)
	:_x(x), _y(y), _z(z)
	{};
	
	///\brief copy constructor
	Point3D(const Point3D<Type>& p)
	:_x(p._x), _y(p._y), _z(p._z)
	{};

	///\brief copy constructor w template
	template<typename U>
	Point3D(const Point3D<U>& p) const
	:_x(p.getX()), _y(p.getY()), _z(p.getZ())
	{};

	///\brief destructor
	inline ~Point3D(){};

	///\brief getters
	inline Type getX() const { return _x; };
	inline Type getY() const { return _y; };
	inline Type getZ() const { return _z; };

	///\brief add a vec and a scalar
	inline Point3D operator+ (const Type& t) const {
		return Point3D(_x+t, _y+t, _z+t);
	};
	
	///\brief add 2 vec
	inline Point3D operator+ (const Point3D<Type>& p) const {
		return Point3D(_x+p._x, _y+p._y, _z+p._y);
	};

	///\brief display with cout << ... <<
	friend std::ostream &operator<<(std::ostream &os, const Point3D &p) {
		return os << "[" << p.getX() << ", " << p.getY() << ", " << p.getZ() << "]";
	}


protected:
	Type _x;
	Type _y;
	Type _z;

};




};

#endif