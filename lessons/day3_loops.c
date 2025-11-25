#include <stdio.h>

int main() {

    // --- 1. "while" loop (ลูป "ตราบใดที่") ---
    // ใช้เมื่อเรา "ไม่รู้" ว่าจะทำซ้ำกี่รอบแน่ๆ

    int magicNumber = 7;
    int guess = 0; // สร้างกล่องไว้เก็บ "เลขที่ทาย"

    printf("--- Welcome to the Guessing Game (1-10) ---\n");

    while (guess != magicNumber) { // "ตราบใดที่... (while) ...เลขที่ทาย 'ไม่เท่ากับ' 7"

        printf("Guess the number: ");
        scanf("%d", &guess);

        if (guess != magicNumber) { // ถ้าทายผิด
            printf("Wrong! Try again.\n"); // แจ้งว่าทายผิด
        }
    }

    printf("Correct! The number was 7!\n");

    // --- 2. "for" loop (ลูป "สำหรับ") ---
    // ใช้เมื่อเรา "รู้แน่ๆ" ว่าจะทำซ้ำกี่รอบ (เช่น 10 รอบ)

    printf("\n--- Multiplication Table for 5 ---\n");

    // for (1. จุดเริ่มต้น ; 2. เงื่อนไข ; 3. สิ่งที่ทำเมื่อจบรอบ)
    for (int i = 1; i <= 12; i = i + 1) {

        // "สำหรับ i ที่เริ่มที่ 1... ตราบใดที่ i <= 12... ให้บวก i เพิ่ม 1 ทุกจบรอบ"

        printf("5 x %d = %d\n", i, (5 * i));
    }

    return 0;
}