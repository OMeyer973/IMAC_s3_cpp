#include <cstdlib>
#include <exception>
#include <string>

#ifndef __ERROR_HPP__
#define __ERROR_HPP__


class Error : public std::exception {

public:
	///\brief constructor
	Error();
	Error(int level, int code, std::string message);
	///\brief destructor
	~Error();

	inline const int getLevel() const { return _level; };
	inline const int getCode() const { return _code; };
	virtual const char* const what() { return _message.c_str(); };

private:
	int _level;
	int _code;
	std::string _message;


};

#endif