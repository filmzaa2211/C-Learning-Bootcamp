#include <stdio.h>

int main() {
    int target = 100;   // target คือกล่องใส่เลข เริ่มต้นมีเลข 100 อยู่ข้างใน

    int *p1 = &target;  // p1 คือกุญแจดอกแรก ชี้ไปที่กล่อง target
    int *p2 = &target;  // p2 คือกุญแจดอกที่สอง ก็ชี้ไปที่กล่อง target เหมือนกัน

    printf("--- Before Modification ---\n");
    printf("Value of target: %d\n", target); // พิมพ์ค่าปัจจุบันของ target
    printf("Value via p1: %d\n", *p1);       // พิมพ์ค่าผ่านกุญแจ p1
    printf("Value via p2: %d\n", *p2);       // พิมพ์ค่าผ่านกุญแจ p2
    
    *p1 = 200;  // ใช้ p1 เปลี่ยนเลขใน target ให้กลายเป็น 200

    printf("--- After Modification via p1 ---\n");
    printf("Value of target: %d\n", target); // เช็กว่ากล่อง target เปลี่ยนเป็น 200 แล้วไหม
    printf("Value via p1: %d\n", *p1);       // p1 เห็นค่าเป็น 200
    printf("Value via p2: %d\n", *p2);       // p2 ก็เห็นเป็น 200 เพราะมันชี้กล่องเดียวกัน
    
    *p2 = 500;  // ใช้ p2 เปลี่ยนเลขใน target ให้เป็น 500

    printf("--- After Modification via p2 ---\n");
    printf("Value of target: %d\n", target); // target เปลี่ยนเป็น 500 แล้ว
    printf("Value via p1: %d\n", *p1);       // p1 ก็เห็นเป็น 500
    printf("Value via p2: %d\n", *p2);       // p2 ก็เห็นเป็น 500 ทั้งคู่ชี้ที่เดียวกัน

    return 0; // จบโปรแกรม
}