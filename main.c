#include <stdio.h>
#include <stdlib.h>


struct student {
    int student_id;
    char name[50];
    float grade;
};

int main(void) {
    // ����ü ���� ����
    struct student s;

    // �л� ���� �Է�
    s.student_id = 2114034;
    strcpy(s.name, "������");
    s.grade = 3.5;

    // �л� ���� ���
    printf("ID: %d\n", s.student_id);
    printf("name: %s\n", s.name);
    printf("grade: %.2f\n", s.grade);

    system("PAUSE");
    return 0;
}

