
#ifndef __CCSWIPE_GESTURE_RECOGNIZER_LUA_H__
#define __CCSWIPE_GESTURE_RECOGNIZER_LUA_H__

#include "cocos2d.h"
#include "cocos-ext.h"
#include "CCSwipeGestureRecognizer.h"

class CCSwipeGestureRecognizerLua : public CCSwipeGestureRecognizer
{
public:
    CCSwipeGestureRecognizerLua();
    CREATE_FUNC(CCSwipeGestureRecognizerLua);

    virtual void registerScriptSwipeHandler(int nHandler);
    virtual void unregisterScriptSwipeHandler(void);

private:
    virtual bool init();
    void didSwipe(CCObject* swipe);

protected:
    int m_nScriptSwipeHandler;

};

#endif

