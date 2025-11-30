#include <stdio.h>

int main(){
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("--- Walk using Pointer Arithmetic ---\n");

    // เราจะใช้ i เพื่อ "บวกเพิ่ม" ไปที่ตำแหน่งของ Pointer
    for (int i = 0; i < 5; i++) {
        // สูตรเวทมนตร์: *(address + step)
        // numbers + i  --> คือ "เดิน" ไป i ก้าว
        // *( ... )     --> คือ "หยิบของ" ตรงนั้นมาดู
        printf("Step %d: Value is %d\n", i, *(numbers + i));
    }

    return 0;
}