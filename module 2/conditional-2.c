#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
if(tk >= 100)
{
    printf("burger khabo");
}
else if(tk >50)
{
    printf("fuska khabo");
}
else if(tk >=20)
{
    printf("ice cream khabo");
}
else if(tk >=10)
{
    printf("candy khabo");
}
else
{
    printf("saradin kichu khabo na");
}

    return 0;
}