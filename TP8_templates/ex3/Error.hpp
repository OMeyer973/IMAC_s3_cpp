#include <cstdlib>
#include <exception>
#include <string>
#include <iostream>

#ifndef __ERROR_HPP__
#define __ERROR_HPP__

class Error : public std::exception {

public:
	///\brief constructor
	Error();
	Error(const std::string& message, const char* file, const int line);
	
	///\brief destructor
	~Error();

	const void what();

private:
	std::string _message;
	std::string _file;
	int _line;

};

#endif