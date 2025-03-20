#ifndef WARP_DRIVE_OVERHEATING_H
#define WARP_DRIVE_OVERHEATING_H
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;


class WarpDriveOverheating : public overflow_error
{
public:
	WarpDriveOverheating() : overflow_error("Warp Drive has exceeded safe temperature tolerance.") {};
};

#endif