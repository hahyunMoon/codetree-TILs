#include <stdio.h>

int main() {
    int i,j,arr1[10][10], arr2[10][10],n,m;
    scanf("%d %d",&n, &m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf(" %d", &arr1[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf(" %d", &arr2[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            int on;
            if(arr1[i][j] == arr2[i][j]) printf("0 ");
            else printf("1 ");
        }
        printf("\n");
    }
    return 0;
}