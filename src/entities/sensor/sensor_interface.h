#ifndef ISENSOR_H
#define ISENSOR_H

class ISensor{
    private: 
        virtual void init_gpio_pin()=0;
    public: 
        virtual bool get_ball_fallen()=0;  
        virtual void read_sensor()=0;      
    
        virtual ~ISensor(){}  
};

#endif