#include <stdio.h>
int main(){
    int num,s;
    printf("enter a number\n");
    scanf("%d", &num);
    if (num<=0)
    {
        printf("enter a positive number");
        return 1;
    }
    while (num!=1){
        if (num%2==0){
            num=num/2;
        }
    else {
        num=3*num+1;
    }s++;
        }
            printf ("Number of steps to reach 1:%d",s);
            return 0;

}