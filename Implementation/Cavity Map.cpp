#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    char ar[n][n];
    for(int i = 0; i< n; i++){
        for(int j = 0; j< n; j++){
            cin>>ar[i][j];
        }
    }
char X= 'X';
    
    for(int i = 1; i< n-1; i++){
        for(int j = 1; j< n-1; j++){
            
            int r = ar[i][j];
            if(ar[i-1][j] != X || ar[i+1][j] != X || ar[i][j-1] != X || ar[i][j+1] != X){
             
                if(ar[i-1][j] < r && ar[i+1][j] < r && ar[i][j-1] < r && ar[i][j+1] < r ){
                    ar[i][j] = X;
                }   
            }
            
        }
    }
     for(int i = 0; i< n; i++){
        for(int j = 0; j< n; j++){
            cout<<ar[i][j];
        }
         cout<<endl;
    }
    
    
    return 0;
}