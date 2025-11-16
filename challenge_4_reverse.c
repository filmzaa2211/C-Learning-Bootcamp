#include <stdio.h>

int main(){
    int numbers[5]; // ประกาศอาเรย์สำหรับเก็บตัวเลข 5 ตัว
    
    for(int i = 0; i < 5; i++){     // รับค่าตัวเลขจากผู้ใช้
        printf("Enter number %d: ", i + 1); // แสดงข้อความขอรับตัวเลข
        scanf("%d", &numbers[i]);
    }

    printf("--- Reversed Numbers ---\n");

    for(int i = 4; i >= 0; i--){  // แสดงผลตัวเลขในลำดับย้อนกลับ
        printf("%d\n", numbers[i]); // แสดงผลตัวเลข
    }
    return 0;
}