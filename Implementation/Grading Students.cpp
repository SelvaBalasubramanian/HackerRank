
#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i =0; i<n; i++){
        cin>>ar[i];
    }
    for(int i = 0 ; i< n ; i++){
        int k = ar[i]/5;
        k = ++k * 5;
        if(ar[i] < 38);
        else if(k - ar[i] <= 2){
            ar[i] = k;
        }
    }
    for(int i = 0 ; i< n ;i++){
        
        cout<<ar[i]<<endl;
    }
}