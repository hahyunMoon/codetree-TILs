#include <stdio.h>

int main() {
    int i, j, arr[10][10]={0,}, num;

    scanf("%d", &num);

    for(i=0;i<num;i++){
        for(j=0; j<num;j++){
            arr[i][j] = 1;
        }
    }

    for(i=1;i<num;i++){
        for(j=1; j<num;j++){
            arr[i][j] = arr[i-1][j-1] + arr[i-1][j] + arr[i][j-1];
        }
    }

    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}