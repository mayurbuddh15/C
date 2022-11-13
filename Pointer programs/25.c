#include <stdio.h>
        int main()
        {
            int i = 10000000, *p = &i;
            foo(&i);
            printf("%d ", *p);
        }
        void foo(int *p)
        {
            int j = 2048;
            p = &j;
            printf("%d ", *p);
        }
