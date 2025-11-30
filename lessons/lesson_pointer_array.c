#include <stdio.h>

int main(){
    // สร้างตู้ลิ้นชัก 3 ช่อง
    int numbers[3] = {10, 20, 30};

    printf("--- Proof 1: Addresses are the same ---");

    // 1. ปรินท์ "ที่อยู่" ของช่องแรก (แบบที่เราคุ้นเคย)
    printf("Address of numbers[0]: %p\n", &numbers[0]);

    // 2. ปรินท์ "ค่า" ของตัวแปรชื่ออาเรย์เฉยๆ
    printf("Value of 'number': %p\n", numbers);

    printf("\n--- Proof 2: Dereferencing Array Name ---\n");

    // 3. ลองใช้ * (กุญแจผี) ไขชื่ออาเรย์ดูซิ?
    // ถ้า numbers คือ Pointer... *numbers ก็ต้องได้ค่าข้างในช่องแรก (10)
    printf("Value inside *numbers: %d\n", *numbers);

    return 0;
}