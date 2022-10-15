#include <iostream>
using namespace std;

class shop
{
    int item_id[100];
    int item_price[100];
    int counter = 0;

public:
    // void initcounter() { counter = 0; }
    void setprice();
    void display();
};
void shop::setprice()
{
    cout << "The id of the item is :" << counter + 1 << endl;
    cin >> item_id[counter];

    cout << "The price of the item is :" << endl;
    cin >> item_price[counter];
    counter++;
}
void shop::display()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The  ID of the item is:" << item_id[i] << "and the price is :" << item_price[i] << endl;
    }
}

int main()
{
    shop dukan;
    // dukan.initcounter();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.display();

    return 0;
}
