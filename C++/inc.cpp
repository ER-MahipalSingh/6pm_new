#include <iostream>
using namespace std;

class Parent{
    public:
        void show(){
            cout << "Parent Class"<<endl;
        }
};

class Child{
    public:
        void display(){
            cout << "Child class"<<endl;
        }
};

class SubChild : public Parent, public Child{
    public:
        void subChildFun(){
            cout << "Sub Child Fun"<<endl;
        }
};

int main(){
    SubChild obj;

    obj.subChildFun();
    obj.display();
    obj.show();

    return 0;
}