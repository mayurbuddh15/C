#include<stdio.h>
void main()
 {
              int i = 10;
            void *p = &i;
         //  printf("%d\n", (int *)*p);
          printf("%d\n", *(int*)p);
            return 0;
        }
