#include<stdio.h>
#include<string.h>

int check(char * num,int length){
    int SndNum=0 , sum=0;
    for(int i=0;i<=length-1;i++){
        int d = num[i] - '0';
        if(SndNum)
            d*=2;
        sum+=d/10;
        sum+=d%10;
        SndNum=!SndNum;
    }
    if(sum%10==0)
        return 1;
    else
        return 0;
}

void main(){
    char num[15];
    printf("enter card number: ");
    scanf("%s",num);
    if(check(num,strlen(num))) 
        printf("valid card number according to Luhn Algorithm");
    else
        printf("not valid card number according to Luhn Algorithm");
}