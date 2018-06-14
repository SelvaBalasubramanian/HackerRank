#include <bits/stdc++.h>

using namespace std;


int main(){
    int n , k ;
    
    cin>>n>>k ;
    
    int a[n] , mod[k] ={0};
    
    
    for(int i= 0; i< n ; i++){
        cin>>a[i];
        mod[a[i]%k]++;
    }
    int sum = 0;
    sum = (mod[0] * (mod[0]-1)/2);

    for(int  i = 1; i<= k/2 && i!= k-i; i++){
        sum += (mod[i] * mod[k-i]);
    }
    if(k%2 ==  0){
        sum += (mod[k/2] * (mod[k/2] -1)/2);
        
    }
    
    cout<<sum;
    
    return 0;
    
    
}