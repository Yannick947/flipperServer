#ifndef BLUETOOTH_CONTROLLER_H
#define BLUETOOTH_CONTROLLER_H

class BluetoothController{
    private: 
        int adress; 
    
    public: 
        BluetoothController(int adress); 
        bool connect(); 
};

#endif