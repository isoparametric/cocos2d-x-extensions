
#include "CCLongPressGestureRecognizerLua.h"
#include "CCLuaEngine.h"

USING_NS_CC;
USING_NS_CC_EXT;

// LongPress GestureをLuaで使うためのラッパー

CCLongPressGestureRecognizerLua::CCLongPressGestureRecognizerLua()
: m_nScriptLongPressHandler(0)
{

}

bool CCLongPressGestureRecognizerLua::init()
{
    bool result = CCLongPressGestureRecognizer::init();

    return result;
}

void CCLongPressGestureRecognizerLua::didLongPress(CCObject* longpress)
{
    if (m_nScriptLongPressHandler) {
        CCLuaEngine* engine = CCLuaEngine::defaultEngine();
        CCLuaStack* stack = engine->getLuaStack();
        stack->pushCCObject(longpress, "CCLongPress");
        stack->executeFunctionByHandler(m_nScriptLongPressHandler, 1);
        stack->clean();
    }
}

void CCLongPressGestureRecognizerLua::registerScriptLongPressHandler(int nHandler)
{
    unregisterScriptLongPressHandler();
    this->setTarget(this, callfuncO_selector(CCLongPressGestureRecognizerLua::didLongPress));
    m_nScriptLongPressHandler = nHandler;
}

void CCLongPressGestureRecognizerLua::unregisterScriptLongPressHandler(void)
{
    if (m_nScriptLongPressHandler) {
        m_nScriptLongPressHandler = 0;
    }
}

bool CCLongPressGestureRecognizerLua::ccTouchBegan(CCTouch * pTouch, CCEvent * pEvent)
{
    bool result = CCLayer::ccTouchBegan(pTouch, pEvent);
    CCLongPressGestureRecognizer::ccTouchBegan(pTouch, pEvent);
    return result;
}

void CCLongPressGestureRecognizerLua::ccTouchMoved(CCTouch * pTouch, CCEvent * pEvent)
{
    CCLayer::ccTouchMoved(pTouch, pEvent);
}

void CCLongPressGestureRecognizerLua::ccTouchEnded(CCTouch * pTouch, CCEvent * pEvent)
{
    CCLongPressGestureRecognizer::ccTouchEnded(pTouch, pEvent);
    CCLayer::ccTouchEnded(pTouch, pEvent);
}
