#include <stdio.h>

int main(){
    int totalSum = 0; // ตัวแปรเก็บผลรวมของตัวเลขที่ป้อนเข้ามา
    int number; // ตัวแปรเก็บตัวเลขที่ผู้ใช้ป้อน

    while (1){ // ลูปไม่รู้จบ จนกว่าจะเจอคำสั่ง break
        printf("Enter a number (type 0 to stop): "); // แจ้งให้ผู้ใช้ป้อนตัวเลข
        scanf("%d", &number);

        if(number == 0){ // ถ้าผู้ใช้ป้อน 0 ให้หยุดลูป
            break; // ออกจากลูป
        }
        totalSum += number; // เพิ่มตัวเลขที่ป้อนเข้ามาในผลรวม
    }

    printf("Total sum: %d\n", totalSum); // แสดงผลรวมของตัวเลขที่ป้อนเข้ามา
    
    return 0;
}