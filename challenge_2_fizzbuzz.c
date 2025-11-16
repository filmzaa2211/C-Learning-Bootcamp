#include <stdio.h>

int main(){
    int n = 20; // กำหนดค่าจำนวนเต็ม n เป็น 20
    printf("FizzBuzz from 1 to %d:\n", n); // แสดงข้อความเริ่มต้น
    for(int i = 1; i <= n; i++){ // วนลูปจาก 1 ถึง n
        if(i % 3 == 0 && i % 5 == 0){ // ถ้า i หารด้วย 3 และ 5 ลงตัว
            printf("FizzBuzz\n"); // แสดงผล FizzBuzz
        } else if(i % 3 == 0){ // ถ้า i หารด้วย 3 ลงตัว
            printf("Fizz\n"); // แสดงผล Fizz
        } else if(i % 5 == 0){ // ถ้า i หารด้วย 5 ลงตัว
            printf("Buzz\n"); // แสดงผล Buzz
        } else {
            printf("%d\n", i); // แสดงผลตัวเลข i
        }
    }
    return 0; // จบโปรแกรม
}