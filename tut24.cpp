#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setdata()
    {
        cout << "Enter your id" << endl;
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "The id is:" << id << endl;
        cout << "The Employee no. is " << count << endl;
    }
    static void getcount(void)
    {
        cout << id; //gives error
        cout << "The value of count is:" << count << endl;
    }
};
// Count is the static data member of class Employee
int Employee::count; // Default value is 0

int main()
{
    Employee aryan, bittu, chotu;
    aryan.setdata();
    aryan.getdata();

    bittu.setdata();
    bittu.getdata();

    chotu.setdata();
    chotu.getdata();

    chotu.setdata();
    chotu.getdata();
    Employee::getcount();

    return 0;
}
