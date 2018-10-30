#ifndef IMAGERGBU8_HPP__
#define IMAGERGBU8_HPP__

#include <cstdlib>
#include <string>
#include <vector>


class ImageRGBu8 {

	public:
		///\brief constructor
		ImageRGBu8(const unsigned int width, const unsigned int height);
		ImageRGBu8();
		ImageRGBu8(const ImageRGBu8& ImageRGBu8);
		ImageRGBu8(const uint width, const uint height, const std::vector<unsigned char> &data);

		///\brief destructor
		~ImageRGBu8();

		//Methods
		inline unsigned int height() const { 
			return _height;
		};
		inline unsigned int width() const { 
			return _width;
		};
		
		//2 opérateurs () : un qui est getteur uniquement 
		//1 pour pouvoir être appelé par des fonctions / méthodes const
		inline const unsigned char &operator()(const unsigned int x, const unsigned int y, const unsigned int c) const {
			return _data[3*(x+_width*y)+c];
		};

		//et 1 qui sert de getteur ET de setteur: on retourne une référence (qui peut être modifiée car non const)
		inline unsigned char &operator()(const unsigned int x, const unsigned int y, const unsigned int c) {
			return _data[3*(x+_width*y)+c];
		};

		inline unsigned char* data() {
			return _data.data();
		};

		inline const unsigned char* data() const {
			return _data.data();
		};


		/*
		ImageRGBu8& operator= (const ImageRGBu8& v2);
		
		int save(const std::string& filename) const;
 		*/
	private:
 		unsigned int _width;
 		unsigned int _height;
 		std::vector<unsigned char> _data;

};


#endif