#include<stdio.h>

int main(){

    int x=10, y=4;
    int isGreaterThan = (x>y);
    int isEqual = (x==y);
    int isNotEqual = (x!=y);

    printf("Is x greater than y? %s\n", isGreaterThan ? "YES" :"NO");
    printf("Is x equal to y? %s\n", isEqual? "YES" :"NO");
    printf("Is x not equal to y? %s\n",isNotEqual? "YES" :"NO");

    return 0;
}
