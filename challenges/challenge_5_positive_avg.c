#include <stdio.h>

int main(){
    int numbers[5]; // ประกาศอาเรย์เก็บตัวเลข 5 ตัว
    int positiveCount = 0; // ตัวนับจำนวนตัวเลขบวก
    int positiveSum = 0; // ตัวเก็บผลรวมของตัวเลขบวก

    for(int i = 0; i < 5; i++){ // วนลูปรับค่าตัวเลข 5 ตัว
        printf("Enter number %d: ", i + 1); // แจ้งให้ผู้ใช้กรอกตัวเลข    
        scanf("%d", &numbers[i]); // รับค่าตัวเลขจากผู้ใช้

        if(numbers[i] > 0){ // เช็กถ้าตัวเลขเป็นบวก
            positiveSum = positiveSum + numbers[i]; // บวกตัวเลขบวกเข้ากับผลรวม
            positiveCount = positiveCount + 1; // นับจำนวนตัวเลขบวก
        }
    }

    if(positiveCount == 0){ // ตรวจสอบว่ามีตัวเลขบวกหรือไม่
        printf("No positive numbers found.\n"); // แจ้งว่าไม่มีตัวเลขบวก
    } else {
        float positiveAvg = (float)positiveSum / positiveCount; // คำนวณค่าเฉลี่ย
        printf("Average of positive numbers: %.2f\n", positiveAvg); // แสดงผลค่าเฉลี่ย
    }
    
    return 0;
}