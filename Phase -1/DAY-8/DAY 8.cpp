// day -8 


//1. types of inheritance 
//1.1 single inheritance 
//1.2 multilevel 
//1.3 multiParent 
//1.4 heirarchal 
//1.5 hybrid 


//1.1 single inheritance 
#include <iostream>
using namespace std;

class vehicle {
    public:
    void start(){
        cout << "vehicle starts" << "\n";
    }
};

class car : public vehicle {
    public:
    void drive (){
        cout << "car is running" << "\n";
    }
};



//1.2 Multilevel inheritance
#include <iostream>
using namespace std;

class vehicle {
    public:
    void start(){
        cout << "vehicle starts" << "\n";
    }
};

class car : public vehicle {
    public:
    void drive (){
        cout << "car is running" << "\n";
    }
};

class speedoMeter : public car {
    public :
    void speed (){
        cout << "car is running at 60km/h" << "\n";
    }
};

int main (){
    speedoMeter obj1;
   obj1.speed();
   obj1.drive();
   obj1.start();
}




//1.3 Heirarchal Inheritance

#include <iostream>
using namespace std;

class vehicle {
    public:
    void start(){
        cout << "vehicle starts" << "\n";
    }
};

class bike : public vehicle {
    public:
    void drive (){
        cout << "bike is running" << "\n";
    }
};

class car : public vehicle {
    public:
    void going (){
        cout << "car is going" << "\n";
    }
};

int main (){
     car obj1;
    obj1.start();
    obj1.going();
  
  
  bike obj2;
  obj2.start();
  obj2.drive();
  
}



//1.4 Multiple Inheritance

#include <iostream>
using namespace std;

class Parent1  {
    public :
    void giveMeMoney(){
        cout << "mummy paise do mujhe" << "\n";
    }
};

class Parent2  {
    public:
    void giveMeMoney(){
        cout <<"papa paise do mujhe";
    }  
};

class child : public Parent1, public Parent2 {
    //NO LOGIC
};


// Judadu tarika for less numbers
int main (){
  child obj1;
  //obj1.giveMeMoney(); 
  obj1.Parent1::giveMeMoney();
   obj1.Parent2::giveMeMoney();
    
}

                                            

//1.5 Hybride Inheritance

#include <iostream>
using namespace std;

class A  {
    public :
    void print (){
        cout << "BJP Wons" << "\n";
    }
};

class B : virtual public A {
     //NO LOGIC
};

class C : virtual public A {
     //NO LOGIC
};

class D : public B , public C{
     //NO LOGIC
};

int main (){
  D obj1;
  obj1.print();
}