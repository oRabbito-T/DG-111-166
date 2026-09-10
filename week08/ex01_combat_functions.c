#include <stdio.h>
#include <math.h>

// Function Prototypes

int calculateDamage(int attack, int defense);
int isCriticalHit(int roundNumber);
void displayHP(int current, int max);
void printCombatResult(int round, int damage, int isCrit);

// Function Definitions

// ตรวจสอบว่าเป็น Critical Hit หรือไม่
int isCriticalHit(int roundNum)
{
    return (roundNum % 5 == 0);
}

// คำนวณ Damage และ Clamp อย่างน้อย 1
int calculateDamage(int attack, int defense)
{
    int damage = attack - defense;

    if (damage < 1)
        damage = 1;

    return damage;
}

// แสดง HP Bar
void displayHP(int current, int max)
{
    int filled = (current * 10) / max;
    char bar[11];

    for (int i = 0; i < 10; i++)
    {
        bar[i] = (i < filled) ? '#' : '-';
    }

    bar[10] = '\0';

    printf("Enemy HP: [%s] %d/%d\n", bar, current, max);
}

// แสดงผลการต่อสู้
void printCombatResult(int round, int damage, int isCrit)
{
    printf("Round %2d: ", round);

    if (isCrit)
    {
        printf("*** CRITICAL!***");
    }
    else
    {
        printf("Normal        ");
    }

    printf(" - Damage: %2d | ", damage);
}

int main(void)
{
    int attack = 70;
    int defense = 25;
    int enemyHP = 500;
    int enemyMaxHP = 500;

    printf("=== COMBAT SIMULATOR ===\n");
    printf("----------------------------------------\n");

    for (int round = 1; round <= 10 && enemyHP > 0; round++)
    {

        // ตรวจสอบ Critical Hit
        int isCrit = isCriticalHit(round);

        // ถ้า Critical ให้ attack x 1.5
        int damage = calculateDamage(
            isCrit ? (int)(attack * 1.5) : attack,
            defense);

        enemyHP -= damage;

        if (enemyHP < 0)
            enemyHP = 0;

        // แสดงผลการโจมตี
        printCombatResult(round, damage, isCrit);

        // แสดง HP
        displayHP(enemyHP, enemyMaxHP);
    }

    return 0;
}