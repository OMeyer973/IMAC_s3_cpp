#include <algorithm> // min

#include "Filters.hpp"


Filters::Filters() 
: _size(10), _nbFilters(0)
{
    _filters = new Filter*[10];
}

Filters::Filters(unsigned int size) : _size(size), _nbFilters(0)
{
    _filters = new Filter*[size];
}

int Filters::addFilter(Filter& filter) {

    if (_nbFilters >= _size) {
        std::cerr << "can't add filter to list : lis is full" << std::endl;
        return EXIT_FAILURE;
    }

    _filters[_nbFilters] = &filter;
    _nbFilters ++;
    return EXIT_SUCCESS;
}

void Filters::applyFilters(ImageRGBU8& image) {
    for (size_t i=0; i<_nbFilters; i++) {
        _filters[i]->applyFilter(image);
    }
}
