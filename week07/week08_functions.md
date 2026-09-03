# Week 8 — Functions Reference

**Function Reference — `ex02_game_utils.c`**

| Function                                    | ทำหน้าที่                                                 | Returns                      |
| ------------------------------------------- | ------------------------------------------------------------------ | ---------------------------- |
| `int clamp(int value, int min, int max)`  | จำกัดค่า value ให้อยู่ระหว่าง min และ max | ค่าที่ clamp แล้ว  |
| `float lerp(float a, float b, float t)`   | Linear interpolation ระหว่าง a และ b ตาม t            | ค่าที่คำนวณได้ |
| `int randomRange(int min, int max)`       | สุ่มตัวเลขระหว่าง min และ max                  | ค่าสุ่ม               |
| `float percentOf(int current, int total)` | คำนวณเปอร์เซ็นต์                                   | ค่าเปอร์เซ็นต์ |

## คำถาม Reflection — Exercise 2

### 2.1 `clamp` — Pass by Value

**คำถาม:** ทำไม `hp` ใน `main()` ถึงยังเป็น 150 ทั้งที่ `value` ใน `clamp()` ถูกเขียนทับเป็น 100 ไปแล้ว?

**คำตอบ:  ค่า hp 150 ไปแทนที่ value แต่ **`hp` ยังคงเป็น 150** เพราะ `value` เป็นคนละตัวแปรกับ `hp`**

### 2.2 `lerp` — Local Scope

**คำถาม:** ทำไม `main()` ถึงมองไม่เห็นตัวแปร `result` ทั้งที่มันถูกประกาศไว้ในไฟล์เดียวกัน?

**คำตอบ:  เพราะตัวแปร `result` เป็น **Local Variable** ที่ประกาศอยู่ภายใน `lerp()` จึงสามารถใช้งานได้เฉพาะภายใน `lerp()` เท่านั้น**

### 2.3 `randomRange` — Pass by Value

**คำถาม:** ทำไม `diceMin` ใน `main()` ถึงยังเป็น 1 ทั้งที่ `min` ใน `randomRange()` ถูกบวกเพิ่มเป็น 101 ไปแล้ว?

**คำตอบ:  `min` ใน `randomRange()` เป็น **Pass by Value** ซึ่งได้รับสำเนาค่าของ `diceMin` มา ดังนั้นเมื่อเปลี่ยน `min` จะเปลี่ยนเฉพาะตัวแปรในฟังก์ชัน ไม่กระทบ `diceMin` ใน `main()` ทำให้ `diceMin` ยังคงเป็น 1**

### 2.4 `percentOf` — Pass by Value

**คำถาม:** ทำไม `score` ใน `main()` ถึงไม่เปลี่ยนเป็น 0 ตาม `current` ทั้งที่ `percentOf()` แก้ `current = 0;` ไปแล้ว?

**คำตอบ: `current` เป็น **Pass by Value** เมื่อส่ง `score` เข้าไป ฟังก์ชันจะได้รับสำเนาของค่า `score` ดังนั้นการเปลี่ยน `current` เป็น 0 จะเปลี่ยนเฉพาะตัวแปร `current` ใน `percentOf()` ไม่กระทบ `score` ใน `main()` ทำให้ `score` ยังคงค่าเดิม**
