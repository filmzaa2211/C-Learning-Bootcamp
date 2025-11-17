#include <stdio.h>

//ฟังก์ชันนี้ใช้ในการ ตรวจว่าคะแนนอยู่ช่วงไหน แล้วเลือก grade ให้
char getGrade(int score) {
    if (score >= 80) {
        return 'A';
    } else if (score >= 70) {
        return 'B';
    } else if (score >= 60) {
        return 'C';
    } else if (score >= 50) {
        return 'D';
    } else {
        return 'F';
    }
}

//พิมพ์หัวข้อ "Grade Report" เฉย ๆ
//ฟังก์ชันนี้ไม่คืนค่า (จึงใช้ void)
void printGradeMessage() {
    printf("--- Grade Report ---\n");
}
int main(){
    printGradeMessage();
    int scores[5] = {85, 92, 58, 77, 61};
    for (int i =0; i <5; i++) {
        int currentScore = scores[i];
        char grade = getGrade(currentScore);
        printf("Score: %d => Grade: %c\n", currentScore, grade);
    }
}