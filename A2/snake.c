#include <stdio.h>
int main (void) {
    int n;
    int head=3;
    int b_len=2;
    int end=1;

    scanf("%d", &n);

    for (int i=0; i<n-3; i++) {
        for (int t=0; t<end;t++) {
            printf("_");
        }
        end++;
        for (int t=0;t<b_len;t++) {
            printf("X");
        }
        printf("H");

        for (int v=head+1;v<n;v++) {
            if (v%2==0) {
                printf("_");
            }
            else {
                printf(".");
            }
        }
        head++;
        if (head%2!=0) {
            b_len++;
            end--;
        }
        
        printf("\n");

    }

	return 0;
}
