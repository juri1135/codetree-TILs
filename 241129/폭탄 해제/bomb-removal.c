#include <stdio.h>
#include <string.h>

// 구조체 정의
typedef struct {
    char code[11]; // 해제 코드 (최대 길이 10)
    char color;    // 선의 색 (R, G, B 중 하나)
    int second;    // 특정 초 (1~60)
} WireInfo;

int main() {
    // 구조체 변수 선언
    WireInfo wire;
    
    // 입력 받기
    scanf("%s %c %d", wire.code, &wire.color, &wire.second);
    
    // 출력
    printf("code : %s\n", wire.code);
    printf("color : %c\n", wire.color);
    printf("second : %d\n", wire.second);
    
    return 0;
}
