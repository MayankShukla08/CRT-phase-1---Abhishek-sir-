//Day -7 -- 
// Access Specifier 
// 7.2 -- public 


#include <iostream>
using namespace std;

class BankAccount {
    
    private:
        int balance = 5000;
    
    public:
    void showBalance (){
        cout << "Balance in your account is : " << balance;
    }
};

    int main (){
        BankAccount myaccount ;
        myaccount.showBalance();
}



// Access Specifier 
// 7.3 -- protected 


#include <iostream>
using namespace std;

class Parent {
  protected:
  int secretCode = 1234;
  
};
    class child : public Parent{
        public:
      void accessOfSecretCode(){
            cout <<"secretCode of the locker is " << secretCode;
        }
    };
    
    int main (){
        child obj1;
        obj1.accessOfSecretCode();
}


// Constructors
// program 2- 
// types 2.1 default 
#include <iostream>
using namespace std;

class wifiConnection {
public:    
    string networkName;
    string password;
    
    // Constructor
    wifiConnection() {
        networkName = "ACTFibre";
        password = "BJP wons";
    }
    
public:
void showDetails() {
   cout << "NetWork name is " << networkName << " and its password is " << password; 
    }
};

int main() {
    wifiConnection obj1;
    obj1.showDetails();
}



// Constructors
// program 2- 
// types 2.2 Parameterized Constructor

#include <iostream>
using namespace std;

class Student {
public:    
    string name;
    int id;
    
    // Constructor
   Student(string StudentName, int StudentID) {
        name = StudentName;
        id = StudentID;
    }
    
public:
void displayDetails() {
   cout << name << " " << id; 
    }
};

int main() {
    Student std1("raka", 101);
    std1.displayDetails();
}