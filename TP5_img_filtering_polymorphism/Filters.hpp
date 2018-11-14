#include <iostream>
#include <vector>
#include "ImageRGBU8.hpp"
#include "Filter.hpp"


#ifndef __FILTERS_HPP__
#define __FILTERS_HPP__


/// \class Filter
/// \brief class defining filters to apply to imageRGBU8 images
class Filters {

	public:
		 /// \brief default constuctor: list of 10 filters max
    	Filters();

	    /// \brief constuctor with size
    	Filters(unsigned int size);
	    
	    /// \brief add a filter to the list   
	    /// \param filter : filter to add to the list
    	/// \return EXIT_SUCCESS of EXIT_FAILURE if the filter could be added or
	    int addFilter(Filter& filter);

	    /// \brief method to apply the filter to an image
	    void applyFilters(ImageRGBU8& image);


		inline unsigned int size() const { return _size; }
		inline unsigned int nbFilters() const { return _nbFilters; }
		inline Filter** filters() const { return _filters; }

	private:
		const unsigned int _size;
		unsigned int _nbFilters;
		Filter** _filters;
};


#endif
