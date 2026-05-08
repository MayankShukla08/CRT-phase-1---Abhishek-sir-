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




//problem -2 
// Polymorphism
// Polymorphism means one name but many forms
//same function behave diffrently depending on the type of the object it called 
// Two types 
// Complie time Polymorphism -- function overloading -- static
// resolve at compile time 
// function overloads -- same function name , but diffrent parameters
// faster excution
// Run time Polymorphism -- function overriding -- dynamic
// resolve at run time 
// function runtime -- same function , same parameters , but diffrent class
// uses a virtual keyword in the base class
// acheving this through the concept of Inheritance




// types of Polymorphism --2.1
// Function overloading

#include <iostream>
using namespace std;
class maths {
    public :
    void add (int a, int b){
        cout << a + b << "\n";
    }
public :
void add (int a , int b, int c ){
    cout << a + b + c << "\n";
    
}
public :
void add (double a , double b) {
    cout << a +b << "\n";
}
};
int main (){
    maths m;
    m.add (5,2);
    m.add (5,5,5,);
    m.add (5.2,2.2);
}



// types of Polymorphism --2.1
// Function overloading

#include <iostream>
using namespace std;

class Animal {
    public :
   virtual void sound (){
        cout << "animal makes sound" ;
        }
    };
    
class Dog : public Animal {
    public:
    void sound() override {
        cout << "dog makes a sound" << "\n";
    }
};

class Cat : public Animal {
    public :
     void sound() override {
        cout << "Cat makes a sound"<< "\n";
    }
    
};

int main (){
    Dog d;
    Cat c;
    d.sound();
    c.sound();
    
}