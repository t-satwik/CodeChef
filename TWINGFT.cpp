#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main() {
    int t=0;
    cin >> t;
    while(t){
        long long int n, k, temp, max1=0, max2=0;
        cin >> n >> k;
        vector <long long int> gifts;
        for(int i=0; i<n; i++){
            cin >> temp;
            gifts.push_back(temp);
        }
        sort(gifts.begin(), gifts.end(), greater <>());
        //case 1 he goes first
        // for(int i=0; i<n; i++){
        //     cout << gifts[i] << " ";
        // }
        // cout << "\n";

        for(int i=0; i<k; i++){
            max1+=gifts[2*i];
        }
        for(int i=0; i<2*k+1; i++){
            max2+=gifts[i];
        }
        max2=max2-max1;
        if(max2>max1){
            cout << max2 << "\n";
        }
        else{
            cout << max1 << "\n";
        }
        t--;
    }
    
    
}
