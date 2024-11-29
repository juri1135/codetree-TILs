#include <stdio.h>
#include <string.h>

// 구조체 정의
typedef struct {
    char name[11]; // 상품명 (최대 길이 10)
    int code;      // 상품 코드
} Product;

int main() {
    // 두 개의 Product 객체 선언
    Product product1 = {"codetree", 50}; // 첫 번째 객체 초기화
    Product product2;                   // 두 번째 객체 선언

    // 두 번째 객체 입력받기
    scanf("%s %d", product2.name, &product2.code);

    // 출력
    printf("product %d is %s\n", product1.code, product1.name);
    printf("product %d is %s\n", product2.code, product2.name);

    return 0;
}
