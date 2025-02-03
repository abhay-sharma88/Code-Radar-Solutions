#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char chrac;
    scanf("%c",&chrac);
    printf("ASCII Value: %d",chrac);
    return 0;
}