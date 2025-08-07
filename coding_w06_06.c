#include <stdio.h>
 
int main(){ 
    int a=5,b=2;                     // เก็บค่าตัวแปร
    float x=3.0,y=4.5;               // เก็บค่าตัวแปร

    int r1=a++*b+(int)y%3;           // คำนวณ a * b + y % 3 = 11
    int r2=(a>b)&&((int)x/b<2);      // คำนวณ a > b และ x / b < 2 true&&true = 1
    float r3=++x*y-a/2;              // คำนวณ x * y - a / 2 = 15.0
    float r4=((x+=1.5)>y)||(b-->0);  // คำนวณ x + 1.5 > y หรือ b-- > 0 true||true = 1

    printf ("int r1 = %d\n",r1);     // แสดงผลลัพธ์
    printf ("int r2 = %d\n",r2);     // แสดงผลลัพธ์
    printf ("float r3 = %.1f\n",r3); // แสดงผลลัพธ์
    printf ("float r4 = %.1f\n",r4); // แสดงผลลัพธ์
   
    return 0;                        // คืนค่า 0 โปรแกรมทำงานเสร็จสิ้น
}
