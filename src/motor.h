#ifndef ROBOKEN_INTERFACE_MOTOR
#define ROBOKEN_INTERFACE_MOTOR

class Motor {
    public:
    void rotate(int speed, int dir){
        if(dir == 1) {
            this->ccw(-speed);
        }
        else{
            this->cw(speed);
        }
    }
    void rotate(int speed) {
        if(speed < 0) {
            this->ccw(-speed);
        }
        else{
            this->cw(speed);
        }
    }
    virtual void cw(int speed) = 0;
    virtual void ccw(int speed) = 0;
};

#endif
