#include <stdio.h>

int main() {
    int i,j,num,arr[15][15];
    scanf("%d", &num);

    for(i=0;i<num;i++){
        for(j=0;j<=i;j++){
            if(j==0 || j==i) arr[i][j] = 1;
            else {
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
        }
    }

    for(i=0;i<num;i++){
        for(j=0;j<=i;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}