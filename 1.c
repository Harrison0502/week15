#include <stdio.h>
#include <stdlib.h>

int main(){
    int input;
    char two[10];
    while(scanf("%d",&input)&&input!=EOF){
        char two[20]="0000000000000000";//16位數2進位
        int q=input,r,i=15;
        while(q!=0){
            r=q%2;
            if(r==1)
                two[i]='1';
            else
                two[i]='0';
            i--;
            q=q/2;
        }
        if(two[15]=='1')//檢查碼為1則錯誤
            printf("Error\n");
        else{
        //printf("%s\n",two);
        int grade=0,clas=0,num=0;
        char male[5]={0};
        //grade
        if(two[0]=='1')
            grade+=4;
        if(two[1]=='1')
            grade+=2;
        if(two[2]=='1')
            grade+=1;
        //clas
        if(two[3]=='1')
            clas+=8;
        if(two[4]=='1')
            clas+=4;
        if(two[5]=='1')
            clas+=2;
        if(two[6]=='1')
            clas+=1;
        //male
        if(two[7]=='1')
            male[0]='M';
        if(two[7]=='0')
            male[0]='F';
        //num
        if(two[8]=='1')
            num+=64;
        if(two[9]=='1')
            num+=32;
        if(two[10]=='1')
            num+=16;
        if(two[11]=='1')
            num+=8;
        if(two[12]=='1')
            num+=4;
        if(two[13]=='1')
            num+=2;
        if(two[14]=='1')
            num+=1;
        printf("%d-%d-%c-%d\n",grade,clas,male[0],num);

        }
        
    }
}