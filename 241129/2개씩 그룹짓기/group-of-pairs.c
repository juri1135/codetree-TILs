#include <stdio.h>
#include <stdlib.h>

// 비교 함수: qsort를 위한 오름차순 정렬
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// 그룹 합의 최댓값을 최소화하는 함수
int minimize_maximum_group_sum(int N, int *numbers) {
    // 숫자 정렬
    qsort(numbers, 2 * N, sizeof(int), compare);
    
    int max_sum = 0;

    // 가장 작은 값과 가장 큰 값을 짝지어 그룹을 만든다
    for (int i = 0; i < N; i++) {
        int group_sum = numbers[i] + numbers[2 * N - 1 - i];
        if (group_sum > max_sum) {
            max_sum = group_sum;
        }
    }

    return max_sum;
}

int main() {
    int N;
    
    // 그룹의 수 입력
    scanf("%d", &N);
    
    int numbers[2 * N];

    // 숫자 입력
    for (int i = 0; i < 2 * N; i++) {
        scanf("%d", &numbers[i]);
    }

    // 결과 계산 및 출력
    int result = minimize_maximum_group_sum(N, numbers);
    printf("%d\n", result);

    return 0;
}
