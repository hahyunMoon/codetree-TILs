#include <stdio.h>

int main() {
    int i , j, n, m, num=0, arr[100][100];

    scanf("%d %d", &n,&m); //입력받기

    for(i =0;i<m;i++){
        if(i %2 == 0){
            for(j=0;j<n;j++) arr[j][i] = num++;
        }
        else for(j=n-1;j>=0;j--) arr[j][i] = num++;
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}