#include<stdio.h>


int input_array_size(){

    int n ;
    printf("enter array size ");
    scanf("%d" ,&n);
    return n;

}

void input_array(int n, int a[n]){

    
    
    
printf("enter the array:");
int i;
    for(i=0;i<n;i++){
        scanf("%d" , &a[i]);
    }
}

int is_composite(int n){

    if(n<=1){
        return 1;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 1;
        }
    }
    return 0;
}
int sum_composite_numbers(int n, int a[n]){

    int sum=0;
    int i;
    
    for( i=0;i<n;i++){
        
            if(is_composite(a[i])){
                sum+=a[i];
            }
        }

        return sum;
    }

void output(int sum ){

     
  printf("the sum of composite numbers in the array is %d " , sum);
}

int main(){

    int n , sum;
    n=input_array_size();
    int a[n];
    input_array(n,a);
    sum=sum_composite_numbers(n,a);
    output(sum);
    return 0;
}