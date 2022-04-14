#include<stdio.h>
int main(){
    int marks;
    marks = 80;
    printf("%d\n",marks);
    marks+= 10; //marks = marks + 10
    printf("updated marks = %d\n",marks);
    marks-=10; //marks = marks-10
    printf("updated marks = %d\n",marks);
    marks *=10; //marks = marks*10
    printf("updated marks = %d\n",marks);
}