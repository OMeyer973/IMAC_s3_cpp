#include <iostream>
#include <vector>
#include "ImageRGBU8.hpp"


#ifndef __FILTER_HPP__
#define __FILTER_HPP__


/// \class Filter
/// \brief class defining filters to apply to imageRGBU8 images
class Filter {
     
public:

    /// \brief method to apply the filter to an image
    virtual void applyFilter(ImageRGBU8&) = 0;
};


#endif
