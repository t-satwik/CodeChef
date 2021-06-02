#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h> 
using namespace std;

int main() {
    int t=0;
    cin >> t;
    while(t){
        long long int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        if(abs(d-b)+abs(c-a) <= k && ( k-abs(d-b)-abs(c-a) )%2==0  ){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
        t--;
    }
    
    
}
