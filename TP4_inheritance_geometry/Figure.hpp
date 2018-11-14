#ifndef FIGURE_HPP__
#define FIGURE_HPP__

#include <cstdlib>
#include <string>
#include <vector>
#include <iostream>

class Figure {

	public:


		//\brief methods
		virtual void whoAmI() const = 0;
		virtual double surface() const = 0;
};

#endif