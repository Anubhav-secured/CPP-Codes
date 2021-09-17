#include <iostream>
using namespace std;
class shop
{
    int item_id[100];
    int item_price[100];
    int counter=0;

public:
    // void initcounter(void) { counter = 0; }
    void set_price(void);
    void display_price(void);
};
void shop::set_price(void)
{
    cout << "eneter the id number of your item no " << counter + 1 << endl;
    cin >> item_id[counter];
    cout << "eneter the price of your item no " << counter + 1 << endl;
    cin >> item_price[counter];
    counter++;
}
void shop::display_price(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of your item with item id " << item_id[i] << " is " << item_price[i] << endl;
    }
}
int main()
{
    shop rajbali;
    // rajbali.initcounter();
    rajbali.set_price();
    rajbali.set_price();
    rajbali.set_price();
    rajbali.display_price();
    return (0);
}