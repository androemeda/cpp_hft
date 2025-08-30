#include <iostream>
#include <cmath>
using namespace std;

struct Order{
    int32_t id;
};


int main(){

    unsigned char buffer[4] = {1 , 0 , 0 , 0};

    Order* ptr = reinterpret_cast<Order*>(buffer);

    cout << ptr->id << endl;
}
/*
TCP sends data over internet as a stream of bytes

big indian : msb to lsb
little indian : lsb to msb
this info is sent in the headers in the tcp request
*/