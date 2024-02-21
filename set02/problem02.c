#include <stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);


int input_side(){

    int a , b , c;
    printf("enter the side a , b , c of the triangle:");
    scanf("%d" , &a);
}

int check_scalene(int a , int b , int c){

    if(a!=b && b!=c && a!=c){

        return 1;
    }
    else{

        return -1;
    }
}

void output(int a , int b ,int c , int isscalene){
{}
    if(isscalene > 0){
    printf("the traingle with sides %d , %d , %d is scalene" , a , b ,c);
    }
    else if (isscalene < 0){
        printf("the trianlge with sides %d , %d , %d is not scalene" , a , b, c);;
    }
}
