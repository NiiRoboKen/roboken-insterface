#ifndef ROBOKEN_INTERFACE_MOTOR
#define ROBOKEN_INTERFACE_MOTOR
#include <cmath>

class Servo {
    public:
    virtual void set_degree(int angle) = 0;
    virtual void set_radian(double angle) {
        set_degree(angle * 180 / M_PI);
    }
};

#endif