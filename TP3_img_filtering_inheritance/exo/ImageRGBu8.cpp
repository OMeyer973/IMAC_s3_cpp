#include "ImageRGBu8.hpp"

#include <iostream>
#include <cstdlib>

//constructors
//default
ImageRGBu8::ImageRGBu8(const unsigned int width, const unsigned int height)
: _width(width), _height(height), _data(width * height * 3)//-> constructeur par taille de la class vector
{
	std::cout << "constructeur par défaut" << std::endl;
	//remplie le vecteur avec la valeur 255 (img blanche par défaut)
	std::fill(_data.begin(),_data.end(), 255);
};

ImageRGBu8::ImageRGBu8()
: _width(0), _height(0), _data()
{
};

//copy
//constructeur par copie facultatif. 
//par défaut le compilateur créé un constructeur par copie
//en appelant les constructeurs par copie de tous les membres
// (exactement ce qu'on a codé ici)
ImageRGBu8::ImageRGBu8(const ImageRGBu8& i)
: _width(i._width), _height(i._height), _data(i._data)
{
	std::cout << "constructeur par copie" << std::endl;
};

//destructor
//destructeur par défaut appelle les destructeurs de chacun de ses membres
//on n'a rien a coder
ImageRGBu8::~ImageRGBu8() 
{
};

ImageRGBu8::ImageRGBu8(const uint width, const uint height, const std::vector<unsigned char> &data)
:_width(width), _height(height), _data(data)
{
};

//methods
/*
ImageRGBu8& ImageRGBu8::operator= (const ImageRGBu8& v2) {
	if(&v2 == this) return *this;
	if (v2._size != _size) {
		std::cerr << "error : cant assign vector from vector of != size" << std::endl; 
		return *this;
	}
	std::copy(v2._data, v2._data+_size, _data);
	return *this;
}

ImageRGBu8  ImageRGBu8::operator+ (const ImageRGBu8& v2) const {
	assert(v2._size==_size && "error ImageRGBu8::operator+ can't add vectors of != size");
	ImageRGBu8 out = ImageRGBu8(_size);

	//prend les données entre _data, _data+size et v2._data, v2._data+size, 
	//leur applique l'opération std::plus<double>() 
	//et les range dans out._data, out._data+size
	std::transform(_data, _data+_size, v2._data, out._data, std::plus<double>());

	return out;
};


int ImageRGBu8::save(const std::string& filename) const {
	std::ofstream myfile;
	myfile.open(filename);

	if (!myfile.is_open()) {
		std::cerr << "error in ImageRGBu8::save : file open failed" << std::endl; 
		return EXIT_FAILURE;
	}

	myfile << _size <<"\n";
	for (size_t i=0; i<_size; i++) {
		myfile << _data[i] << " ";
	}
	myfile.close();
	return EXIT_SUCCESS;
};
*/