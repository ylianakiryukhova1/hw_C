#include <stdio.h>
#include <stdlib.h>

int f1()
{
    int a,b,c,d,e;
    double sum;
    printf("\n Enter a,b,c,d,e \n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    sum=(a+b+c+d+e)/5.;
    printf("%f",sum);
    return 0;
}


int f2()
{
    int a,b;
    printf("\n Enter a \n");
    scanf("%d",&a);
    b = a%2;
    if (b==0)
    {
        printf("even number");
    }
    else
    {
      printf("odd number");
    }
    return 0;
}


int f3()
{
    int a,b;
    printf("\n What's your age? \n");
    scanf("%d",&a);
    b = a*365;

    printf("Your age in years is %d\nYour age in days is %d",a,b);

    return 0;
}


int f4()
{
    int toes=10, dtoes, stoes;
    dtoes=toes*2;
    stoes=toes*toes;

    printf("toes is %d\ndouble toes is %d\nsquare of toes is %d",toes, dtoes, stoes);

    return 0;
}


int f5()
{
    float a,b;

    printf("\n What's your height (in cm)? \n");
    scanf("%f",&a);
    b = a/2.54;

    printf("Your height in cm is %f\nYour height in inches is %f",a,b);

    return 0;
}

int main()
{
    f1();
    f2();
    f3();
    f4();
    f5();
    return 0;
}
