#include<stdio.h>
int main(){
    int dodo, gogo;
    int total,deposit,change,rest,menu;
    int w500, w100, w50, w10;
    int cnt_dodo, cnt_gogo;
    while(1)
    {
        printf("또또면70원 꽁꽁바 30원.\n");
        printf("각각의 개수를 띄어서 입력하시오\n");
        scanf("%d %d",&cnt_dodo,&cnt_gogo);
        dodo = 70*cnt_dodo;
        gogo = 30*cnt_gogo;
        total = dodo + gogo;
        printf("총 금액 %d\n", total);
        printf("투입할 금액.\n");
        scanf("%d",&deposit);
        if(deposit>total){
            change = deposit-total;
            w500 = change/500;
            rest = change%500;
            w100 = rest/100;
            rest = rest%100;
            w50 = rest/50;
            rest = rest%50;
            w10 = rest/10;
            printf("또또면 전체 금액:%d\n",dodo);
            printf("꽁꽁바 전체 금액:%d\n",gogo);
            printf("거스름돈 : %d\n",change);
            printf("#### 거스름돈 동전 min개수####\n\n");
            printf("500won:%d\n", w500);
            printf("100won:%d\n", w100);
            printf("50won:%d\n", w50);
            printf("10won:%d\n", w10);
            printf("\n###########################\n\n");
            printf("계속함? 다시 하려면 1,나가려면 0을 눌러");
            scanf("%d",&menu);
            if(menu==0) break;
            else continue;
        }
        else {
            printf("금액이 부족함 다시하려면 1 아니면 0을 입력");
            scanf("%d",&menu);
            if(menu==0) break;
            else continue;
        }
    }
    return 0;

}