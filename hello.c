#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    int input, answer;

    srand((unsigned) time(NULL)); 
    answer = rand() % 100 + 1; 

    do {
        printf("1과 100 사이의 정수를 입력해주세요. >");
        scanf("%d", &input);

        if (input > answer) {
            printf("더 작은 수를 입력해주세요\n");
        } else {
            printf("더 큰 수를 입력해주세요.\n");
        }
    } while (input != answer);

    printf("정답입니다. \n");

    return 0;
}