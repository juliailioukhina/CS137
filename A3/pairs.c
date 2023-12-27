/*takes a positive integer n and prints the integer where every digit is paired up next to itself. There should not be
a sequence printed of more than two of the same digit in a row. If a digit appears by itself with no
duplicate on either side, duplicate that digit when printing. */
#include <stdio.h>

void numberPairs(int n) {
    if (n<10) {
        printf("%d%d",n,n);
    }
    else {
        numberPairs(n/10);
        if((n/10)%10!=n%10) {
            printf("%d%d",n%10,n%10);
        }
    }
}
