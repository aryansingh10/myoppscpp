#include <iostream>
using namespace std;
// inline int product(int a, int b)
// {
//      int c = a * b;
//     return c;
// }

float MoneyRecived(float money, float factor = 1.04)
{
    return money * factor;
}
int main()
{
    // {
    //     int x, y;
    //     cout << "Enter the value of x";
    //     cin >> x;
    //     cout << "Enter the value of y";
    //     cin >> y;
    //     cout << "the product is" << product(x, y) << endl;
    int money = 100000;

    cout << "If you have " << money << " Rs in your bank account, you will recive " << MoneyRecived(money) << "Rs after 1 year" << endl;
    cout << "For VIP: If you have " << money << " Rs in your bank account, you will recive " << MoneyRecived(money, 1.1) << " Rs after 1 year";
    return 0;
}
