/*
prnts the result of the integer division, rounding away from 0
*/
#include <stdio.h>
int main (void) {
    int num1;
    int num2;
	scanf("%d %d",&num1, &num2);
    if (num1%num2==0) {
        printf("%d\n",num1/num2);
    }
    else {
        if (num1/num2>=0) {
            printf("%d\n", (num1/num2)+1);
        }
        else {
            printf("%d\n", (num1/num2)-1);
        }
    }

	return 0;
}
