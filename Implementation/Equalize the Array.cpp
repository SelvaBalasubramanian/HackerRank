#include<stdio.h>

int main(){
    int N,s;
    scanf("%d", &N);
        int max = 0;


    int arr[101] = {0};
    for(int i = 0; i<N;i++){
        scanf("%d",&s);
        arr[s]++;
        if(max < arr[s])
            max = arr[s];
    }

    printf("%d",N-max);
    return 0;
    
}