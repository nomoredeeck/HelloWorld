#include<stdio.h>
int main(){
    int input_sec,hr,Min,sec;
    printf("sec:"),scanf("%d",&input_sec);
    hr = input_sec/3600;
    Min = input_sec%3600/60;
    sec = input_sec%60;
    printf("%2dhour %2dMin %2dsec\n",hr,Min,sec);
    return 0;
}