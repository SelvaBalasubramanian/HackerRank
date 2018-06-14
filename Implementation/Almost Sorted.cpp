#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int check(long int *a,int start, int n);
int swapq = 0;
int rev = 0;
int l=-1,r=-1;

int main() {
    int n ,i;
    cin >> n;
    long int a[n];
    for(i = 0 ; i < n;i++){
       cin >> a[i];
    } 
    int b = check( a,0,n);
    if (b == 0){
        cout << "yes";
    }
    else if (b == 1){
        cout << "yes"   << endl << "swap " << l+1 << " " << r+1;
  
    }
    else if (b == 2){
        cout << "yes"   << endl << "reverse " << l+1 << " " << r+1;
    }
    else{
        cout << "no";

    }
    return 0;
}
int check(long int *a,int start, int n){
    
   int i = 0;
   int ret = 0; 
    int rswap = 0 , rrev  = 0;
   for (i=start ; i<n; i++){
       if(a[i] > a[i+1]){
           if (swapq == 0){
               swapq = 1;
               l = i;
               r = i+1;
               int j;
               for (j = l+2 ; j < n ; j++){
                   if (a[l+1] > a[j]){
                      long  int temp = a[j];
                       a[j] = a[l];
                       a[l] = temp;
                       r = j;
                       break;
                   }
               }
               if (j == n){
                      long int temp = a[r];
                       a[r] = a[l];
                       a[l] = temp;
               }
                 if (a[l] > a[l-1]){
                        ret = check(a,l+1,n);
                   }
                 else{
                       ret = check(a, 0 , n);
                   }
               
              if (ret == 0){
                 ret = 1;  
                 }
               break;
           }
           else if(rev == 0){
               rev = 1;
               long int temp = a[r];
               a[r] = a[l];
               a[l] = temp;
               r = l;
               int k;
               for(k = l ;k < n ; k++){
                   if (a[k+1] < a[k]){
                       r = k+1;
                   }
                   else{
                       if(a[r] > a[l-1]){
                          ret = check(a,r+1,n);
                               if (ret == 0){
                                    ret = 2;  
                            }                           
                       }
                       else{
                           ret = -1;
                       }

                       break;
                   }
               }
               break;
           }
           else{
               ret = -1;
               break;
           }
       }
   }
    return ret;
    
}









