#include<stdio.h>
int main(){
    int radius;
    printf("Enter the Radius : ");
    scanf("%d",&radius);
    float area = 3.14 * radius;
    printf("\"Area of circle is %.2
           f having the radius %d\"",area,radius);
    return 0;
}
