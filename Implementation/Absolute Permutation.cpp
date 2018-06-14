#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
void permutaion(int n , int diff){
    int val[n+1]  , i , j  , wrong = 0;
    int out[n+1] = {0};
    for(i = 1; i<n+1;i++){
        val[i]=1;
    }
    
    for(i = 1 ; i <= n; i++){
        if(i <= diff){
           out[i] =  diff + i;
            val[i + diff] = 0;
              if(i + diff  > n){
                    wrong++;
                    break;
                }
        }
        else{
            if( (val[i - diff] > 0) && (i-diff > 0)){
               out[i] = i - diff;
                val[i - diff] = 0;
            }
            else if((i+diff <= n) && (val[i + diff] > 0)  ) {
                out[i] = i + diff;
                val[i + diff] = 0;
              
            }
            else{
                wrong++;
                break;
            }
        }
    }
    if(wrong != 0){
        cout<< -1 << endl;
    }
    else{
        for(i=1;i<=n;i++){
            cout<< out[i]  << " ";
        }
        cout<< endl;
    }
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        permutaion(n , k)   ;    
    }
    return 0;
}

