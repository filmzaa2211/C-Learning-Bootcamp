#include <stdio.h>

// 1. หัวฟังก์ชัน:
// void = ไม่ส่งของกลับ, checkWeather = ชื่อ, (int temp) = รับค่าอุณหภูมิเข้ามา
void checkWeather(int temp){

    // 2. เนื้อฟังก์ชัน:
    if(temp >= 35){
        printf("It's super hot!\n");
    } else if(temp >= 20 && temp < 35){
        printf("Nice weather.\n");
    } else {
        printf("It's cold!\n");
    }
    // ไม่มี return เพราะเป็น void
}

// 1. หัวฟังก์ชัน:
// int = สัญญาว่าจะส่งเลขจำนวนเต็มคืนให้, (int w, int h) = รับกว้างกับยาว
int calculateArea(int width, int height){
    // 2. เนื้อฟังก์ชัน:
    int result = width * height; // คำนวณพื้นที่
    return result; // ส่งค่ากลับ
}

// รับฐาน (base) และ เลขชี้กำลัง (exponent)
int power(int base, int exponent){
    int result = 1; // ตั้งต้นที่ 1 (เพราะอะไรคูณ 1 ก็ได้ตัวเดิม)

    //วนลูปตามจำนวน exponent (เช่น 3 รอบ)
    for(int i = 0; i < exponent; i++){
        result = result * base; // คูณฐานเข้าไปเรื่อยๆ
    }

    return result; // ส่งค่ากลับ
}

int main(){
    // ทดสอบฟังก์ชัน checkWeather
    printf("--- Test 1: Weather ---\n");
    checkWeather(40); // ควรแสดง "It's super hot!"
    checkWeather(25); // ควรแสดง "Nice weather."

    // ทดสอบฟังก์ชัน calculateArea
    printf("\n--- Test 2: Area Calculation ---\n");
    int w = 10, h = 5;
    int area = calculateArea(w, h);
    printf("Area of %dx%d is: %d\n", w, h, area); // ควรแสดง "Area of 10x5 is: 50"

    // ทดสอบฟังก์ชัน power
    printf("\n--- Test 3: Power Calculation ---\n");
    int p = power(2, 3); // 2^3 = 8
    printf("2 to the power of 3 is: %d\n", p); // ควรแสดง "2 to the power of 3 is: 8"

    return 0;
}