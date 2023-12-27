/*
  void square(int w); prints the numbers 1,2,....,w 2 in a square shape (of size wxw) on w
lines of output  
    void spiral(int w); prints the numbers 1,2,....,w 2 in a “spiral” order (compared with
the square shape from part I)
*/

#include "functions.h"
#include <stdio.h>

void square(int w) {
    for (int i=1;i<=w*w;i++) {
        printf("%d ", i);
        if (i%w==0) {
            printf("\n");
        }
    }
}

void spiral(int w) {
    int num=1;
    printf("%d ",num);
    for (int i=0; i<w-1;i++) {
        num++;
        printf("%d ",num);
    }
    for (int i=0; i<w-1;i++) {
        num+=w;
        printf("%d ",num);

    }
    for (int i=0; i<w-1;i++) {
        num--;
        printf("%d ",num);

    }
    int i=w-2;
    while (i>0) {
        for (int t=0;t<i;t++) {
            num-=w;
            printf("%d ",num);
        }
        for (int t=0;t<i;t++) {
            num++;
            printf("%d ",num);
        }
        if (i==1)
            break;
        else
            i--;
        for (int t=0;t<i;t++) {
            num+=w;
            printf("%d ",num);
        }
        for (int t=0;t<i;t++) {
            num--;
            printf("%d ",num);
        }

        i--;
    }
}

void rotation(int w) {
    
  int num=w;

  int first=1;
  int second= num;
  int third=num*num;
  int fourth=(num*num)-(num-1);
  int counter=num-2;
  int finished=0;

  
  printf("%d %d %d %d ", first, second, third, fourth);
  if (num!=2) {
        while (!finished) {
            for (int i=0;i<counter;i++) {
                first++;
                second+=num;
                third--;
                fourth-=num;
                printf("%d %d %d %d ", first, second, third, fourth);
            }
            counter-=2;
            if (counter==-1) {
                finished=1;
                printf("%d ",fourth+1);
                break;
            }
        
            int hold=first;
            int hold2=second;
            int hold3= third;
            first=fourth+1;
            second=hold+num;
            third=hold2-1;
            fourth=hold3-num;
            printf("%d %d %d %d ", first, second, third, fourth);
            
            
            if (counter==0) {
                finished=1;
                break;
            }
        
        
        }
    }
    printf("\n");

}
