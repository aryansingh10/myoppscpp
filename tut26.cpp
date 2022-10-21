#include <iostream>
using namespace std;

class complex
{
    int a, b;
    friend complex complexsum(complex o1, complex o2);

public:
    void setnum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnum()
    {
        cout << "Your Complex number is :" << a << "+" << b << "i" << endl;
    }
};
complex complexsum(complex o1, complex o2)
{
    complex o3;
    o3.setnum((o1.a + o2.a), (o1.b + o2.b));

    return o3;
}

int main()
{
    complex c1, c2, c3, sum;
    c1.setnum(4, 5);
    c1.printnum();

    c2.setnum(5, 6);
    c2.printnum();

    sum = complexsum(c1, c2);
    sum.printnum();
    return 0;
}
