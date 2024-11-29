#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 비교 함수: 사전순 정렬을 위한 함수
int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    int n, k;
    char T[101];
    
    // 첫 번째 줄 입력: n, k, T
    scanf("%d %d %s", &n, &k, T);
    
    char words[n][101];
    char *filtered_words[n]; // T로 시작하는 단어들을 저장할 배열
    int filtered_count = 0;

    // 단어 입력
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
        // T로 시작하는 단어만 필터링
        if (strncmp(words[i], T, strlen(T)) == 0) {
            filtered_words[filtered_count++] = words[i];
        }
    }

    // 필터링된 단어들을 사전순으로 정렬
    qsort(filtered_words, filtered_count, sizeof(char *), compare);

    // k번째 단어 출력 (k는 1-based index)
    printf("%s\n", filtered_words[k - 1]);

    return 0;
}
