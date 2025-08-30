#include <cmath>
#include <iostream>

using namespace std;

struct Order
{
    int id;
    bool isbid;
    int price;
    int qty;
};

struct Response
{
    int qtyFilled;
};

void match(Order *a, Order *b)
{
    int qty = 0;
    if ((*a).isbid == b->id)
        return;
    else if (a->isbid && a->price >= b->price)
        qty = min(a->qty, b->qty);
    else if (b->isbid && b->price >= a->price)
        qty = min(a->qty, b->qty);
    a->qty -= qty;
    b->qty -= qty;
}

int main()
{

    Order a{1, true, 5, 5};
    Order b{2, false, 5, 2};

    cout << a.qty << endl;
    cout << b.qty << endl;

    match(&a, &b);

    cout << a.qty << endl;
    cout << b.qty << endl;
}