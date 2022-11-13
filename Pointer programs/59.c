#include <stdio.h>
        void foo(int *p);
        int main()
        {
            int i = 11;
            int *p = &i;
            foo(&p);
            printf("%d ", *p);
        }
        void foo(int  **p)
        {
            int j = 10;
            *p = &j;
            printf("%d ", **p);
        }
