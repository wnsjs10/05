#include <stdio.h>

int main() {
    int n; 
    int m; 


    printf("정수 하나를 입력하시오 : ");
    scanf("%d", &n);

    m = n;

    
    if (m < 0) {
        m = -m;
    }

    
    printf("절대값은 %d 입니다.\n", m);

    return 0;
}