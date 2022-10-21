#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setid()
    {
        salary = 1222;
        cout << "Enter the id :" << endl;
        cin >> id;
    }
    void getid()
    {
        cout << "The id of this emploee is :" << endl;
        cout << id << endl;
        cout << "The salary is :" << salary << endl;
    }
};

int main()
{
    Employee fb[10];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setid();
        fb[i].getid();
        // fb[i].salary;
    }

    return 0;
}
