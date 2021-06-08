#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Asking for an Operation to be selected
    char op;
    printf("\nSelect an operation:\n+ add\n- sub\n/ divide\n* multiply\n ");
    scanf("%c", &op);

    // Checking if the operation selected is valid
    if(op == '+' || op == '-' || op == '/' || op == '*')
    {
        // Reading the values to be calculated
        fflush(stdin);
        float a, b;
        printf("\nType a value:\n");
        scanf("%f", &a);
        printf("%c\n", op);
        scanf("%f", &b);

        // Calculating
        switch(op)
        {
            case '+':
                printf("= %.2f", a + b);
                break;
            case '-':
                printf("= %.2f", a - b);
                break;
            case '*':
                printf("= %.2f", a * b);
                break;
            case '/':
                printf("= %.2f", a / b);
                break;
        }
    }else{
        printf("\nInvalid operation");
        return 0;
    }
}