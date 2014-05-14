#include "StandardOutputKeyTapListener.hpp"

using namespace Leap;

void StandardOutputKeyTapListener::onKeyTap(const KeyTapGesture& keyTap) {
	std::cout
		<< "Key tap event has occured in: ("
		<< keyTap.position()[0] << ","
		<< keyTap.position()[1] << ","
		<< keyTap.position()[2] << ")"
		<< std::endl;
}
