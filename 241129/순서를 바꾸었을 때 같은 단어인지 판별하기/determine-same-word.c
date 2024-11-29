#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define CHAR_RANGE 128 // ASCII 범위 (대소문자와 숫자 포함)

// 애너그램 여부 판별 함수
bool are_anagrams(const char *word1, const char *word2) {
    int count1[CHAR_RANGE] = {0};
    int count2[CHAR_RANGE] = {0};
    
    // 두 단어의 길이가 다르면 바로 false 반환
    if (strlen(word1) != strlen(word2)) {
        return false;
    }
    
    // 첫 번째 단어의 문자 빈도수 계산
    for (int i = 0; word1[i] != '\0'; i++) {
        count1[(int)word1[i]]++;
    }
    
    // 두 번째 단어의 문자 빈도수 계산
    for (int i = 0; word2[i] != '\0'; i++) {
        count2[(int)word2[i]]++;
    }
    
    // 빈도수를 비교
    for (int i = 0; i < CHAR_RANGE; i++) {
        if (count1[i] != count2[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    char word1[100001], word2[100001];
    
    // 입력 처리
    scanf("%s", word1);
    scanf("%s", word2);
    
    // 결과 출력
    if (are_anagrams(word1, word2)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}