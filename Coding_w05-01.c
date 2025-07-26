#include <stdio.h>

int main(){
    char nameintitial = 'S';
    int age = 19 ;
    float weight = 71.6;

    printf ("Student %c is %d years old.\n His weights is %.1f kg.",nameintitial,age,weight);
    return 0 ;
}
//1. #include <stdio.h> เลือกไลบรารีสำหรับการรับ/แสดงผลข้อมูล
//3. int main()  ฟังก์ชันหลักที่โปรแกรมจะเริ่มทำงาน
//4. char nameintitial = 'S';   ประกาศตัวแปรเก็บตัวแรกของชื่อเล่น
//5. int age = 19;  ประกาศตัวแปรจำนวนเต็มเก็บอายุ
//6. float weight = 71.6;  ประกาศตัวแปรทศนิยมเก็บน้ำหนัก
//8. printf()- แสดงผล โดยใช้ %c สำหรับตัวอักษรและ %d สำหรับจำนวนเต็ม \n เพื่อเปลี่ยนบรรทัดและ %.1f สำหรับแสดง นน.ทศนิยม 1 ตำแหน่ง
//9. return 0; - ส่งค่ากลับเพื่อระบุว่าโปรแกรมทำงานสำเร็จ