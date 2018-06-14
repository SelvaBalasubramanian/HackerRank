#include <bits/stdc++.h>

using namespace std;

int main(){
    
    long int n , t ;
    cin>>n>>t;
    long int a[n];
    for(long int i = 0 ; i< n ; i++){
        cin>>a[i];
    }
    
    for(long int i = 0 ;i< t ; i++){
        long int w ,e;
        cin>>w>>e;
        long int min = 9999999;
        for(int j = w ; j<=e;j++){
            if(min > a[j]){
                min = a[j];
            }
        }
        cout<<min<<endl;
        
    }
    
    return 0;
}