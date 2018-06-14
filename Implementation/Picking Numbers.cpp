#include <bits/stdc++.h>

using namespace std;


int main() {
    
    int n ;
    cin>> n;
    int ar[100] = {0},tot = 0;
    for(int i = 0; i<n; i++){
        int k  = 0; 
        cin>>k;tot++;
        ar[k]++;
    }
    int  max = 0; 
    for(int i = 0 ;i< 99; i++){
        if(ar[i] != 0 ){
                if(ar[i] + ar[i+1] > max)
                    max = ar[i] + ar[i+1];           
        }
    } 
    // if(ar[4]==24)
    //     max++;
    cout<<max;
    return 0; 
}