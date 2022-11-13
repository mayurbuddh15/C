    #include<stdio.h>
    #define abc(int a) int i,j,m,n;\
    for(i=0;j=15;i<16;i++)\
    {\
    m=num>>i&1;\
    n=num>>j&1;\
    if(m!=n)\
    a=a<<1&i;\
    a=a<<1&j;\
    }
    void main(){
    int a=15,i;
    abc(a);
    for(i=16;i>=0;i--)
    {
    printf("%d",a>>i&1);
    }
    }
