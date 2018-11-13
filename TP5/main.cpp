#include <iostream>
#include <cstdlib>
#include <string>

#include "ImageRGBU8.hpp"
#include "ioPPM.hpp"
#include "Threshold.hpp"
#include "Filters.hpp"
#include "RemoveChannel.hpp"

int main(int argc, char **argv) {

	// load arguments
	if(argc != 2){
		std::cerr << "usage: " << argv[0] << "image.ppm" << std::endl;
		return EXIT_FAILURE;
	}
	
	//EXO 1
    // read image
	ImageRGBU8 image;
	readPPM(argv[1], image);
	// apply filter and save
	Threshold t(100);
	t.applyFilter(image);
	writePPM("test1.ppm", image);
	

	//EXO 3
	// load image
	ImageRGBU8 image1;
	readPPM(argv[1], image1);
	// apply filters
	Filters filters(5);
	Threshold t1(150);
	Threshold t2(100);
	
	filters.addFilter(t1);
	filters.addFilter(t2);
	filters.applyFilters(image1);
	// save image
	writePPM("test_ex3.ppm", image1);
	

	//EXO 4
	RemoveChannel r1(0);
	RemoveChannel r2(1);
	filters.addFilter(r1);
	filters.addFilter(r2);

	filters.applyFilters(image1);
	std::cout << "filters : " << filters.size() << std::endl;
	// save image
	writePPM("test_ex4.ppm", image1);


	std::cout << "success" << std::endl;
	return(EXIT_SUCCESS);
}
