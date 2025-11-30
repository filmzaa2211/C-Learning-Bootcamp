#include <stdio.h>
#include <string.h> // อย่าลืมพระเอกคนนี้!

int main() {
    char text[100];
    int count = 0; // เริ่มนับที่ 0

    printf("Enter a sentence: ");
    fgets(text, 100, stdin);
    text[strcspn(text, "\n")] = '\0'; // ตัดหาง Enter ทิ้ง

    int length = strlen(text); // หาความยาว (เช่น FILM = 4)

    // --- เริ่มเดินตรวจทีละตัว ---
    for (int i = 0; i < length; i++) {
        
        // เช็กว่าเป็นสระหรือไม่? (ใช้ || แปลว่า "หรือ")
        if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || 
            text[i] == 'o' || text[i] == 'u' ||
            text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || 
            text[i] == 'O' || text[i] == 'U') {
            
            count++; // เจอก็นับเพิ่ม
            printf("Found vowel: %c\n", text[i]); // (แถม) ปรินท์บอกด้วยว่าเจอตัวไหน
        }
    }

    printf("\nTotal vowels: %d\n", count);

    return 0;
}