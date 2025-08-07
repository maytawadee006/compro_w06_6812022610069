#include <stdio.h> // สำหรับฟังก์ชัน printf

int main() { 

    double x = 50.0,total = 200.0,price = 300.0,discount = 10.0,rate = 10.0,score = 90.0,penalty = 8.0; // กำหนดค่าเริ่มต้นสำหรับตัวแปรต่างๆ 
    int y = 10,z = 5,a = 6,quantity = 7,mistake = 2;                                                     // กำหนดค่าเริ่มต้นสำหรับตัวแปรต่างๆ 
 
    //ข้อ 1.
    printf(" 1. x = x - 4.0;\n"); 
    double full1 = x; // สร้างตัวแแปรสำเนาสำหรับแบบเต็ม
    double short1 = x; // สร้างตัวแแปรสำเนาสำหรับแบบย่อ
    full1 = full1 - 4.0;
    printf("   แบบเต็ม x = x - 4.0; x = %.2f\n", full1); // แบบเต็ม
    short1 -= 4.0;
    printf("   แบบย่อ  x -= 4.0;    x = %.2f\n", short1); // แบบย่อ

    if (full1 == short1) {
        printf("   ผลลัพธ์: True\n"); //ค่าเป็นจริง
    } else {
        printf("   ผลลัพธ์: False\n");//ถ้าค่าไม่เป็นจริง
    }

    //ข้อ 2.
    printf("2. x = 6.5 * x;\n"); 
    double full2 = x; // ค่า x มาจากข้อ 1. 
    double short2 = x;
    full2 = 6.5 * full2;
    printf("   แบบเต็ม x = 6.5 * x;  x = %.2f\n", full2);// แบบเต็ม
    short2 *= 6.5; // หรือ x *= 6.5;
    printf("   แบบย่อ  x *= 6.5;     x = %.2f\n", short2);// แบบย่อ

    if (full2 == short2) {
        printf("   ผลลัพธ์: True\n");//ค่าเป็นจริง
    } else {
        printf("   ผลลัพธ์: False\n");//ถ้าค่าไม่เป็นจริง
    }

    //ข้อ 3.
    printf("3. x = x %% (y + z * a);\n");
    int int_full3 = (int)x; // แปลง x ให้เป็น int เพื่อนำไปใช้กับ % นำ x มาจากข้อที่ 2
    int int_short3 = (int)x; // แปลง x ให้เป็น int เพื่อนำไปใช้กับ %
    int divisor3 = y + z * a; 
    int_full3 = int_full3 % divisor3;
    printf("   แบบเต็ม x = x %% (y + z * a); x = %d (เมื่อ x เริ่มต้นเป็น %d)\n", int_full3, (int)x);// แบบเต็ม
    int_short3 %= divisor3;
    printf("   แบบย่อ  x %%= (y + z * a);    x = %d\n", int_short3);// แบบย่อ

    if (int_full3 == int_short3) {
        printf("   ผลลัพธ์: True\n");//ค่าเป็นจริง
    } else {
        printf("   ผลลัพธ์: False\n");//ถ้าค่าไม่เป็นจริง
    }

    // ข้อ 4.
    printf("4. x = x / (2.0 * x); \n");
    double full4 = x; // นำ x จากข้อที่ 3
    double short4 = x;
    double divisor4 = 2.0 * x; // คำนวณตัวหาร: 2.0 * (ค่า x ล่าสุด)
    if (divisor4 == 0) {
        printf("ไม่สามารถหารด้วยศูนย์ได้\n");//เพื่อป้องกันการหารด้วยศูนย์
    } else {
        full4 = full4 / divisor4;
        printf("   แบบเต็ม x = x / (2.0 * x);  x = %.4f\n", full4);// แบบเต็ม
        short4 /= divisor4; // หรือ x /= (2.0 * x);
        printf("   แบบย่อ  x /= (2.0 * x);     x = %.4f\n", short4);// แบบย่อ
        if (full4 == short4) {
            printf("   ผลลัพธ์: True\n");//ค่าเป็นจริง
        } else {
            printf("   ผลลัพธ์: False\n");//ถ้าค่าไม่เป็นจริง
        }
    }

    //ข้อ 5.
    printf("5. total = total + (price * quantity - discount); \n");
    double totalfull5 = total;
    double totalshort5 = total;
    double valuetoadd5 = (price * quantity - discount); 
    totalfull5 = totalfull5 + valuetoadd5;
    printf("   แบบเต็ม total = total + (price * quantity - discount); total = %.2f\n", totalfull5);// แบบเต็ม
    totalshort5 += valuetoadd5;
    printf("   แบบย่อ  total += (price * quantity - discount);        total = %.2f\n", totalshort5);// แบบย่อ
    if (totalfull5 == totalshort5) {
        printf("   ผลลัพธ์: True\n");//ค่าเป็นจริง
    } else {
        printf("   ผลลัพธ์: False\n");//ถ้าค่าไม่เป็นจริง
    }

    //ข้อ 6.
    printf("6. x = x * (1 + rate / 100); \n");
    double full6 = x;
    double short6 = x;
    double factor6 = (1 + rate / 100.0); 
    full6 = full6 * factor6;
    printf("   แบบเต็ม x = x *(1 + rate / 100);  x = %.2f\n", full6);// แบบเต็ม
    short6 *= factor6;
    printf("   แบบย่อ  x *= (1 + rate / 100);    x = %.2f\n", short6);// แบบย่อ
    if (full6 == short6) {
        printf("   ผลลัพธ์: True\n");//ค่าเป็นจริง
    } else {
        printf("   ผลลัพธ์: False\n");//ถ้าค่าไม่เป็นจริง
    }

    //ข้อ 7.
    printf(" 7. score = score - (penalty * (mistake + 1)); \n");
    double scorefull7 = score;
    double scoreshort7 = score;
    double deduction7 = (penalty * (mistake + 1)); 
    scorefull7 = scorefull7 - deduction7;
    printf("   แบบเต็ม score = score - (penalty * (mistake + 1));   score = %.2f\n", scorefull7);// แบบเต็ม
    scoreshort7 -= deduction7;
    printf("   แบบย่อ  score -= (penalty * (mistake + 1));          score = %.2f\n", scoreshort7);// แบบย่อ
    if (scorefull7 == scoreshort7) {
        printf("   ผลลัพธ์: True\n");//ค่าเป็นจริง
    } else {
        printf("   ผลลัพธ์: False\n");//ถ้าค่าไม่เป็นจริง
    }

    return 0; // คืนค่า 0 โปรแกรมทำงานเสร็จสิ้น
}