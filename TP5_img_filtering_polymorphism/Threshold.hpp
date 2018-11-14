#include <iostream>
#include <vector>
#include "Filter.hpp"

#ifndef __TRESHOLD_HPP__
#define __TRESHOLD_HPP__


/// \class Filter
/// \brief class defining filters to apply to imageRGBU8 images
class Threshold : public Filter {
   
	public:
	    /// \brief default constuctor
    	Threshold();

	    /// \brief constuctor with threshold
    	Threshold(unsigned char threshold);
	    
	    /// \brief method to apply the filter to an image
	    void applyFilter(ImageRGBU8& image);

	private: 
		unsigned char _threshold;

};


#endif
