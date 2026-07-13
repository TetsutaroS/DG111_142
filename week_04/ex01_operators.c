#include <stdio.h>

int main()
{
    // 1.1 — Integer Division & Modulo:

    int expression_1 = 10 / 3;
    printf("1. Expression_1 : 10 / 3 = %d\n", expression_1);

    float expression_2 = 10.0 / 3;
    printf("2. Expression_2 : 10.0 / 3.0 = %f\n", expression_2);

    float expression_3 = (float)10 / 3;
    printf("3. Expression_3 : (float)10 / 3 = %f\n", expression_3);

    int expression_4 = 10 % 3;
    printf("4. Expression_4 : 10 %% 3 = %d\n", expression_4);

    int expression_5 = -7 % 3;
    printf("5. Expression_5 : -7 %% 3 = %d\n", expression_5);

    int expression_6 = 7 % -3;
    printf("6. Expression_6 : 7 %% -3 = %d\n", expression_6);

    // 1.2 — Increment/Decrement:

    int x = 5;
    printf("x++ = %d\n", x++);
    printf("x = %d\n", x);
    x = 5;
    printf("++x = %d\n", ++x);
    printf("x = %d\n", x);

    // 1.3 — Precedence Test:

    printf("2 + 3 * 4 = %d\n", 2 + 3 * 4);
    printf("(2 + 3) * 4 = %d\n", (2 + 3) * 4);
    printf("10 - 2 - 3 = %d\n", 10 - 2 - 3);
    printf("2*3 + 4*5 = %d\n", 2 * 3 + 4 * 5);

    return 0;
}