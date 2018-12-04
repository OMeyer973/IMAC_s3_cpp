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
	Error(const std::string& message);
	Error(const std::string& message, const char* file, const int line);
	// how to use :
	// Error error("error details...", __FILE__, __LINE__);
	
	///\brief destructor
	~Error();

	const void what();

private:
	std::string _message;
	std::string _file;
	int _line;

};

#endif