#include <stdio.h>

int main() {
    int myAge = 19;
    int *pAge = &myAge; // pAge เก็บกุญแจห้องของ myAge ไว้

    printf("Before: myAge = %d\n", myAge);

    // --- เริ่มปฏิบัติการแฮ็ก ---
    
    // 1. อ่านค่าผ่าน Pointer (Dereference)
    printf("Read via pointer (*pAge) = %d\n", *pAge); 
    // (มันจะวิ่งไปที่ห้อง myAge แล้วหยิบเลข 19 มาโชว์)

    // 2. แก้ค่าผ่าน Pointer
    // สั่งว่า: "ไปที่ห้องที่ pAge ชี้อยู่ (*pAge)... แล้วเปลี่ยนของข้างในเป็น 50 ซะ!"
    *pAge = 50; 

    printf("---------------------------\n");

    // 3. มาดูผลลัพธ์ที่ตัวจริง
    printf("After: myAge = %d\n", myAge); 
    // (คุณจะเห็นว่า myAge เปลี่ยนไปแล้ว... ทั้งที่เราไม่ได้พิมพ์ myAge = 50 เลย!)

    return 0;
}