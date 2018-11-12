#include <algorithm> // min

#include "Threshold.hpp"


Threshold::Threshold() : _threshold(128)
{}

Threshold::Threshold(unsigned char threshold) : _threshold(threshold)
{}

void Threshold::applyFilter(ImageRGBU8& image) {
    for(unsigned int x=0; x<image.width(); x++){
        for(unsigned int y=0; y<image.height(); y++){
            unsigned char value = (int)image(x,y,0) + (int)image(x,y,1) + (int)image(x,y,2) / 3;
            if(value < _threshold)
                image(x,y,0) = image(x,y,1) = image(x,y,2) = 0;
            else
                image(x,y,0) = image(x,y,1) = image(x,y,2) = 255;
        }
    }
}
            
