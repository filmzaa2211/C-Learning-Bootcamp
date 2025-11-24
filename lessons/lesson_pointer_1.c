#include <stdio.h>

int main() {
    int myAge = 19;
    
    // 1. สร้าง Pointer (นักชี้เป้า)
    // "int *" แปลว่า "ฉันจะชี้ไปที่ห้องที่เก็บ int"
    int *pAge; 

    // 2. สั่งให้ชี้เป้า (เก็บที่อยู่)
    // เอา "บ้านเลขที่" ของ myAge (&myAge) ... ไปใส่ใน pAge
    pAge = &myAge;

    printf("Value of myAge: %d\n", myAge);       // ค่า (19)
    printf("Address of myAge: %p\n", &myAge);    // ที่อยู่ (เช่น 0061FF1C)
    
    printf("---------------------------\n");
    
    // 3. ดูข้อมูลใน Pointer
    printf("Value inside pAge: %p\n", pAge);     // มันเก็บ "ที่อยู่" ของ myAge ไว้!
    
    return 0;
}