#include <iostream>
using namespace std;
void print10stars(){
    for (int i=0; i<10; i++){
        printf("*");
    }
    printf("\n");
}
int main() {
    for (int i=0; i<5; i++){
        print10stars();
    }
}