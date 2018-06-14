
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n; 
    cin>> n;
    int a[n];
    for(int i = 0; i< n; i++){
        cin>>a[i];
    }
    int sum =0 ,d, m , count = 0;
    cin>>d>>m;
    for(int i = 0;i<n-m+1;i++){
        int j = i ;
        sum = 0;
        while(j < i+m){
            sum += a[j];
            j++;
        }
        if(d == sum)count++;
    }
    cout<<count;
    
    return 0;
}