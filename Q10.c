#include<stdio.h>
int main(){
    int dd,mm,yyyy;
    printf("Enter The date in this format DD/MM/YYYY : ");
    scanf("%d/%d/%d",&dd,&mm,&yyyy);
    printf("\"Day - %d Month - %d Year - %d\"",dd,mm,yyyy);
    return 0;
}
