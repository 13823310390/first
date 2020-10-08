#include <stdio.h>

int main() {
    int num =0;
    printf("请输入10进制数字:");
    scanf("%d",&num);
    while(1){
        int temp= num/16;
        int yu = num % 16;
        switch (yu){
            case 10:
                printf("A");
                break;
            case 11:
                printf("B");
                break;
            case 12:
                printf("C");
                break;
            case 13:
                printf("D");
                break;
            case 14:
                printf("E");
                break;
            case 15:
                printf("F");
                break;
            default:
                printf("%d",num);
                break;





        }
    }break;


    return 0;
}
