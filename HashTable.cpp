#include <bits/stdc++.h>
#include <iostream>
#include <iterator>
#include <map>
using namespace std;

int main() {

    int arr[7] = {1,2,3,1,2,12,4};
    // unordered_map<int, int> umpp; // in average and best case i will be O(1) very rare worst case O(n)
    map<int, int> mpp; // 0(log n)

    for (int i = 0; i < size(arr); i++)
    {
        mpp[arr[i]]++;
    }

    cout << size(mpp);
    
    
    // while(true) { // for checking the count of numbers
    //     int n;
    //     cout << "Enter the number you want to find the count" << endl;
    //     cin >> n;
    //     cout << mpp[n] << endl;
    // }

    // for(auto loop: mpp) { // to check the key of the map
    //     cout << loop.first << endl;
    // }



}