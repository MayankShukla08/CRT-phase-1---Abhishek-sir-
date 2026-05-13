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



// problem -3 -- 
// Intorduction to Array + Traversal + Memory Layout 



#include <iostream>
using namespace std;

void traversal (int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i]<< " ";
        
    }
}

int main(){
    int arr[] ={10,20,30,40,50};
    traversal (arr,5);
}


// outpus = address
#include <iostream>
using namespace std;

void traversal (int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << &arr[i]<< " ";
        
    }
}

int main(){
    int arr[] ={10,20,30,40,50};
    traversal (arr,5);
}



// Problem -- 4
// Print memeory address of each data
void Addresstraversal(int arr[], int size){
     for(int i = 0; i < size; i++) {
         cout << &arr[i] <<" ";
     }
 }
int main() {
    int arr[] = {10,20,30,40,50};
    Addresstraversal(arr, 5);
}


// problem -5  -- 
// Linear search 



#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size , int targetValue){
    for (int i=0; i < size; i++){
        if (arr[i] == targetValue){
            return i;
        }
    }
    return -1;
}

int main (){
    int arr[] ={10,20,30,40,50};
    int targetIndex = LinearSearch(arr , 5,40);
    cout << targetIndex;
}