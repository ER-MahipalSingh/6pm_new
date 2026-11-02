#include <iostream>
#include <string>
using namespace std;

class Students{
    private:
        string name;
        int marks;
    public:
        string static course;
        void setStudentsData(){
            cout << "Entr Your Name: ";
            cin >> name;
            cout << "Enter your Marks: ";
            cin >> marks;
        };

        void showStudentsData(){
            cout << "Name: "<< name << " Marks: " << marks << " Course: " << course << endl;
        }
};

string Students::course = "C++";

int main(){
    int size;
    cout << "Enter arr size: ";
    cin >> size;

    Students s[size];

    for(int i=0; i<size; i++){
        cout << "\n-----Student " << (i + 1) << "-----"<<endl;
        s[i].setStudentsData();
    }

    for(int i=0; i<size; i++){
        s[i].showStudentsData();
    }

    return 0;
}