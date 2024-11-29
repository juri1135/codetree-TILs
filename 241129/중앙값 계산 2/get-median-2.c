#include <stdio.h>
#include <stdlib.h>

// 비교 함수: qsort를 위한 오름차순 정렬
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    
    // 첫 번째 줄 입력: n
    scanf("%d", &n);
    
    int numbers[n]; // 주어진 숫자 배열
    int sorted[n];  // 중앙값 계산을 위한 정렬 배열
    int count = 0;  // 현재까지 입력받은 숫자의 개수

    // 두 번째 줄 입력: 숫자 배열
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // 출력할 중앙값
    for (int i = 0; i < n; i++) {
        // 숫자를 하나씩 추가
        sorted[count++] = numbers[i];
        
        // 홀수 번째 원소에서만 중앙값 출력
        if ((i + 1) % 2 == 1) {
            // 배열 정렬
            qsort(sorted, count, sizeof(int), compare);
            
            // 중앙값 출력
            printf("%d ", sorted[count / 2]);
        }
    }
    
    printf("\n");
    return 0;
}
