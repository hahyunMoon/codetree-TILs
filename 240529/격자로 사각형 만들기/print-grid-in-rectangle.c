#include <stdio.h>

int main() {
    int i, j, arr[10][10]={0,}, num;

    scanf("%d", &num);

    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            if(i == 0 || j == 0) arr[i][j] = 1;
            else arr[i][j] = arr[i-1][j] + arr[i][j-1] + arr[i=1][j-1];
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