#include <stdio.h>
#include <stdlib.h>


struct student {
    int student_id;
    char name[50];
    float grade;
};

int main(void) {
    // 구조체 변수 생성
    struct student s;

    // 학생 정보 입력
    s.student_id = 2114034;
    strcpy(s.name, "양지원");
    s.grade = 3.5;

    // 학생 정보 출력
    printf("ID: %d\n", s.student_id);
    printf("name: %s\n", s.name);
    printf("grade: %.2f\n", s.grade);

    system("PAUSE");
    return 0;
}

