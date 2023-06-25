#include<stdio.h>
void main()
{
    int a, b, c, c1, c2, c3;
    char istriangle;
    do
    {
        printf("\n Enter 3 Integer which are sides of Triangle :\n");
        scanf("%d %d %d", &a,&b,&c);
        printf("a=%d\tb=%d\tc=%d\n",a,b,c);
        c1=a>=1&&a<=10;
        c2=b>=1&&b<=10;
        c3=c>=1&&c<=10;
        if (!c1)
            printf("The value of a=%d is not in range of permitted value\n",a);
        if (!c2)
            printf("The value of b=%d is not in range of permitted value\n",b);
        if (!c3)
            printf("The value of c=%d is not in range of permitted value\n",c);
    } while (!(c1 && c2 && c3));
    if (a<b+c && b<a+c && c<a+b)
    {
        istriangle='Y';
        printf("\n The triangle can be formed ");
    } else 
    {
        istriangle='N';
        printf("\n The triangle cannot be formed");
    }
    if (istriangle=='Y')
    {
       if ((a==b)&&(b==c))
       {
           printf("\n It's an Equilateral Triangle.");
       } 
       else if((a!=b)&&(a!=c)&&(b!=c))
       {
          printf("\nIt's an Scalene Triangle.\n");
       }
       else
       {
         printf("\nIt's an Isosceles Triangle.\n");
       }
    }
    else
    {
      printf("\nNo triangles possible with given values!");  
    } 
}