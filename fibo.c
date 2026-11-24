#include<stdio.h>

void fibo_num(int );

int main (){
   
    int n;

    do{
      scanf("%d", &n);   
    }while(n < 0);
 
    fibo_num(n);


return 0;
}

void fibo_num(int n){
     if(n == 0){
       printf("0");
       return;
     }
     if(n == 1){
       printf("1");
       return;
     }
     long t1 = 0;
     long t2 = 1;
     long next_num;
     
     for(int i = 2; i<=n; i++){
        next_num = t1 + t2;
        t1 = t2;
        t2 = next_num;
     }
     
     printf("%ld", next_num);

}
