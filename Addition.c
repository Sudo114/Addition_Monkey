#include <stdio.h>
int main()
{
    int type;
    int num;
    int num2;
    double num3;
    double num4;

    printf("which type of number do you want to add\n");
    printf("0 For Integers\n");
    printf("1 For Floating Numbers\n");

    printf("----> ");
    scanf("%d", &type);

    if (type == 0)
    {
        printf("Enter the first number\n");
        scanf("%d", &num);
        printf("Enter the second number\n");
        scanf("%d", &num2);
        printf("SUM is %d", num + num2);
    }
    if (type == 1)
    {
        printf("Enter the first number\n");
        scanf("%lf", &num3);
        printf("Enter the second number\n");
        scanf("%lf", &num4);
        printf("SUM is %lf", num3 + num4);
    }

    return 0;
}
