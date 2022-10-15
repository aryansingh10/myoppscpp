#include <iostream>
using namespace std;

int fib(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
        return fib(n - 2) + fib(n - 1);
}
// int factorial(int n)
// {

//     if (n <= 1)
//     {
//         return 1;
//     }
//     else
//      return (n) * factorial(n - 1);
// }

int main()
{
    int a;
    cout << "enter tha value of a" << endl;
    cin >> a;
    // cout << "The factorial of " << a << "is :" << factorial(a);
    cout << "The term in fibonacci sequence at position" << a <<endl << fib(a) << endl
         << endl;

    return 0;
}
