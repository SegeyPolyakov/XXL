#include <stdio.h>
  
int main(void)
{
    char buffer[50]; 
    int count;
    double price;
    printf("Input count and price:");
    if (fgets(buffer, 50, stdin) != NULL)
    {
        sscanf(buffer, "%d %lf", &count, &price);
        printf("Price: %.2lf \tCount: %d \n", price, count);
    }
    else
    {
        printf("Fatal Error!\n");
    }
    return 0;
}