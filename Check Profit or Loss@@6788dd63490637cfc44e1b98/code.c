#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a<b){
        printf("Profit");
    }
    if else(a>b){
        printf("Loss");
    }
    if else{(a == b)
        printf("No Profit No Loss");
    }
    return 0;
}