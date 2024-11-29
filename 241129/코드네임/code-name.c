#include <stdio.h>
#include <string.h>

// 구조체 정의
typedef struct {
    char codename[11]; // 코드네임 (최대 길이 10)
    int score;         // 점수
} Agent;

int main() {
    // 5명의 요원 정보를 저장할 배열
    Agent agents[5];
    
    // 데이터 입력
    for (int i = 0; i < 5; i++) {
        scanf("%s %d", agents[i].codename, &agents[i].score);
    }
    
    // 최소 점수를 가진 요원 찾기
    int min_index = 0; // 초기값: 첫 번째 요원
    for (int i = 1; i < 5; i++) {
        if (agents[i].score < agents[min_index].score) {
            min_index = i; // 최소 점수를 가진 요원의 인덱스 갱신
        }
    }
    
    // 결과 출력
    printf("%s %d\n", agents[min_index].codename, agents[min_index].score);

    return 0;
}
