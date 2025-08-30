#include<cmath>
#include<iostream>

using namespace std;

struct Order{
    int id;
    bool isbid;
    int price;
    int qty;
};

struct Response{
    int qtyFilled;
};

Response match(Order a , Order b){
    if(a.isbid == b.isbid) return Response{0};
    if(a.isbid && a.price >= b.price) return Response{min(a.qty , b.qty)};
    if(b.isbid && b.price >= a.price) return Response{min(a.qty , b.qty)};
    return Response{0};
}

int main(){

    Order a{1,true,5,5};
    Order b{2,false,5,2};

    Response ans = match(a , b);

    cout << ans.qtyFilled << endl;
}