#include <stdio.h>
#include <string.h>

// 구조체 정의
typedef struct {
    char secret_code[11]; // 비밀 코드 (최대 길이 10)
    char meeting_point;   // 접선 장소 (1문자 대문자)
    int time;             // 시간 (1~24)
} MeetingInfo;

int main() {
    // 구조체 변수 선언
    MeetingInfo meeting;
    
    // 입력 받기
    scanf("%s %c %d", meeting.secret_code, &meeting.meeting_point, &meeting.time);
    
    // 출력
    printf("secret code : %s\n", meeting.secret_code);
    printf("meeting point : %c\n", meeting.meeting_point);
    printf("time : %d\n", meeting.time);
    
    return 0;
}
