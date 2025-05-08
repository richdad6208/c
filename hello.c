#include <stdio.h>

int main(void) {
    float f; 
    double d;

    printf("두 개의 실수를 입력해주세요>"); 
    scanf("%f%lf", &f, &d);

    printf("입력하신 실수는 %f입니다.\n", f); 
    printf("입력하신 실수는 %f입니다.\n", d); 

    return 0; 
}

