#include <iostream>
#include <cstdlib>
#include <string>

#include "ImageRGBU8.hpp"
#include "ioPPM.hpp"
#include "Threshold.hpp"
#include "Filters.hpp"

int main(int argc, char **argv) {

	// load arguments
	if(argc != 2){
		std::cerr << "usage: " << argv[0] << "image.ppm" << std::endl;
		return EXIT_FAILURE;
	}
	/*
	//EXO 1
    // read image
	ImageRGBU8 image1;
	readPPM(argv[1], image1);
	// apply filter and save
	Threshold t(100);
	t.applyFilter(image1);
	writePPM("test1.ppm", image1);
	*/

	//tests
    // read image
	ImageRGBU8 image1;
	readPPM(argv[1], image1);
	// apply filter and save

	Filters filters(2);
	Threshold t1(150);
	Threshold t2(100);
	filters.addFilter(t1);
	filters.addFilter(t2);
	(filters.filters()[0])->applyFilter(image1);
	(filters.filters()[1])->applyFilter(image1);
	writePPM("test2.ppm", image1);
	

	/*
	// load image
	ImageRGBU8 image1;
	readPPM(argv[1], image1);
	// apply filters
	Filters filters(2);
	Threshold t1(150);
	Threshold t2(100);
	
	filters.addFilter(t1);
	filters.addFilter(t2);
	std::cout << "coucou" << std::endl;
	filters.applyFilters(image1);
	// save image
	writePPM("test_ex3.ppm", image1);
	*/
	return(EXIT_SUCCESS);
}
