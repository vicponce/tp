#include<stdio.h>

int main()
{
    int num;
    for(num=1 ; num<=100; num++)
    {
        if(num%2==0 && num%3==0)
        {
           printf("%d Es multiplo de 2 y 3\n",num);
        }
        else
        {
            if(num%2==0)
            {
               printf("%d Es un multiplo de 2\n",num);
            }
            if(num%3==0)
            {
               printf("%d Es multiplo de 3\n",num);
            }
        }

    }
    system("PAUSE");
    return 0;
}
