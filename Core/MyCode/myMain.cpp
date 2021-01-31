#include "myMain_C.h"
#include "myLib/service/input/keypad/keypad.h"
#include "myLib/service/input/ClassKeypad/ClassKeypad.h"
void myMainEvent()
{
    auto keypad=ClassKeypad::getInstance();
    while (1)
    {
        keypad->scan();
        keypad::scan();
    }
}
