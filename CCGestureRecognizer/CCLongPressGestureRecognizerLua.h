
#ifndef __CCLONGPRESS_GESTURE_RECOGNIZER_LUA_H__
#define __CCLONGPRESS_GESTURE_RECOGNIZER_LUA_H__

#include "cocos2d.h"
#include "cocos-ext.h"
#include "CCLongPressGestureRecognizer.h"

class CCLongPressGestureRecognizerLua : public CCLongPressGestureRecognizer
{
public:
    CCLongPressGestureRecognizerLua();
    CREATE_FUNC(CCLongPressGestureRecognizerLua);

    virtual void registerScriptLongPressHandler(int nHandler);
    virtual void unregisterScriptLongPressHandler(void);

    virtual bool ccTouchBegan(cocos2d::CCTouch * pTouch, cocos2d::CCEvent * pEvent);
    virtual void ccTouchMoved(cocos2d::CCTouch * pTouch, cocos2d::CCEvent * pEvent);
    virtual void ccTouchEnded(cocos2d::CCTouch * pTouch, cocos2d::CCEvent * pEvent);

    virtual void registerWithTouchDispatcher(void);
private:
    virtual bool init();
    void didLongPress(CCObject* longpress);

protected:
    int m_nScriptLongPressHandler;

};

#endif

