#include <stdio.h>

int main() {
    int numbers[5]; // ตู้หลัก (สำหรับรับค่า)

    // --- 1. สร้าง "ตู้เก็บ" ใหม่ ---
    // (เราไม่รู้ว่าจะมีคู่กี่ตัว/คี่กี่ตัว... เลยต้องจอง "เผื่อ" ไว้ 5 ช่อง)
    int evenNumbers[5];
    int oddNumbers[5];

    // --- 2. สร้าง "กล่องนับ" (ซึ่งเราจะใช้เป็น "เลขที่ช่อง" ด้วย) ---
    int evenCount = 0;
    int oddCount = 0;

    // --- 3. "Loop ที่ 1" (รับค่า) ---
    // (เหมือนเดิมเป๊ะ)
    printf("--- Please enter 5 numbers ---\n");
    for(int i = 0; i < 5; i++){
        printf("Enter number #%d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // --- 4. "Loop ที่ 2" (คัดแยก และ "เก็บ") ---
    // (นี่คือหัวใจใหม่!)
    printf("\n--- Processing Numbers ---\n"); // (ผมเพิ่มบรรทัดนี้... โค้ดเดิมคุณรวม Loop 2 กับ 3 ไว้)
    for(int i = 0; i < 5; i++){
        
        printf("Number #%d: %d\n", i + 1, numbers[i]); // (ย้ายมาจากโค้ดเดิม)

        if(numbers[i] % 2 == 0) {
            // "ถ้า" เป็นเลขคู่...
            // 1. "เก็บ" มันไว้ใน "ตู้เลขคู่" ... ณ "ช่องที่ evenCount"
            evenNumbers[evenCount] = numbers[i];
            
            // 2. "นับ" (เพื่อจะได้ไปใช้ช่องถัดไปในรอบหน้า)
            evenCount++; // (ย่อมาจาก evenCount = evenCount + 1)
            
        } else {
            // "ถ้า" เป็นเลขคี่...
            // 1. "เก็บ" มันไว้ใน "ตู้เลขคี่" ... ณ "ช่องที่ oddCount"
            oddNumbers[oddCount] = numbers[i];
            
            // 2. "นับ"
            oddCount++;
        }
    }

    // --- 5. "พิมพ์" ผลลัพธ์แบบใหม่ ---
    // (เราต้องใช้ "for loop" เพื่อ "รื้อ" ของออกจากตู้ที่เราเก็บมา)

    printf("\nYou have %d EVEN numbers. (is/are: ", evenCount);
    for(int i = 0; i < evenCount; i++) {
        printf("%d", evenNumbers[i]); // พิมพ์เลข
        
        if (i < evenCount - 1) { // "ถ้า" นี่ยังไม่ใช่ "ตัวสุดท้าย"...
            printf(", "); // ...ก็พิมพ์ "ลูกน้ำ"
        }
    }
    printf(")\n"); // ปิดท้ายด้วยวงเล็บ

    printf("You have %d ODD numbers. (is/are: ", oddCount);
    for(int i = 0; i < oddCount; i++) {
        printf("%d", oddNumbers[i]);
        if (i < oddCount - 1) {
            printf(", ");
        }
    }
    printf(")\n");

    return 0;
}