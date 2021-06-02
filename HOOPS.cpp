#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main() {
    long long int t=0;
    cin >> t;
    while(t){
        long long int n=0;
        cin >> n;
        if(n%2==1){
            cout << (n+1)/2 << "\n";
        }
        else{
            cout << (n+2)/3 << "\n";
        }
        t--;
    }
    
    
}
