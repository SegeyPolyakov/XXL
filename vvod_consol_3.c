#include <stdio.h>
  
int main(void)
{
    int age;
    char name[20];
    // 150
    printf("Your age: ");
    scanf("%d", &age);
    // Starec
    printf("Your name: ");
    scanf("%20s", name);
     
    printf("Name: %s \t Age = %d",name,  age);
    return 0;
}