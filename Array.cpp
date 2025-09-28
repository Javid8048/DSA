#include <bits/stdc++.h>
#include <iterator> // for size 
using namespace std;

int main() {

    // int 4 bytes
    // sizeof returns the total byte size of the array
    int Array[] = {1,2,3,4,5,7,8,9}; 
    cout << sizeof(Array) / sizeof(Array[0]) << endl;
    cout << sizeof(Array) << endl;
    cout << sizeof(Array[0]) << endl;
    cout <<size(Array);
}