#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n ;
    cin>>n;
    long int ar[n];
    for(int i = 0 ; i< n; i++)cin>>ar[i];
    
    int s = 0 , d = 0 , min = 20000;
    for(int s = 0 ;s<n;s++){
        d = 0;
    for(int i = s+1;i<n ; i++){
        if(ar[s] == ar[i]){d= i-s; }
        
        if(d!=0 && d<min)min = d;
        
    }
    }
    if(min == 20000)cout<<-1;
    else cout<<min;
    return 0;
}