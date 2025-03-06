#include <stdio.h>
int main(){
    int studentid =12345;
    float GPA =3.75;
    char grade='A';
    char Grade='+';
     printf("student ID:%d\n",studentid);
     printf("GPA: %.2f\n", GPA);
     printf("Grade %c\n", grade);
     studentid =54321;
    GPA =3.90;
    grade='A';
    Grade='+';
     printf("student ID:%d\n",studentid);
     printf("GPA: %.2f\n", GPA);
     printf("Grade %c%c\n", grade,Grade);




    return 0;

}
