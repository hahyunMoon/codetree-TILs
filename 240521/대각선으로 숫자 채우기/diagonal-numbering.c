#include <stdio.h>

// 변수 선언:

int main() {
    int n, m;
    int answer[100][100] = {0,};
    int count = 1;

    // 입력:
    scanf("%d %d", &n, &m);

    // Step 1:
    for(int row = 0; row < n; row++) {
        for(int col = 0; col < m; col++) 
            // Step 2:
            if(answer[row][col] == 0) {  //밑에서 다 채워주니까 0인 부분만 따로 또 채우면 됨
                int curr_row = row;
                int curr_col = col;

                while(curr_col >= 0 && curr_row < n) {
                    answer[curr_row][curr_col] = count;

                    // 변수 업데이트 :
                    curr_row++;
                    curr_col--;
                    count++;
                }
            }
    }

    // 출력:
    for(int row = 0; row < n; row++) {
        for(int col = 0; col < m; col++)
            printf("%d ", answer[row][col]);
        printf("\n");
    }

    return 0;
}