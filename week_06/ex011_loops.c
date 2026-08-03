#include <stdio.h>

int main()
{
    int sum_1 = 0;
    int sum_2 = 0;
    int sum_3 = 0;

    // 1. for loop — เหมาะสมเมื่อทราบจานวนรอบที่แน่นอน
    for (int i = 1; i <= 10; i++)
    {
        // โค้ดที่ต้องการให้ทางานซ ้า
        printf("%d\n", i);
        sum_1 = sum_1 + i;
    }
    printf("SUM = %d\n", sum_1);

    // 2. while loop — เช็คเงื่อนไขก่อนทางาน (อาจไม่ท างานเลยถ้าเงื่อนไขเป็นเท็จตั้งแต่แรก)
    int i = 1;
    while (i <= 10)
    {
        // โค้ดที่ต้องการให้ทางานซ ้า
        printf("%d\n", i);
        sum_2 = sum_2 + i;
        i++;
    }
    printf("SUM = %d\n", sum_2);

    // 3. do while loop — ทางานอย่างน้อย 1 ครั้งก่อนเช็คเงื่อนไข
    int ii = 1;
    do
    {
        // โค้ดที่ต้องการให้ทางานซ ้า
        printf("%d\n", ii);
        sum_3 = sum_3 + ii;
        ii++;
    } while (ii <= 10);
    printf("SUM = %d\n", sum_3);

    return 0;
}