/*
determines whether input is divisible by 9
*/

#include <stdio.h>
int main (void) {
    int num;
    scanf("%d",&num);

    int digitSum=num%10;
    num/=10;
    digitSum+=num%10;
    num/=10;
    digitSum+=num%10;
    num/=10;
    digitSum+=num%10;

    int digitSum2=digitSum%10;
    digitSum/=10;
    digitSum2+=digitSum%10;
    digitSum/=10;
    digitSum2+=digitSum%10;

    int digitSum3=digitSum2%10;
    digitSum2/=10;
    digitSum3+=digitSum2%10;

    int digitSum4=digitSum3%10;

    if (digitSum4%9==0)
        printf("yes\n");
    else
        printf("no\n");

	return 0;
}

