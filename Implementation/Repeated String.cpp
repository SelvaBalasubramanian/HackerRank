#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char s[101];
    scanf("%s", s);
    long int N , count=0;
    scanf("%ld",&N);
    int i =0, len = strlen(s);
    for(i = 0;i<len ; i++){
        if(s[i] == 'a'){
            count++;
        }
    }
    long int a = N / len;
    int mod = N % len;
    count = count * a;
    for(i = 0;i<mod ; i++)
    {
        if(s[i] == 'a')
            count++;
    }
    printf("%ld", count);
    return 0;
}

