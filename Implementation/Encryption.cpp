#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;

void getRowCol(int cL , int fL , int *r , int *c,int len){

    if ((fL * fL) >= len){
        *r = fL;
        *c = fL;
    }
    else if ((cL * fL) >= len){
        *r = fL;
        *c = fL;
    }
    else{
        *r = cL;
        *c = cL;
    }
    
}


int main(){
    char s[81];
    cin >> s;
    int R,C;
    int L = strlen(s);
    float sL = sqrt(L);
    int cL = int(ceil(sL));
    int fL = int(ceil(fL));
    getRowCol(cL,fL,&R,&C,L);
    int i,j;
    for (i=0;i<C;i++){
        for(j=i;j<L;j+=R){
            printf("%c",s[j]);
        }
        printf(" ");
    }
    
    
    return 0;
}

