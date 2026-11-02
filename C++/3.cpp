#include <iostream>
#include <string>
using namespace std;

class Students{
    private:   
        string name;
        int age;
    public:
        Students(string x, int y){
           name = x;
           age = y;
        };
        void showData(){
            cout << "Name: " << name << " Age: " << age <<endl;
        };

        Students(Students &obj){
            name = obj.name;
            age = obj.age;
            cout << "Copy con. call"<<endl;
        }

        ~Students(){
            cout << "Student Data filed" << endl;
        }
};

int main(){
    Students s("Jhon", 20);
    Students s1("David", 22);
    Students s2("Alica", 23);
    Students s3 = s1;

    s.showData();
    s1.showData();
    s2.showData();
    s3.showData();

    return 0;
}