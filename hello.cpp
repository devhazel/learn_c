/*
 아래 헤더파일을 이 프로그램에 포함하지 않은 경우 [use of undeclared identifier 'printf'] 에러가 발생한다.
 왜냐하면 printf()라는 output 함수는 standard-input-output 헤더파일에 정의되어 있기 때문이다.
 */  
#include <stdio.h>

int main() {
    // programming의 시작 Hello, World!
    printf("%s", "Hello, World!₩n");

    // 3*5 직사각형 출력
    printf("@@@@@₩n@@@@@₩n@@@@@");
    return 0;
}