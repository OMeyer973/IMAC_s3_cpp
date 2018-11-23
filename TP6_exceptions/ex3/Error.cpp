#include "Error.hpp"


Error::Error()
:_level(0), _code(0), _message("void exception"), _file("none"), _line(0)
{};

Error::Error(const int level, const int code, const std::string& message,  
		const char* file, const int line)
:_level(level), _code(code), _message(message), _file(file), _line(line)
{};

Error::~Error() {};


const void Error::what() {
	std::cerr << "exception : " 			<< std::endl;
	std::cerr << "	level : " 	<< _level 	<< std::endl;
	std::cerr << "	code : " 	<< _code 	<< std::endl;
	std::cerr << "	message : " << _message << std::endl;
	std::cerr << "	file : "	<< _file 	<< std::endl;
	std::cerr << "	line : " 	<< _line 	<< std::endl;

};