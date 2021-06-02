#include <iostream>
#include <string>
#include <bits/stdc++.h> 
using namespace std;

int main() {
    int t=0;
    cin >> t;
    while(t){
        long long int n, k, distance=0, i;
        cin >> n >> k;
        char charges[n];
        for(i=0; i<n; i++){
            cin >> charges[i];
        }
        for(i=0; i<n-1; i++){
            if(charges[i]==charges[i+1]){
                distance+=2;
            }
            else{
                distance+=1;
            }
        }

        
        for(i=0; i<k; i++){
            long long int temp;
            cin >> temp;
            if(temp==n){
                if(charges[temp-1]=='0'){
                    charges[temp-1]='1';
                    if(charges[temp-2]=='0'){
                        distance-=1;
                    }
                    else{
                        distance+=1;
                    }
                }
                else{
                    charges[temp-1]='0';
                    if(charges[temp-2]=='0'){
                        distance+=1;
                    }
                    else{
                        distance-=1;
                    }
                }
            }
            else if(temp==1){
                if(charges[temp-1]=='0'){
                    charges[temp-1]='1';
                    if(charges[temp]=='0'){
                        distance-=1;
                    }
                    else{
                        distance+=1;
                    }
                }
                else{
                    charges[temp-1]='0';
                    if(charges[temp]=='0'){
                        distance+=1;
                    }
                    else{
                        distance-=1;
                    }
                }
            }
            else{
                if(charges[temp-1]=='0'){
                    charges[temp-1]='1';

                    if(charges[temp-2]=='0'){
                        distance-=1;
                    }
                    else{
                        distance+=1;
                    }
                    
                    if(charges[temp]=='0'){
                        distance-=1;
                    }
                    else{
                        distance+=1;
                    }
                }
                
                else{
                    charges[temp-1]='0';

                    if(charges[temp-2]=='0'){
                        distance+=1;
                    }
                    else{
                        distance-=1;
                    }
                    
                    if(charges[temp]=='0'){
                        distance+=1;
                    }
                    else{
                        distance-=1;
                    }
                }
            }
            cout << distance << "\n";
        }
        t--;
    }
    
    
}
