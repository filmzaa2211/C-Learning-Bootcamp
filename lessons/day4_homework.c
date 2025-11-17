#include <stdio.h>

int main(){
    int numbers[5]; //สร้างตู้ลิ้นชัก 5 ช่อง 0,1,2,3,4

    //--- 1. "รับค่า" ให้ครบ 5 ชั้นก่อน ---
    printf("--- Please enter 5 numbers ---\n");
    for(int i = 0; i < 5; i++){ 
        printf("Enter number #%d: ", i + 1); 
        scanf("%d", &numbers[i]);
    }

    //--- 2. "หลัง" จากรับค่าแล้ว...ค่อย "ตั้งค่าเริ่มต้น"
    int max = numbers[0]; //ตั้งค่าเริ่มต้นให้ max เป็นค่าช่องแรก
    int min = numbers[0]; //ตั้งค่าเริ่มต้นให้ min เป็นค่าช่องแรก

    // --- 3. "เดิน" หาค่า ---
    printf("\n--- Your Numbers ---\n");
    for(int i = 0; i < 5; i++){ //เดินเปิดตู้ลิ้นชักดูของ
        printf("Number #%d: %d\n", i + 1, numbers[i]); //แสดงผลตัวเลขที่รับมา
        if(numbers[i] > max){ //เช็คหาค่าสูงสุด
            max = numbers[i]; //อัพเดทค่าใหม่ให้ max
        }
        if(numbers[i] < min){ //เช็คหาค่าต่ำสุด
            min = numbers[i]; //อัพเดทค่าใหม่ให้ min
        }
    }
    printf("\nMaximum Number: %d\n", max); //แสดงผลค่าสูงสุด
    printf("Minimum Number: %d\n", min); //แสดงผลค่าต่ำสุด
    return 0;
}