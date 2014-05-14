#include "StandardOutputScreenTapListener.hpp"

using namespace Leap;

void StandardOutputScreenTapListener::onScreenTap(const ScreenTapGesture& screenTap) {
	std::cout
		<< "Screen tap event has occured in: ("
		<< screenTap.position()[0] << ","
		<< screenTap.position()[1] << ","
		<< screenTap.position()[2] << ")"
		<< std::endl;
}
