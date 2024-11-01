#include <stdio.h>
#include <string.h>

int main(void){
    // 
    char season = '\0'; // (A~D)
    int user = 1;       // 대인(1),청소년(2),소인(3),경로(4)
    char str_user[20] = "대인";
    int price = 0;

    // std input
    while (1)
    {
        printf("시즌권의 종류(A~D) : ");
        scanf(" %c", &season);
        // if((season == 'A') || (season == 'B') || (season == 'C') || (season == 'D')) {
        if((season >= 65) && (season <= 68)) {
            printf("잘 입력하셨습니다.\n");
            break;
        }

        printf("A, B, C, D 중에 하나를 입력하세요.\n");
    }

    while (1)
    {
        printf("사용자의 종류 : ");
        scanf("%d", &user);

        // if((user != 1) && (user != 2) && (user != 3) && (user != 4)) {
        // if(!((user == 1) || (user == 2) || (user == 3) || (user == 4))) {
        if(((user == 1) || (user == 2) || (user == 3) || (user == 4)) == 0) {
            printf("1, 2, 3, 4 중에 하나를 입력하세요.\n");
            continue;
        }
        break;
    }
    
    

    // printf("%c, %d\n", season, user);

    // 
    switch (season)
    {
        case 'A':
            switch (user)
            {
                case 1: price = 62000; break;
                case 2: price = 62000; break;
                case 3: price = 52000; break;
                case 4: price = 52000; break;
                default: price = 0; break;
            }
            break;
        case 'B':
            switch (user)
            {
                case 1: price = 52000; break;
                case 2: price = 52000; break;
                case 3: price = 42000; break;
                case 4: price = 42000; break;
                default: price = 0; break;
            }
            break;
        case 'C':
            switch (user)
            {
                case 1: price = 46000; break;
                case 2: price = 46000; break;
                case 3: price = 36000; break;
                case 4: price = 36000; break;
                default: price = 0; break;
            }
            break;
        case 'D':
            switch (user)
            {
                case 1: price = 68000; break;
                case 2: price = 68000; break;
                case 3: price = 58000; break;
                case 4: price = 58000; break;
                default: price = 0; break;
            }
            break;
        default:
            break;
    }

    // std output
    if(user == 1) strcpy(str_user, "대인");
    else if(user == 2) strcpy(str_user, "청소년");
    else if(user == 3) strcpy(str_user, "소인");
    else if(user == 4) strcpy(str_user, "경로");


    printf("%s/시즌%c의 입장료는 %d원입니다.", 
            str_user, season,price);

    return 0;
}