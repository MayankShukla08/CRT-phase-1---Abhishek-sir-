// DAY -- 14 -- MAY -14  

// Problem 1 -- Trsversal of LL:
#include <iostream>
using namespace std;
    class Node{
        public:
    int data;
    Node* next;

    Node(int new_data) {
    this ->data = new_data;
    this ->next = nullptr;
    }
};

Node* head = nullptr;
void traversal() {
    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }    
}

   int main ()
   {
       head = new Node(10);
       head ->next = new Node(20);
        head ->next ->next = new Node(30);
        head ->next ->next ->next = new Node(40);
        traversal();
    return 0;
}


// Problem 2 -- Delete the data ay the head of the ll

#include <iostream>
using namespace std;
    class Node{
        public:
    int data;
    Node* next;

    Node(int new_data) {
    this ->data = new_data;
    this ->next = nullptr;
    }
};

Node* head = nullptr;
void deleteAthead(){
    if (head == nullptr){
        cout << "List is Empty";
        return;
    }
    head = head->next;  
    
}
void display() {
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL";
}



   int main ()
   {
       head = new Node(10);
       head ->next = new Node(20);
        head ->next ->next = new Node(30);
        head ->next ->next ->next = new Node(40);
        deleteAthead();
        display();
        return 0;
}