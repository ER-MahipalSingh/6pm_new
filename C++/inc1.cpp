#include <iostream>
using namespace std;

class A{
    public:
        void showA(){
            cout << "Class A"<<endl;
        }
};

class B : public A{
    public:
        void showB(){
            cout << "Class B" << endl;
        }
};

class C :  public B{
    public:
        void showC(){
            cout << "Class C" << endl;
        }
};

class D : public B{
    public:
        void showD(){
            cout << "Class D" << endl;
        }
};

class E : public B{
    public:
        void showE(){
            cout << "Class E" << endl;
        }
};

int main(){
    E e1;
    // D d1;

    e1.B::showA();
    e1.showE();
    e1.showB();

    // d1.showA();
    // d1.showD();
    // d1.showB();

    return 0;
}