#include <stdio.h>

int main(){
    // 1. สร้างสนามเดิน (Array)
    int scores[5] = {100, 90, 80, 70, 60};

    // 2. สร้าง "นิ้วชี้" (Pointer)
    // ให้เริ่มจิ้มที่ "จุดเริ่มต้น" ของ scores
    int *ptr = scores;

    printf("--- Start Walking ---\n");

    // 3. วนลูป 5 รอบ (เดิน 5 ก้าว)
    for (int i = 0; i < 5; i++) {
        // ขั้นที่ A: อ่านค่าที่นิ้วจิ้มอยู่
        printf("Step %d: Value is %d\n", i, *ptr);

        // ขั้นที่ B: ขยับนิ้วไปช่องถัดไป (สำคัญมาก!)
        ptr++;
    }
    
    return 0;
}