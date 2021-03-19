#ifndef IMOTOR_H
#define IMOTOR_H

class IMotor{
    public: 
        virtual void set_speed(float speed)=0;  
        virtual float get_speed()=0;      
    
        virtual ~IMotor(){}  
};

#endif