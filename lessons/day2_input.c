#include <stdio.h> // นี่คือ "หัว" ที่บอกว่าเราจะใช้คำสั่ง "พิมพ์" (printf) และ "รับค่า" (scanf)

int main() {

    // --- 1. การสร้าง "กล่อง" (ตัวแปร) ---

    int age; // สร้าง "กล่อง" สำหรับเก็บ "เลขจำนวนเต็ม" (Integer)
    float height; // สร้าง "กล่อง" สำหรับเก็บ "เลขทศนิยม" (Float)
    char grade; // สร้าง "กล่อง" สำหรับเก็บ "ตัวอักษร 1 ตัว" (Character)

    // --- 2. การ "รับค่า" จากคีย์บอร์ด ---

    printf("How old are you? : "); // พิมพ์ถาม
    scanf("%d", &age); // "รับค่า" เลขจำนวนเต็ม (%d) มาเก็บใน "กล่อง" age

    printf("What is your height? (e.g. 170.5) : ");
    scanf("%f", &height); // "รับค่า" เลขทศนิยม (%f) มาเก็บใน "กล่อง" height

    printf("What is your grade? (A, B, C...) : ");
    scanf(" %c", &grade); // "รับค่า" ตัวอักษร (%c) มาเก็บใน "กล่อง" grade

    // --- 3. การ "แสดงผล" ---

    printf("\n--- Your Info ---\n"); // \n คือการขึ้นบรรทัดใหม่
    printf("You are %d years old.\n", age);
    printf("You are %.1f cm tall.\n", height); // %.1f คือการโชว์ทศนิยม 1 ตำแหน่ง
    printf("Your grade is %c.\n", grade);

    return 0;
}