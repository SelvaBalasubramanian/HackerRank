
#include<iostream>

using namespace std;

int main(){
    long int s , t , a , b , m, n;
    cin>>s>>t;
    cin>>a>>b;
    cin>>n>>m;
    long long int count = 0;
    for(long int i = 0 ;i<n; i++){
        long int k ;
        cin>>k;
        if(a+k >= s && a+k <= t)
            count++;
    }
    cout<<count<<endl;
    count = 0;
    for(long int i = 0 ;i<m; i++){
        long int k ;
        cin>>k;
        if(b+k >= s && b+k <= t)
            count++;
    }
    cout<<count ;
}