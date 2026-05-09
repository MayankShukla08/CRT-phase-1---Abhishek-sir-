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
    


// problem -2 -- 
// Constructor Overloading

#include <iostream>
using namespace std;

class Rectangle {
    public : 
   int length;
   int width;
   
   Rectangle (){
       length = 1;
       width = 1;
       
   }
   Rectangle(int side){
       length = side;
       width = side;
       
       
   }
   Rectangle(int side1, int side2){
       length = side1;
       width = side2;
       
   }
   void showArea (){
       cout << length * width << "\n";
   }
};

int main (){
    Rectangle r1;
    Rectangle r2(5);
    Rectangle r3(5,4);
    
    r1.showArea();
    r2.showArea();
    r3.showArea();
    
}