#include <stdio.h>
#include <string.h>

int main() {
    char text[100];

    printf("Enter text to mirror: ");
    fgets(text, 100, stdin);
    text[strcspn(text, "\n")] = '\0'; // ตัดหาง

    int len = strlen(text);

    printf("Mirror: ");

    // --- เดินถอยหลัง ---
    // เริ่มที่ len - 1 (ตัวสุดท้าย)
    // ถอยไปจนถึง 0 (ตัวแรก)
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", text[i]); // พิมพ์ทีละตัว
    }
    
    printf("\n"); // ขึ้นบรรทัดใหม่สวยๆ ตอนจบ

    return 0;
}