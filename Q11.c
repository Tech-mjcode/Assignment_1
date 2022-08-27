#include<stdio.h>
int main(){
    int hh,mm;
    printf("Enter time in this format hh:mm -> ");
    scanf("%d:%d",&hh,&mm);
    printf("\"%d hour and %d minute\"",hh,mm);
    return 0;
}
