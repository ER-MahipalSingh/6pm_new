#include <iostream>
using namespace std;

class Parent{
    public:
        void show(){
            cout << "Parent Class"<<endl;
        }
};

class Child : public Parent{
    public:
        void display(){
            cout << "Child class"<<endl;
        }
};

class SubChild : public Child{
    public:
     void childFun(){
        cout << "Sub Child class"<<endl;
     }
};

int main(){
    // Child obj;

    // obj.display();
    // obj.show();

    SubChild obj;

    obj.childFun();
    obj.display();
    obj.show();

    return 0;
}