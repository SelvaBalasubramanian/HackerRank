#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int sockMerchant(int n, int* ar) {
   int soc[100] ={0};
    int pair = 0;
   int i =0;
   for(i = 0;i<n;i++){
        soc[ar[i]]++;
   }
   for(i = 1;i<=100;i++){
    pair += (soc[i] / 2);
   }
    return pair;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = sockMerchant(n, ar);
    printf("%d\n", result);
    return 0;
}

