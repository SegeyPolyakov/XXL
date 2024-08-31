#include <stdio.h>
  
int main(void)
{
    float length, result;
    printf("Enter the length in pounds: "); // 3.281
    scanf("%f",&length);
    result = length / 3.281;
    printf("Length in meters: %f\n",result);
    return 0;
}