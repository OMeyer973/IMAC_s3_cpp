#include "Error.hpp"


Error::Error()
:_level(0), _code(0), _message(" ")
{};

Error::Error(int level, int code, std::string message)
:_level(level), _code(code), _message(message)
{};

Error::~Error() {};
