#include<bits/stdc++.h>

using namespace std;

int main(){
    long int n ;
    cin>>n;
    long int ar[6] = {0};
    for(long int i = 0; i<n ;i++){
        int t ;
        cin>>t;
        ar[t]++;
    }
    int max = INT_MIN;
    int m_i = 0;
    for( int i = 1;i<6; i++){
        if(ar[i] > max){max = ar[i]; m_i = i;}
    }
    cout<<m_i;
    
    return 0;
}