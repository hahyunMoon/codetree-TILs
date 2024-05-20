#include <stdio.h>

int main() {
    int i , j, n, m, num=1, arr[100][100];

    scanf("%d %d", &n,&m); //입력받기

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i==0){
                if(j==0) arr[i][j] = 1;
                else arr[i][j]= arr[i][j-1] + num++;
            }
            else if(j==m-1 && i>0){
                arr[i][j] = arr[i-1][j] + --num;
            }
            else{
                arr[i][j] = arr[i-1][j+1] +1;
            }
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}