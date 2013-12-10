
#include "CCSwipeGestureRecognizerLua.h"
#include "CCLuaEngine.h"

USING_NS_CC;
USING_NS_CC_EXT;

// Swipe GestureをLuaで使うためのラッパー

CCSwipeGestureRecognizerLua::CCSwipeGestureRecognizerLua()
: m_nScriptSwipeHandler(0)
{

}

bool CCSwipeGestureRecognizerLua::init()
{
    bool result = CCSwipeGestureRecognizer::init();

    return result;
}

void CCSwipeGestureRecognizerLua::didSwipe(CCObject* swipe)
{
    if (m_nScriptSwipeHandler) {
        CCLuaEngine* engine = CCLuaEngine::defaultEngine();
        CCLuaStack* stack = engine->getLuaStack();
        stack->pushCCObject(swipe, "CCSwipe");
        stack->executeFunctionByHandler(m_nScriptSwipeHandler, 1);
        stack->clean();
    }
}

void CCSwipeGestureRecognizerLua::registerScriptSwipeHandler(int nHandler)
{
    unregisterScriptSwipeHandler();
    this->setTarget(this, callfuncO_selector(CCSwipeGestureRecognizerLua::didSwipe));
    m_nScriptSwipeHandler = nHandler;
}

void CCSwipeGestureRecognizerLua::unregisterScriptSwipeHandler(void)
{
    if (m_nScriptSwipeHandler) {
        m_nScriptSwipeHandler = 0;
    }
}
