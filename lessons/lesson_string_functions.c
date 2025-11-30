#include <stdio.h>
#include <string.h> // ต้องมีเสมอนะ!

int main() {
    char original[100] = "Film Kung";
    char copy[100]; // กล่องเปล่า

    // 1. หาความยาว (String Length)
    // strlen จะนับตัวอักษร จนถึง \0 (ไม่นับ \0)
    int length = strlen(original);
    printf("Length of '%s' is %d characters.\n", original, length);

    // 2. ก๊อปปี้ข้อความ (String Copy)
    // strcpy(ปลายทาง, ต้นทาง);
    // ห้ามใช้ copy = original; เด็ดขาด!
    strcpy(copy, original);
    
    printf("Original: %s\n", original);
    printf("Copy:     %s\n", copy);

    // พิสูจน์ว่าก๊อปมาจริง (แก้ตัวสำเนา)
    copy[0] = 'Z';
    printf("New Copy: %s (Original is still %s)\n", copy, original);

    return 0;
}