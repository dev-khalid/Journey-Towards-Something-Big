#include<stdio.h>
int main() {
    int mark[300];
    printf("10 jon student er number input den : ");
    for(int i = 0; i < 3; i++) {
        scanf("%d",&mark[i]);
    }

    printf("Numbers of students: \n");
    double sum = 0;

    for(int i = 0; i < 3; i++) {
        sum = sum + mark[i];
    }
    double avg = sum/3;
    printf("Average of 3 students mark is : %.2lf",avg);
}


//teaching diya .
