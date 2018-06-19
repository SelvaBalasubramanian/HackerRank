#include<iostream>
using namespace std;

int main(){
    
    long int i , j, k;
    cin>>i>>j>>k;
    long int count = 0;
    for(; i<= j; i++){
        long int rev = i;
        long int ten = 1;
        long int val = 0;
        while(rev){
                        val *= 10;
            val += rev%10;
            rev = rev/10;
            
        }
        // cout<<i<<" : "<<val<<endl;
        long int temp = abs(i - val);
        if(temp % k == 0)count++;
    }
    cout<<count;
    
    return 0;
}