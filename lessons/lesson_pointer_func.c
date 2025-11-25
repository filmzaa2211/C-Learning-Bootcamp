#include <stdio.h>

// --- แบบที่ 1: ส่งสำเนา (Pass by Value) ---
// รับ "int score" (สำเนา)
void addTenCopy(int score) {
    score = score + 2000;
    printf("   [Inside Copy Func] Score becomes: %d\n", score);
}

// --- แบบที่ 2: ส่งที่อยู่ (Pass by Reference) ---
// รับ "int *scorePtr" (Pointer/ที่อยู่)
void addTenReal(int *scorePtr) {
    // ใช้ * เพื่อ "วาร์ป" ไปแก้ที่ตัวจริง
    *scorePtr = *scorePtr + 2000;
    printf("   [Inside Real Func] Real Score becomes: %d\n", *scorePtr);
}

int main() {
    int myScore = 2000;
    printf("Start: myScore = %d\n", myScore);

    printf("\n--- Test 1: Pass Copy ---\n");
    addTenCopy(myScore); // ส่ง "ค่า 50" ไป
    printf("After Copy Func: myScore = %d (No change!)\n", myScore);

    printf("\n--- Test 2: Pass Pointer ---\n");
    // สังเกตตรงนี้! เราส่ง "&myScore" (ที่อยู่) ไป
    addTenReal(&myScore); 
    printf("After Real Func: myScore = %d (CHANGED!)\n", myScore);

    return 0;
}