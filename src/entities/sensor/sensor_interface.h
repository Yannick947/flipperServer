#ifndef ISENSOR_H
#define ISENSOR_H

class ISensor{
    public: 
        virtual bool get_ball_fallen()=0;      
        virtual ~ISensor(){}  
};

#endif