#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}
int volume(int r, int h)
{
    return 3.14 * r * r * h;
}
int volume(int s)
{
    return s * s * s;
}
int volume(int l, int b, int h)
{

    return (l * b * h);
}

int main()
{

    // cout << "the sum of 3 and 4 is:" << sum(3, 4) << endl;
    // cout << "the sum of 3,7 and 4 is:"<< sum(3, 7, 4) << endl;
    // cout << "The sum of 3, 7 and 6 is "<< sum(3, 7, 6) << endl;
    cout << "The volume of cuboid of 3, 7 and 6 is " << volume(3, 4, 6);
    // cout << "The volume of cylinder of radius 3 and height 6 is "
    // cout << "The volume of cube of side 3 is "
    return 0;
}
