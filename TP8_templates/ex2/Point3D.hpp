#include <iostream>

#ifndef __POINT3D_HPP__
#define __POINT3D_HPP__

namespace CPPIMAC2 {


template<typename T>
class Point3D {

public:
	///\brief default constructor
	Point3D()
	:_x(0), _y(0), _z(0)
	{};
	
	///\brief default constructor
	Point3D(const T& x, const T& y, const T& z)
	:_x(x), _y(y), _z(z)
	{};
	
	///\brief copy constructor
	Point3D(const Point3D<T>& p)
	:_x(p._x), _y(p._y), _z(p._z)
	{};

	///\brief copy constructor from vector of other type 
	template<typename U>
	Point3D(const Point3D<U>& p)
	:_x(p.getX()), _y(p.getY()), _z(p.getZ())
	{};

	///\brief destructor
	~Point3D(){};

	///\brief getters
	T getX() const { return _x; };
	T getY() const { return _y; };
	T getZ() const { return _z; };

	///\brief add a vec and a scalar
	Point3D operator+ (const T& t) const {
		return Point3D(_x+t, _y+t, _z+t);
	};
	
	///\brief add 2 vec
	Point3D operator+ (const Point3D<T>& p) const {
		return Point3D(_x+p._x, _y+p._y, _z+p._y);
	};

	///\brief display with cout << ... <<
	friend std::ostream &operator<<(std::ostream &os, const Point3D &p) {
		return os << "[" << p.getX() << ", " << p.getY() << ", " << p.getZ() << "]";
	}


protected:
	T _x;
	T _y;
	T _z;

};




};

#endif