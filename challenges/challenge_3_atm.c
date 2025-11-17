#include <stdio.h>

int main(){
    int correctPin = 2211; // รหัส PIN ที่ถูกต้อง
    int tries = 0; // ตัวนับจำนวนครั้งที่พยายาม
    int inputPin; // ตัวแปรสำหรับเก็บรหัส PIN ที่ผู้ใช้ป้อน

    printf("--- Welcome to the ATM ---\n");
    
    while(1) { // ลูปไม่รู้จบ จนกว่าจะเจอคำสั่ง break   
        printf("Enter PIN: ");
        scanf("%d", &inputPin);

        // "ทางออกที่ 1" (ถ้าสำเร็จ)
        if(inputPin == correctPin){ // "ถ้า" รหัสถูกต้อง...
            printf("Access granted. Welcome!\n");
            break; // ออกจากลูปเมื่อรหัสถูกต้อง
        } else { // "ถ้า" รหัสผิด...

            tries++; // 1. "นับ" ความผิดพลาด *ตรงนี้*

            if (tries >= 3) { // 2. "เช็ก" ว่านี่คือครั้งสุดท้ายหรือยัง
                printf("Wrong PIN. Try again.\n");
                break; // <-- ออก (ล้มเหลว)
            } else {
                // 3. "ถ้า" ยังไม่ครบ... ค่อยบอกให้ลองใหม่
                printf("Wrong PIN. You have %d attempt(s) left.\n", 3 - tries);
            }
        }
    } // ลูป while(1) จบตรงนี้

    return 0; // จบโปรแกรม
}