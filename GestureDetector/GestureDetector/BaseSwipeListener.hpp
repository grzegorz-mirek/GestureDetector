#ifndef BASE_SWIPE_LISTENER_HPP
#define BASE_SWIPE_LISTENER_HPP

#include "AbstractGestureListener.hpp"
#include "Direction.h"

/*
 * Abstract class that is designed to be base class for implementing concrete Swipe listeners.
 * @author: Grzegorz Mirek
*/
class BaseSwipeListener : public AbstractGestureListener {
protected:
	void onGestureDetected(const Leap::Gesture&) override;
	Leap::Gesture::Type getGestureType() override;
	virtual void onLeftSwipe(const Leap::SwipeGesture& swipe) = 0;
	virtual void onRightSwipe(const Leap::SwipeGesture& swipe) = 0;
	virtual void onUpSwipe(const Leap::SwipeGesture& swipe) = 0;
	virtual void onDownSwipe(const Leap::SwipeGesture& swipe) = 0;
private:
	Direction calculateDirection(const Leap::SwipeGesture& swipe);
	Direction determineDirection(float horizontalSwipeValue, float verticalSwipeValue);
	bool isHorizontalSwipe(float horizontalSwipeValue, float verticalSwipeValue);
};

#endif