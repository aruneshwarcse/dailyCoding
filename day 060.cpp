#include<stdio.h>
int n;
char star='*';

void print(int num){
    int count1=num;

     for(int i=num-n+1;i<=num;++i){
         if(i<num){
            printf("%02d%c",i,star);
         }

         else{
            printf("%02d",i);
         }

     }
      printf("\n");

}

void printReverse(int num){
    int count1=num;
    //10 5
    for(int i=num;i>num-n;--i){
        if(i>num-n+1){
            printf("%02d%c",i,star);
         }

         else{
            printf("%02d",i);
         }

     }
      printf("\n");
    }



int main(void){
    // int n;
    scanf("%d",&n);

    int count=0;
    int temp=0;

    for(int i=1;i<=n;i++){

           if(i%2!=0){
               temp=i*n;
               print(temp);
           }

            if(i%2==0){
                temp=i*n;
                printReverse(temp);
            }
    }
}


/*
00 01 02 03 04
10 11 12 13 14
20 21 22 23 24


*/
