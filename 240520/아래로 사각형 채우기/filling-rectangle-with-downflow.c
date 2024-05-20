#include <stdio.h>

int main() {
    int i , j , n, arr[10][10], num=1;
    scanf("%d", &n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            arr[j][i] = num++;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}