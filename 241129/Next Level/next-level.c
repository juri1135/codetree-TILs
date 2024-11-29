#include <stdio.h>
#include <string.h>

// 구조체 정의
typedef struct {
    char id[11];  // 아이디 (최대 길이 10)
    int level;    // 레벨 (1~30)
} User;

int main() {
    // 두 개의 User 객체 선언
    User user1 = {"codetree", 10}; // 첫 번째 객체 초기화
    User user2;                   // 두 번째 객체 선언
    
    // 두 번째 객체에 입력받기
    scanf("%s %d", user2.id, &user2.level);
    
    // 출력
    printf("user %s lv %d\n", user1.id, user1.level);
    printf("user %s lv %d\n", user2.id, user2.level);
    
    return 0;
}
