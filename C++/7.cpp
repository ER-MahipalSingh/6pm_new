#include <iostream>
#include <string>
using namespace std;

class Students{
    int id;
    string name;
    public:
        void setData(int a, string b){
            id = a;
            name = b;
        };
        void getData(){
            cout << "ID: " << id << " Name: " << name << endl; 
        }
};

int main(){
    // Students s, s1;
    // Students *p;
    // Students *p1;
    // p = &s;
    // p1 = &s1;

    // p->setData(1, "Jhon");
    // p->getData();

    // p1->setData(2, "David");
    // p1->getData();

    int tempID;
    string tempName;

    Students *p = new Students[3];

    for(int i=0; i<3; i++){
        cout << "Enter ID: ";
        cin >> tempID;
        cout << "Enter name: ";
        cin >> tempName;
        p[i].setData(tempID, tempName);
    }

    for(int i=0; i<3; i++){
        p[i].getData();
        cout << p << endl;
    }

    delete[] p;
    p=nullptr;

    cout << p << endl;
    return 0;
}