#include <stdio.h>

int main(){
    int numbers[5];
    int positiveCount = 0;
    int positiveSum = 0;

    for(int i = 0; i < 5; i++){     
        printf("Enter number %d: ", i + 1); 
        scanf("%d", &numbers[i]);

        if(numbers[i] > 0){ // เช็กถ้าตัวเลขเป็นบวก
            positiveSum = positiveSum + numbers[i]; // บวกตัวเลขบวกเข้ากับผลรวม
            positiveCount = positiveCount + 1; // นับจำนวนตัวเลขบวก
        }
    }

    if(positiveCount == 0){
        printf("No positive numbers found.\n");
    } else {
        float positiveAvg = (float)positiveSum / positiveCount; // คำนวณค่าเฉลี่ย
        printf("Average of positive numbers: %.2f\n", positiveAvg); // แสดงผลค่าเฉลี่ย
    }
    
    return 0;
}