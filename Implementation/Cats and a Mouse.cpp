#include<iostream>

using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t>0){
        int a, b ,c ;
        cin>>a>>b>>c;
        if(abs(a-c) == abs(b-c)){
            cout<<"Mouse C"<<endl;
        }
        else if(abs(a - c) > abs(b - c)){
            cout<<"Cat B"<<endl;
        }
        else {
            cout<<"Cat A"<<endl;
        }
         t--;
    }

    
    return 0;
}