/*
Nate Elli
*/

#include<iostream>
using namespace std;

void swap(int a, int b) {
    int tmp = a;
    a = b; 
    b = tmp;
}

int main() {
    int a = 10;
    int b = 2;
    cout << a << "," << b << endl;
    swap(a, b);
    cout << a << "," << b << endl;

    return 0;
}