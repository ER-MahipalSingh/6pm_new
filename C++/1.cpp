#include <iostream>
using namespace std;

class Students{
    private:
    int id;
    string name;
public:
    void setData(int id, string name){
        this->id = id;
        this->name = name;
        // cout << "ID: " << id << " Name: " << name << endl;
    };
    void getData(){
        cout << "ID: "<< this->id << " Name: " << this->name << endl;
    };
};

int main()
{
    Students s, s1;

    s.setData(1, "Jhon");
    s1.setData(2, "David");

    s.getData();
    s1.getData();

    return 0;
}