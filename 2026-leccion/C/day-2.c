#include <stdio.h>

int main() {
    int x, y ,a ,b ;

    printf("Pehla number enter karein: ");
    scanf("%d", &x); 

    printf("Doosra number enter karein: ");

    scanf("%d", &y);

    printf("Aapne enter kiya: %d aur %d \n", x, y);
    
    printf("inter a number: ");
    scanf("%d" ,&a);
    
    printf("inter b number:");
    scanf("%d",&b);
    
    x =x +a;
    y =y +b;
    
    
    
    
    printf("output x =%d and y =%d",x,y);
    
    return 0;
}
