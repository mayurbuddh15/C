#include <stdio.h>
        int main()
        {
            double *ptr = (double *)100;
            ptr = (char *)ptr + 2;
            printf("%u\n", ptr);
        }
