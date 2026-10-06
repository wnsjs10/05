#include <stdio.h>

int main() {
    int num = 0; // 숫자 문자 개수를 세는 변수를 int형으로 선언하고 0으로 초기화
    char c;

    printf("input a string: ");

    // while 문 조건식 내에 한글자씩 받는 코드를 넣어서 구현
    while ((c = getchar()) != '\n') {
        // c가 ASCII문자 상에서 숫자 0~9에 해당하는지를 관계식으로 비교
        if (c >= '0' && c <= '9') {
            num++; // 조건이 맞으면 num을 1씩 증가시킴
        }
    }

    // 문자열 내에서 숫자의 개수를 출력
    printf("the number of digits is %d\n", num);

    return 0;
}