#include <stdio.h>

int main() {
    int i,j,arr[5][5];

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i==0 || j==0) arr[i][j] = 1;
        }
    }

    for(i=1;i<5;i++){
        for(j=1;j<5;j++){
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}