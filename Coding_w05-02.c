#include <stdio.h>

int main(){
    char name[30];
    int age;
    float height;
    char subject;
    float grade ;
    char symbol; 
  
    printf("Enter your name, age, and height: ");
    scanf("%s %d %f", name, &age, &height);
    
    printf("Enter first subject name, grade, and grade symbol: ");
    scanf("%s %f %c", subject, &grade, &symbol);

    printf("%c is %d years old and %.1f centimeters tall.\n", name[0], age, height);
    printf("In subject %c, %c got %.2f which is symbolized as \'%c\'.\n", subject, name[0], grade, symbol);
    
    return 0 ;
}
//char name[30] - ประกาศขอบเขตของตัวอักษรสำหรับเก็บชื่อ (ขนาด 30 ตัวอักษร)
//int age - ประกาศตัวแปรจำนวนเต็มสำหรับเก็บอายุ
//float height - ประกาศตัวแปรทศนิยมสำหรับเก็บส่วนสูง
//char subject - ประกาศขอบเขตของตัวอักษรสำหรับเก็บชื่อวิชา
//float grade - ประกาศตัวแปรทศนิยมสำหรับเก็บเกรด
//char symbol - ประกาศตัวแปรอักษรสำหรับเก็บอักษรเกรด
//11 แสดงผลให้กรอกชื่อ,อายุ,ส่วนสูง
//12 scanf("%s %d %f") เพื่อรับชื่อ (สตริง), อายุ (จำนวนเต็ม), และส่วนสูง (ทศนิยม)
//14 แสดงผลกรอกชื่อวิชา,เกรด,สัญลักษณ์เกรด
//15 scanf("%s %f %c")เพื่อรับชื่อวิชา (สตริง), เกรด (ทศนิยม), และสัญลักษณ์เกรด(ตัวอักษรเดียว)
//17 printf แสดงตัวอักษรแรกของชื่อ (name[0]), อายุ (age), และส่วนสูง (height) ที่แสดงทศนิยม 1 ตำแหน่ง (%.1f)
//18 printf แสดงตัวอักษรแรกของวิชา (subject), ตัวอักษรแรกของชื่อ (name[0]), เกรด (grade) ที่แสดงทศนิยม 2 ตำแหน่ง (%.2f), และสัญลักษณ์เกรด (symbol)
//20 จบการทำงาน