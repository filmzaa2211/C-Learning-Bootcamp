#include <stdio.h>

// --- 1. "สร้างกล่องเครื่องมือ" (Function Definition) ---
// นี่คือ "เครื่องบวกเลข" ของเรา
// มันรับ int 2 ตัว (a, b) ... และมันจะ "ส่งกลับ" (return) int 1 ตัว
int add(int a, int b) {
    printf("DEBUG: Inside add() function...\n"); // (แอบดูว่ามันเข้ามาทำงานจริง)
    int sum = a + b;
    return sum; // "ส่ง" ผลบวกกลับไป
}

// "เครื่องพิมพ์" (ฟังก์ชันแบบ "void" ... ไม่ส่งอะไรกลับ)
void printWelcomeMessage() {
    printf("--- Welcome to Smart Calculator ---\n");
}


// --- 2. "หัวหน้าใหญ่" (main function) ---
int main() {

    // "เรียกใช้" (Call) เครื่องพิมพ์
    printWelcomeMessage();

    int num1 = 10;
    int num2 = 20;

    // "เรียกใช้" (Call) เครื่องบวกเลข
    // เอา num1, num2 "ส่ง" เข้าไป... แล้ว "รอรับ" ผลลัพธ์กลับมาใส่ "result"
    int result = add(num1, num2); 

    printf("The result of %d + %d is: %d\n", num1, num2, result);

    // เรา "เรียกซ้ำ" ได้เรื่อยๆ
    int result2 = add(50, 5);
    printf("50 + 5 is: %d\n", result2);

    return 0;
}