#include<iostream>
#include<cmath>
using namespace std;

struct Point{
    int x;
    int y;
};

double getdist(Point a , Point b){
    return round(sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y)));
}

int main(){

    Point a{1,1};
    Point b{3,4};
    cout << getdist(a,b);
    return 0;
}