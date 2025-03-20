#ifndef ANGRY_CAT_EXCEPTION_H
#define ANGRY_CAT_EXCEPTION_H
#include <stdexcept>
using namespace std;

class AngryCatException : public runtime_error
{
public:
	AngryCatException() : runtime_error("Made kitty angry!") {};
	AngryCatException(string message) : runtime_error(message) {};
};



#endif

