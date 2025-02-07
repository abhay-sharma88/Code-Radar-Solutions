#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a==100 && b==150){
        printf("Profit");
    }
    if else(a==200 && b==150){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}