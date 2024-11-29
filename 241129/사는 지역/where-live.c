#include <stdio.h>
#include <string.h>

// 구조체 정의
typedef struct {
    char name[11];  // 이름 (최대 길이 10)
    char addr[10];  // 번지수 (XXX-XXX 형식)
    char city[11];  // 지역 (최대 길이 10)
} Person;

int main() {
    int n;
    // 첫 번째 줄 입력: 데이터 개수
    scanf("%d", &n);

    Person persons[10]; // 최대 10명의 정보를 저장
    Person lastPerson;  // 이름이 사전순으로 가장 뒤에 있는 사람
    int isFirst = 1;    // 첫 번째 사람 여부 체크

    // 데이터 입력
    for (int i = 0; i < n; i++) {
        scanf("%s %s %s", persons[i].name, persons[i].addr, persons[i].city);

        // 이름 비교하여 가장 뒤에 있는 사람 찾기
        if (isFirst || strcmp(persons[i].name, lastPerson.name) > 0) {
            lastPerson = persons[i];
            isFirst = 0;
        }
    }

    // 결과 출력
    printf("name %s\n", lastPerson.name);
    printf("addr %s\n", lastPerson.addr);
    printf("city %s\n", lastPerson.city);

    return 0;
}
