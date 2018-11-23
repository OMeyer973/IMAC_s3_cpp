#include "Error.hpp"


Error::Error()
:_message("void exception"), _file("none"), _line(0)
{};

Error::Error(const std::string& message, const char* file, const int line)
:_message(message), _file(file), _line(line)
{};

Error::~Error() {};


const void Error::what() {
	std::cerr << "exception in " << _file
	<< ", line " 	<< _line 
	<< " : " << _message << std::endl;

};