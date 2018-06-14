#include <bits/stdc++.h>

using namespace std;

int main(){
    int  n,k;
    cin>>n;
    cin>>k;
    int val = 0 ,max = -1;
    for(int i = 0;i< n ;i++){
        cin>>val;
        if(val > max){
            max = val;
        }
    }
    if(max > k)
        cout<< max-k;
    else
        cout<< "0";
    return 0;
    
}

