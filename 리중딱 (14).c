#include<stdio.h>
int main(){
    int dodo, gogo;
    int total,deposit,change,rest,menu;
    int w500, w100, w50, w10;
    int cnt_dodo, cnt_gogo;
    while(1)
    {
        printf("�ǶǸ�70�� �ǲǹ� 30��.\n");
        printf("������ ������ �� �Է��Ͻÿ�\n");
        scanf("%d %d",&cnt_dodo,&cnt_gogo);
        dodo = 70*cnt_dodo;
        gogo = 30*cnt_gogo;
        total = dodo + gogo;
        printf("�� �ݾ� %d\n", total);
        printf("������ �ݾ�.\n");
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
            printf("�ǶǸ� ��ü �ݾ�:%d\n",dodo);
            printf("�ǲǹ� ��ü �ݾ�:%d\n",gogo);
            printf("�Ž����� : %d\n",change);
            printf("#### �Ž����� ���� min����####\n\n");
            printf("500won:%d\n", w500);
            printf("100won:%d\n", w100);
            printf("50won:%d\n", w50);
            printf("10won:%d\n", w10);
            printf("\n###########################\n\n");
            printf("�����? �ٽ� �Ϸ��� 1,�������� 0�� ����");
            scanf("%d",&menu);
            if(menu==0) break;
            else continue;
        }
        else {
            printf("�ݾ��� ������ �ٽ��Ϸ��� 1 �ƴϸ� 0�� �Է�");
            scanf("%d",&menu);
            if(menu==0) break;
            else continue;
        }
    }
    return 0;

}