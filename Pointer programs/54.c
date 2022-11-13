#include <stdio.h>
        void foo( int[] );
        int main()
        {
            int ary[4] = {1, 2, 3, 4};
            foo(ary);
            printf("%d ", ary[3]);
        }
        void foo(int p[100])
        {
            int i = 20;
            p = &i;
            printf("%d ", p[0]);
        }
