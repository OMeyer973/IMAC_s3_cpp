#include <cstdlib>
#include <exception>
#include <string>
#include <iostream>

#ifndef __ERROR_HPP__
#define __ERROR_HPP__

//more simple exception class available in TP8
class Error : public std::exception {

public:
	///\brief constructor
	Error();
	Error(
		const int level, const int code, const std::string& message,  
		const char* file, const int line);
	///\brief destructor
	~Error();

	inline const int getLevel() const { return _level; };
	inline const int getCode() const { return _code; };
	const void what();

private:
	int _level;
	int _code;
	std::string _message;
	std::string _file;
	int _line;

};

#endif