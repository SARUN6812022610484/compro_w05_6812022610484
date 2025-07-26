#include <stdio.h> 

int main() {
    // ประกาศตัวแปรสำหรับเก็บข้อมูลของแต่ละคน (3 คน)
    //คนที่1
    char name1;
    int age1;
    float height1; 
    float weight1;
    char grade_code1;

    //คนที่2
    char name2;
    int age2;
    float height2;
    float weight2;
    char grade_code2;

    //คนที่3
    char name3;
    int age3;
    float height3;
    float weight3;
    char grade_code3;

   
    printf("Enter data for 3 people (Name-Age-Height-Weight-GradeCode):\n");
    printf("Example: K-13-167.5-56.0-A\n");

    // รับข้อมูลของคนที่ 1
    printf("Person 1: ");
    scanf(" %c-%d-%f-%f-%c", &name1, &age1, &height1, &weight1, &grade_code1); //%cตัวอักษรตัวเดียว,%dจำนวนเต็ม,%fเลขทศนิยม

    // รับข้อมูลของคนที่ 2
    printf("Person 2: ");
    scanf(" %c-%d-%f-%f-%c", &name2, &age2, &height2, &weight2, &grade_code2); //%cตัวอักษรตัวเดียว,%dจำนวนเต็ม,%fเลขทศนิยม

    // รับข้อมูลของคนที่ 3
    printf("Person 3: ");
    scanf(" %c-%d-%f-%f-%c", &name3, &age3, &height3, &weight3, &grade_code3); //%cตัวอักษรตัวเดียว,%dจำนวนเต็ม,%fเลขทศนิยม

   
  
    printf("+-------+-----+------------+------------+------------+\n");
    
    printf("| %-5s | %-3s | %-8s | %-8s | %-10s |\n", "Name", "Age", "Height(cm)", "Weight(kg)", "Grade Code");
   
    printf("+-------+-----+------------+------------+------------+\n");


    // ข้อมูลของคนที่ 1
    printf("| %-5c | %-3d | %10.1f | %10.1f | %10c |\n", name1, age1, height1, weight1, grade_code1);
    // ข้อมูลของคนที่ 2
    printf("| %-5c | %-3d | %10.1f | %10.1f | %10c |\n", name2, age2, height2, weight2, grade_code2);
    // ข้อมูลของคนที่ 3
    printf("| %-5c | %-3d | %10.1f | %10.1f | %10c |\n", name3, age3, height3, weight3, grade_code3);
    //%-5c กว้าง5ช่องชิดซ้าย, %-3d กว้าง3ช่องชิดซ้าย, %10.1f กว้าง10 ช่องทศนิยม1 ตำแหน่งชิดขวา, %10c กว้าง10 ช่องชิดขวา
    
    printf("+-------+-----+------------+------------+------------+\n");

    return 0; 
}