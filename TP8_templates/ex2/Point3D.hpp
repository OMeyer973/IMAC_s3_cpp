#include <iostream>
#include "Error.hpp"

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
	:_x(p.x()), _y(p.y()), _z(p.z())
	{};

	///\brief destructor
	~Point3D(){};

	///\brief const getters
	const T& x() const { return _x; };
	const T& y() const { return _y; };
	const T& z() const { return _z; };

	const T& operator[] (const size_t i) const { 
		switch (i) {
			case 0 : return _x;
			case 1 : return _y;
			case 2 : return _z;
			default: break;
		}
		throw Error("Point 3D index out of range [0,2]", __FILE__, __LINE__);
	}

	///\brief non-const getters
	T& x() { return _x; };
	T& y() { return _y; };
	T& z() { return _z; };

	T& operator[] (const size_t i) { 
		switch (i) {
			case 0 : return _x;
			case 1 : return _y;
			case 2 : return _z;
			default: break;
		}
		throw Error("Point 3D index out of range [0,2]", __FILE__, __LINE__);
	}



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
		return os << "[" << p._x << ", " << p._y << ", " << p._z << "]";
	}


protected:
	T _x;
	T _y;
	T _z;

};




};

#endif