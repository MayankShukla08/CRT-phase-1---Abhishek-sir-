// Day - 9 
// problem -1 -- 
// Function Overloading
#include <iostream>
using namespace std;

class Appliance {
    public : 
    virtual void turnOn(){
        cout << "Appliance is starting up... "<< "\n";
    }
    virtual void work () = 0;
};

class Fan : public Appliance{
    public:
    void turnOn()override{
        cout << "Fan blades are moving slowly..."<<"\n";
    }
    void work ()override {
        cout << "Fan is giving me cool air..."<<"\n";
    }
    
};

class Toaster : public Appliance {
    void work ()override{
        cout << "toaster is heating up the breads..."<<"\n";
    }
};

int main (){
    Appliance* kitchenApp;
    Fan myfan;
    kitchenApp = &myfan;
    kitchenApp -> turnOn();
    kitchenApp -> work();

      
    Toaster myToast;
    kitchenApp = &myToast;
    kitchenApp -> turnOn();
    kitchenApp -> work();
    
}
    

