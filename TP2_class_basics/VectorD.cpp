#include "VectorD.hpp"

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cassert>
#include <algorithm>
#include <string>
#include <fstream>

//constructors
//default
VectorD::VectorD(const size_t size)
: _size(size) 
{
	std::cout << "constructeur par défaut" << std::endl;
	_data = new double[size];
};

//copy
VectorD::VectorD(const VectorD& v)
: _size(v._size) {
	std::cout << "constructeur par copie" << std::endl;
	_data = new double[v._size];
	std::copy(v._data, v._data+v._size, _data);
};

//destructor
VectorD::~VectorD() 
{
	delete[] _data;
};

//methods
void VectorD::normalize() {
	double norm=0;
	for (size_t i=0; i<_size; i++) {
		norm += _data[i] * _data[i];
	}
	norm = sqrt(norm);

	if (fabs(norm)>=10e-10) {
		for (size_t i=0; i<_size; i++) {
			_data[i] /= norm;
		}
	}
};

VectorD& VectorD::operator= (const VectorD& v2) {
	if(&v2 == this) return *this;
	if (v2._size != _size) {
		std::cerr << "error : cant assign vector from vector of != size" << std::endl; 
		return *this;
	} 
	/*
	for (size_t i=0; i<_size; i++) {
		_data[i] = v2._data[i];
	}
	*/
	//même chose que la boucle au dessus mais + opti
	std::copy(v2._data, v2._data+_size, _data);
	return *this;
}

VectorD  VectorD::operator+ (const VectorD& v2) const {
	assert(v2._size==_size && "error VectorD::operator+ can't add vectors of != size");
	VectorD out = VectorD(_size);

	/*
	for (size_t i=0; i<_size; i++) {
		out._data[i] = _data[i] + v2._data[i];
	}
	*/

	//prend les données entre _data, _data+size et v2._data, v2._data+size, 
	//leur applique l'opération std::plus<double>() 
	//et les range dans out._data, out._data+size
	//(même effet que la boucle au dessus, mais + opti en transfert de données)
	std::transform(_data, _data+_size, v2._data, out._data, std::plus<double>());

	return out;
};


int VectorD::save(const std::string& filename) const {
	std::ofstream myfile;
	myfile.open(filename);

	if (!myfile.is_open()) {
		std::cerr << "error in VectorD::save : file open failed" << std::endl; 
		return EXIT_FAILURE;
	}

	myfile << _size <<"\n";
	for (size_t i=0; i<_size; i++) {
		myfile << _data[i] << " ";
	}
	myfile.close();
	return EXIT_SUCCESS;
};