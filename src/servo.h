#ifndef ROBOKEN_INTERFACE_MOTOR
#define ROBOKEN_INTERFACE_MOTOR

class Servo {
    public:
    virtual void set_degree(int angle) = 0;
    virtual void set_radian(double angle) {
        set_degree(angle * 180 / PI);
    }
    private:
    const double PI = 3.14159265358979;
};

#endif