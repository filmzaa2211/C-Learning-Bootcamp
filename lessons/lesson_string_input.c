#include <stdio.h>
#include <string.h> // <--- อย่าลืม!

int main() {
    char name[100];

    printf("What is your name? : ");
    
    // รับชื่อ (รวมเว้นวรรค)
    fgets(name, 100, stdin);

    // --- จุดแก้บั๊ก ---
    // เปลี่ยน \n (Enter) ให้กลายเป็น \0 (จบข้อความ)
    name[strcspn(name, "\n")] = '\0'; 

    printf("Hello, %s! Welcome back to C Bootcamp.\n", name);

    return 0;
}