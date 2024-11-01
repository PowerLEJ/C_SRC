#include <stdio.h>

int main(void)
{
    char season = '\0';
    int user = 0, charge = 0;
    char *user_name;

    printf("시즌권의 종류(A~D) 사용자의 종류(1~4) : \n");
    scanf(" %c %d", &season, &user);

    if(season == 'A') {
        if(user == 1 || user == 2) {
            charge = 62000;
        } else if(user == 3 || user == 4) {
            charge = 52000;
        }
    } else if(season == 'B') {
        if(user == 1 || user == 2) {
            charge = 52000;
        } else if(user == 3 || user == 4) {
            charge = 42000;
        }
    } else if(season == 'C') {
        if(user == 1 || user == 2) {
            charge = 46000;
        } else if(user == 3 || user == 4) {
            charge = 36000;
        }
    } else if(season == 'D') {
        if(user == 1 || user == 2) {
            charge = 68000;
        } else if(user == 3 || user == 4) {
            charge = 58000;
        }
    }

    if(user == 1) { user_name = "대인"; } 
    else if(user == 2) { user_name = "청소년"; } 
    else if(user == 3) { user_name = "소인"; } 
    else if(user == 4) { user_name = "경로"; }
    
    if(charge == 0) {
        printf("정확하게 입력해주세요. 다시 시도해주세요.\n");
    } else {
        printf("%s / 시즌 %c 의 입장료는 %d원입니다.\n", user_name, season, charge);
    }

    return 0;
}