
#include<iostream>

using namespace std;

int main(){
    
    int no, minc=0, maxc=0 ;
    cin>>no;
    long int k, min , max;
     cin>>k;
    min = k;
    max = k;
    
    for(int i = 1; i< no; i++){
       cin>>k;
        if(k > max){
            maxc++;
            max = k;
        }
        if(k < min){
            minc++;
            min = k;
        }
    }
    
    cout<< maxc <<" "<<minc;
    return 0;
}