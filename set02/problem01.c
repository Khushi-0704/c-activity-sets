#include <stdio.h>
 
 void input(float *base, float *height){

    printf("enter base of triangle");
    scanf("%f" , base);
    printf("enter height of triangle");
    scanf("%f" , height);

 }

 void find_area(float base , float height, float *area){

    
    *area=base*height*0.5;
   



 }

 void output(float base, float height, float area){

    printf("the area of the triangle is %f" , area  );
 }

 int main(){

    float base , height , area;
    input(&base, &height);
    find_area(base,height,&area);
    output(base,height,area);
    return 0;


}





