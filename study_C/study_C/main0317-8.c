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

    strncpy(s.name, "강석준", sizeof(s.name) - 1);
    s.name[sizeof(s.name) - 1] = '\0'; 
    s.age = 31;
    s.height = 179.7;
    s.str = (char*)malloc(100);
    if (s.str == NULL) {
        printf("메모리 할당 실패!\n");
        return 1;
    }

    printf("인사말: \n");
    fgets(s.str, 100, stdin);
    size_t len = strlen(s.str);

    if (len > 0 && s.str[len - 1] == '\n') {
        s.str[len - 1] = '\0';
    }

    // 출력
    printf("이름: %s\n", s.name);
    printf("나이: %d\n", s.age);
    printf("키: %.1lf\n", s.height);
    printf("인사말: %s\n", s.str);

    // 동적 메모리 해제 후 포인터 NULL 처리
    free(s.str);
    s.str = NULL;

    return 0;
}
