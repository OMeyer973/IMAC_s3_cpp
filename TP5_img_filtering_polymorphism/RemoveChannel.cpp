#include <algorithm> // min

#include "RemoveChannel.hpp"


RemoveChannel::RemoveChannel() : _channel(0)
{}

RemoveChannel::RemoveChannel(unsigned char channel) : _channel(channel)
{
	if (channel < 0 || channel > 2) {
		_channel = 2;
		std::cerr << "Warning : RemoveChannel filter constructed with channel > 2. 2 wil be used" << std::endl; 
	} 
}

void RemoveChannel::applyFilter(ImageRGBU8& image) {
    for(unsigned int x=0; x<image.width(); x++){
        for(unsigned int y=0; y<image.height(); y++){
            image(x,y,_channel) = 0;
        }
    }
}
            
