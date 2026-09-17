#include <stdio.h>
int main()
{
    // ถ้ามี &x ที่อยู่ข้างหน้าตัวแปร x จะเป็นการบอกว่าเรากำลังเอาที่อยู่ของตัวแปร x มาเก็บไว้ใน pointer ptr
    // *ptr = &x; จะเป็นการบอกว่า pointer ptr กำลังชี้ไปที่ตัวแปร x หรือบอกค่า pointer ptr กำลังเก็บที่อยู่ของตัวแปร x

    int x;
    printf("x: ");
    scanf("%d", &x);
    int *ptr = &x;
    printf("x = %d\n", x);
    printf("&x = %p\n", (void *)&x);
    printf("ptr = %p\n", (void *)ptr);
    printf("*ptr = %d\n", *ptr);
    *ptr = 100;
    printf("x after modifying via pointer = %d\n", x);
    return 0;
}