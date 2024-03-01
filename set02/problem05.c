#include <stdio.h>

int input(){

    int a;
    printf("enter two numbers");
    scanf("%d" , &a);
    return a ;
}

int find_gcd(int a, int b){
    while(a!=b){
    if(a>b){
        a-=b;
    }
    else{
        b-=a;
    }
    }
    return a;
}
void output(int a, int b, int gcd){
    printf("the gcd of %d and %d is %d", a,b,gcd);
}

int main(){
    int a = input();
    int b = input();
    int gcd= find_gcd(a,b);
    output(a,b,gcd);
    return 0;
}
    

