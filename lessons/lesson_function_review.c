#include <stdio.h>

//--- โรงงานที่ 1 แปลงบาทเป็นดอลลาร์ ---
// "float" คือ ของที่ส่งออก (เงินดอลลาร์ เป็นทศนิยม)
// "int thb" คือ ของที่รับเข้า (เงินบาท เป็นจำนวนเต็ม)
float thbToUsd(int thb) {
    //1. แปรรูป เอาเงินบาท หาร 35
    float usd = thb / 35.0;
    //2. ส่งออก เงินดอลลาร์
    return usd;
}

//--- โรงงานที่ 2 แปลงดอลลาร์เป็นบาท ---
// "int" คือ ของที่ส่งออก (เงินบาท เป็นจำนวนเต็ม)
// "float usd" คือ ของที่รับเข้า (เงินดอลลาร์ เป็นทศนิยม)
int usdTothb(float usd) {
    //1. แปรรูป เอาเงินดอลลาร์ คูณ 35
    int thb = (int)(usd * 35);
    //2. ส่งออก เงินบาท
    return thb;
}

int main(){
    int myMoney;

    //1.รับเงินบาทจากผู้ใช้
    printf("Enter thai baht: ");
    scanf("%d", &myMoney);

    //2.แปลงเงินบาทเป็นดอลลาร์
    //ส่ง "myMoney" เข้าไป... แล้วเอาตัวรับ "myDollar" มารอรับค่าที่ส่งออกมา
    float myDollar = thbToUsd(myMoney);

    printf("You get: %.2f USD\n", myDollar);

    // 3. ลองของ! เรียกใช้โรงงานที่ 2 (แปลงกลับเป็น THB)
    // ส่ง "myDollar" ที่เพิ่งได้มา... เข้าไปแปลงกลับ
    int moneyBack = usdTothb(myDollar);

    printf("Convert back to THB: %d THB\n", moneyBack);

    return 0;
}