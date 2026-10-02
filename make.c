#include <stdio.h>

int main() {
    int n;
    
    printf("정수 하나를 입력하시오: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("입력한 정수는 양수입니다.\n");
    } else if (n < 0) {
        printf("입력한 정수는 음수입니다.\n");
    } else {
        printf("입력한 정수는 0입니다.\n");
    }
    return 0;
}