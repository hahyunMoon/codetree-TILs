#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[2][4]={0,}; 
    float avg = 0, all =0;
    for(int i=0; i<2;i++){
        for(int j=0; j<4;j++){
            scanf(" %d", &arr[i][j]);
        }
    }

   for(int i=0; i<2; i++){
        for(int j=0;j<4;j++){
            avg += arr[i][j];
        }
        printf("%.1f ",avg/4);
        avg = 0;
    }
    printf("\n");

    for(int i=0; i<4; i++){
        for(int j=0;j<2;j++){
            avg += arr[j][i];
            all += arr[j][i];
        }
        printf("%.1f ", avg/2);
        avg = 0;
    }
    printf("\n");

    printf("%.1f", all/8);

    return 0;
}