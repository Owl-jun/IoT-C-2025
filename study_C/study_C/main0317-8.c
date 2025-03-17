#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct mystruct {
    char name[20];
    int age;
    double height;
    char* str;
} myst;

int main() {
    myst s;

    strncpy(s.name, "������", sizeof(s.name) - 1);
    s.name[sizeof(s.name) - 1] = '\0'; 
    s.age = 31;
    s.height = 179.7;
    s.str = (char*)malloc(100);
    if (s.str == NULL) {
        printf("�޸� �Ҵ� ����!\n");
        return 1;
    }

    printf("�λ縻: \n");
    fgets(s.str, 100, stdin);
    size_t len = strlen(s.str);

    if (len > 0 && s.str[len - 1] == '\n') {
        s.str[len - 1] = '\0';
    }

    // ���
    printf("�̸�: %s\n", s.name);
    printf("����: %d\n", s.age);
    printf("Ű: %.1lf\n", s.height);
    printf("�λ縻: %s\n", s.str);

    // ���� �޸� ���� �� ������ NULL ó��
    free(s.str);
    s.str = NULL;

    return 0;
}
