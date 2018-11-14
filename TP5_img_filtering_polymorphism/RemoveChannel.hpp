#include <iostream>
#include <vector>
#include "Filter.hpp"

#ifndef __REMOVECHANNEL_HPP__
#define __REMOVECHANNEL_HPP__


/// \class Filter
/// \brief class defining filters to apply to imageRGBU8 images
class RemoveChannel : public Filter {
   
	public:
	    /// \brief default constuctor
    	RemoveChannel();

	    /// \brief constuctor with threshold
    	RemoveChannel(unsigned char channel);
	    
	    /// \brief method to apply the filter to an image
	    void applyFilter(ImageRGBU8& image);

	private: 
		unsigned char _channel;

};


#endif
