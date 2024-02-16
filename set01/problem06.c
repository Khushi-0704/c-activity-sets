#include<stdio.h>

int input(int *num){
    printf("enter a number: ");
    scanf("%d", num);
}

void compare(int a, int b, int c, int *lar){
   if (a>=b && a>=c){
        *lar=a;
    }
    else if(b>=a && b>=c){
        *lar=b;
    }
    else{
        *lar=c;
    }
}

int output(int a, int b, int c, int lar){
    printf("the largest number between %d %d and %d is %d", a,b,c,lar);
}

int main(){
    int a,b,c,largest;
    input(&a);
    input(&b);
    input(&c);
    compare(a,b,c,&largest);
    output(a,b,c,largest);
    return 0;
}