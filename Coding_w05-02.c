#include <stdio.h>

int main(){
    char name[30];
    int age;
    float height;
    char subject;
    float grade ;

    printf("Enter youy name age height : ");
    scanf(" %s %d %1.f ", name , &age , &height);
    printf("subjectintitial, grade : ");
    scanf(" %c %2.f", &subject, &grade);

    printf(" %s is %d years old and %1.f centimeters tall.\n In subject %c, %s got 2.f  ", name ,age ,height,subject,grade);
    return 0 ;

}