#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   char Name[100];
   scanf("%s",&Name);
   int Age;
   scanf("%d",&Age);

   char Hobby[100];
   scanf("%s",&Hobby);

   printf("Name: %s",Name);
   printf("\nAge: %d",Age);
   printf("\nHobby: %s",Hobby);
    return 0;
}