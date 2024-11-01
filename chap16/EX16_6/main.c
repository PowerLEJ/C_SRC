#include <stdio.h>
#include <stdlib.h>

// int main(int argc, char **argv)
int main(int argc, char *argv[])
{
    // 터미널에 ./main abc def 라고 쳤을 때 여기에 이렇게 들어감
    // char *argv[] = {"./main", "abc", "def"};

    if(argc < 3) {
        printf("매개변수를 3개 이상 입력하세요.\n");
        return -1;
    }

    for(int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
        // printf("%s\n", *(argv + i));
    }

    int hap = atoi(argv[1]) + atoi(argv[2]);
    printf("%d\n", hap);

    return 0;
}