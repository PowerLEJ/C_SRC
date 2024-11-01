#include <stdio.h>
#include <string.h>

int main(void){
    // 
    char season = '\0'; // (A~D)
    int user = 1;       // 대인(1),청소년(2),소인(3),경로(4)
    char str_user[20] = "대인";
    int price = 0;

    // std input
    printf("시즌권의 종류(A~D) : ");
    scanf(" %c", &season);
    printf("사용자의 종류 : ");
    scanf("%d", &user);

    // printf("%c, %d\n", season, user);

    // 
    if( season == 'A'){
        if(user == 1){
            price = 62000;
        }
        else if(user == 2){
            price = 52000;
        }
        else if(user == 3){
            price = 52000;
        }
        else if(user == 4){
            price = 52000;
        }
    }
    else if( season == 'B'){
        if(user == 1){
            price = 52000;
        }
        else if(user == 2){
            price = 52000;
        }
        else if(user == 3){
            price = 42000;
        }
        else if(user == 4){
            price = 42000;
        }
    }
    else if( season == 'C'){
        if(user == 1){
            price = 46000;
        }
        else if(user == 2){
            price = 46000;
        }
        else if(user == 3){
            price = 36000;
        }
        else if(user == 4){
            price = 36000;
        }
    }
    else if( season == 'D'){
        if(user == 1){
            price = 68000;

        }
        else if(user == 2){
            price = 68000;
        }
        else if(user == 3){
            price = 58000;
        }
        else if(user == 4){
            price = 58000;
        }
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