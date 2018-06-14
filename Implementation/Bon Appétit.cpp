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
int main() {
    long int i , k;
    cin>> i >> k;
    long int total= 0;
    for(int j =0 ; j< i ; j++){
         int c;
        cin>>c;
        if(j != k)
            total += c;
    }
    long int bcharge;
    cin>>bcharge;
    total /= 2;
    bcharge ;

    if(total >= bcharge){
        cout<<"Bon Appetit";
    }
    else{
        cout<< bcharge - total;
    }
    
    return 0;
}

