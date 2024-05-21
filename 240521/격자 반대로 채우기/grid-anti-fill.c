#include <stdio.h>

int main() {
    int i , j, n, num=1, arr[100][100];

    scanf("%d", &n); //입력받기

    for(i =n-1;i>=0;i--){
        if(i %2 == 0){
            for(j=0;j<n;j++) arr[j][i] = num++;
        }
        else for(j=n-1;j>=0;j--) arr[j][i] = num++;
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}