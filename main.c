#include <stdio.h>
#include <stdlib.h>

typedef struct student {
    int no;
    char name[10];
    int kor, math, eng;
    int total;
    float average;
} Student;

Student inputStuInfo(void);
Student* inputStuInfo2(void);
void printStudent(Student s);
void printStudent2(Student *p);

int main(void) {
    Student stu = inputStuInfo();
    Student* p = inputStuInfo2();

    printStudent(stu);
    printStudent2(p);

    return 0;
}

Student inputStuInfo() {
    Student s;

    printf("학생 정보를 입력하세요. (번호, 이름, 국어, 수학, 영어)>");
    scanf("%d %s %d %d %d", &s.no, s.name, &s.kor, &s.math, &s.eng);

    return s;
}

Student* inputStuInfo2() {
    Student* p = malloc(sizeof(Student));

    printf("학생정보를 입력하세요.(번호, 이름, 국어, 수학, 영어)>");
    scanf("%d %s %d %d %d", &p->no, p->name, &p->kor, &p->math, &p->eng);

    return p;
}

void printStudent(Student s) {
    s.total = s.kor + s.eng + s.math;
    s.average = s.total / 3.0f;

    printf("%2d %10s %3d %3d %3d %3d %5.2f\n", s.no, s.name, s.kor, s.eng, s.math, s.total, s.average);
}

void printStudent2(Student* p) {
    p->total = p->kor + p->eng + p->math;
    p->average = p->total / 3.0f;

    printf("%2d %10s %3d %3d %3d %3d %6.2f\n", p->no, p->name, p->kor, p->eng, p->math, p->total, p->average);
}