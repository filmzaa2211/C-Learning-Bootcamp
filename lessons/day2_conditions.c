#include <stdio.h>

int main(){
    int age; // ประกาศตัวแปรเก็บอายุ

    printf("Please enter your age: "); // รับค่าอายุจากผู้ใช้
    scanf("%d", &age);

    if (age >= 18){ // ตรวจเช็คอายุของผู้ใช้ ถ้าอายุ 18 ปีขึ้นไป
        printf("You are an adult. Welcome!\n"); // แสดงข้อความต้อนรับ
    }else{ // ถ้าอายุน้อยกว่า 18 ปี
        printf("You are a minor. Access denied.\n"); // แสดงข้อความปฏิเสธการเข้าใช้
    }

    int score; // ประกาศตัวแปรเก็บคะแนนทดสอบ
    printf("\nEnter your test score: "); // รับค่าคะแนนทดสอบจากผู้ใช้
    scanf("%d", &score);

    if(score >= 80){ // ตรวจสอบคะแนนทดสอบ ถ้าคะแนนมากกว่าหรือเท่ากับ 80
        printf("Grade: A\n");
    }else if(score >= 70){ // ถ้าคะแนนมากกว่าหรือเท่ากับ 70
        printf("Grade: B\n");
    }else if(score >= 60){ // ถ้าคะแนนมากกว่าหรือเท่ากับ 60
        printf("Grade: C\n");
    }else if(score >= 50){ // ถ้าคะแนนมากกว่าหรือเท่ากับ 50
        printf("Grade: D\n");
    }else{ // ถ้าคะแนนน้อยกว่า 50
        printf("Your grade is F...See you next semester!\n"); 
    }

    return 0;
}