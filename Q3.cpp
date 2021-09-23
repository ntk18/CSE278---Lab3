/*
Nate Elli
*/

#include<iostream>
#include<array>
using namespace std;

string minMax(int arr[]) {
    int size = sizeof(arr)/sizeof(arr[0]);
    string s = "";

    for (int i = 1; i < size - 1; i++) {
        if (arr[i] > arr[i + 1] && arr[i] > arr[i - 1]) {
            int check = i + 1;
            s += to_string(check);
        } else if (arr[i] < arr[i + 1] && arr[i] < arr[i - 1]) {
            int check = i + 1;
            s += to_string(check);
        }
    }

    return s;
}

int main() {
    int arr[] = {12, 11, 122, 112, 222, 222, 222, 221, 76, 36, 31, 234, 256, 76, 73};

    cout << minMax(arr) << endl;

    return 0;
}