#include <stdio.h>

int main() {

    // 1. "สร้าง" ตู้ลิ้นชัก 5 ช่อง
    int scores[5]; // สร้างช่อง 0, 1, 2, 3, 4
    int totalSum = 0;
    float average = 0.0;

    printf("--- Please enter scores for 5 subjects ---\n");

    // 2. "ใช้ for loop" ยัดของใส่ตู้ (รับค่า)
    // (i = 0; i < 5; i++) ... นี่คือการนับ "0, 1, 2, 3, 4"
    for (int i = 0; i < 5; i++) {

        printf("Enter score for subject #%d: ", i + 1); // (i+1) คือการ "โชว์" ให้คนเห็นเป็น 1, 2, 3...
        scanf("%d", &scores[i]); // "สแกน" ค่าเข้า "ช่องที่ i"

        // บวกทบค่าในช่องที่เพิ่งรับมา
        totalSum = totalSum + scores[i];
    }

    // 3. "ใช้ for loop" เปิดตู้ดูของ (แสดงผล)
    printf("\n--- Your Scores ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject #%d: %d\n", i + 1, scores[i]);
    }

    // 4. "คำนวณ"
    average = (float)totalSum / 5.0; // (float) คือการ "แปลงร่าง" ให้เป็นทศนิยม

    printf("\nTotal Score: %d\n", totalSum);
    printf("Average Score: %.2f\n", average); // %.2f = ทศนิยม 2 ตำแหน่ง

    return 0;
}