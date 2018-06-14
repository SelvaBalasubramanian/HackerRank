#include<iostream>

using namespace std;

int main(){
    int t ;
    cin>>t;
    while(t--){
        long long int n,temp;
        cin>>n;
        temp  = n;
        int count = 0;
        while(temp){
             int k = temp%10;
            if(k != 0){
            if(n%k == 0)count++;
            }
            temp = temp/10;
        }
        cout<<count<<endl;
        
    }
     
     return 0;
 }