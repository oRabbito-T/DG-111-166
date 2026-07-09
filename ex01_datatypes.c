#include <stdio.h>

int main()
{
    // ประกาศและกำหนดค่าตัวแปร
    int age = 10;
    float gpa = 3.75;
    char grade = 'A';
    double pi = 3.14159265358979;

    // แสดงค่าและขนาด
    printf("int age = %d (size: %zu bytes)\n", age, sizeof(age));
    printf("float gpa = %.2f (size: %zu bytes)\n", gpa, sizeof(gpa));
    printf("double pi =%.10f(size: %zu bytes)\n", pi, sizeof(pi));
    printf("char grade = %c (size: %zu bytes)\n", grade, sizeof(grade));
    return 0;
}