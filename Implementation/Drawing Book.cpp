#include<iostream>

using namespace std;

int main(){
    long int n ,p;
    cin>>n>>p;
    int total , start , end;
    total = n/2;
    start = p/2;
    end = total - start;
    if(start < end){
        cout<<start;
    }
    else
        cout<<end;
    
    return 0;
}