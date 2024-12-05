#ifndef ROBOKEN_INTERFACE_MOTOR
#define ROBOKEN_INTERFACE_MOTOR
#include <Arduino.h>

class Motor {
    public:
    enum class Dir {
        CW,
        CCW
    };
    virtual void rotate(int32_t speed) {
        if(speed < 0) {
            this->ccw(-speed);
        }
        else{
            this->cw(speed);
        }
    }
    virtual void rotate(Dir dir, uint16_t speed) = 0;
    virtual void cw(uint16_t speed) = 0;
    virtual void ccw(uint16_t speed) = 0;
};

#endif
