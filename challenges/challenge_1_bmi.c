#include <stdio.h>

int main(){
    float weight, height, bmi; //ประกาศตัวแปรน้ำหนัก ความสูง และค่า BMI

    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);
    printf("Enter height in meters: ");
    scanf("%f", &height);

    bmi = weight / (height * height); //คำนวณค่า BMI

    printf("Your BMI is: %.2f\n", bmi); //แสดงผลค่า BMI

    if(bmi < 18.5){
        printf("Category: Underweight\n"); //คุณผอมไป
    } else if(bmi >= 18.5 && bmi < 24.9){
        printf("Category: Normal weight\n"); //คุณน้ำหนักปกติ
    } else if(bmi >= 24.9 && bmi < 29.9){
        printf("Category: Overweight\n"); //คุณน้ำหนักเกิน
    } else {
        printf("Category: Obesity\n");  //คุณอ้วนมาก
    }
    return 0;   //จบโปรแกรม
}