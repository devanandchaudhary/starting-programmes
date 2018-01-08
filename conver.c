#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,n,ASCII,p;
char f,h;
printf("1.ODD or EVEN\n");
printf("2.positive or negative\n");
printf("3.alphabet or not\n");
printf("4.vowel or not\n");
printf("5 divisible by 5 and 11 or not\n");
printf("enter the choice");
scanf("%d",&n);
switch(n)
{
case 1:printf("enter a no");
scanf("%d",&a);
(a%2==0)?
printf("number is even\n"):
printf("number is odd\n");
break;
case 2:printf("enter a no");
    scanf("%d",&b);
(b>0)?printf("the number is positive"):
printf("the number is negative");
break;
case 3:printf("enter a character\n");
scanf("%c",&f);
ASCII=f;
((ASCII>=65&&ASCII<=90)||(ASCII>=97&&ASCII<=122))?
printf("Alphabet"):printf("not a alphabet");
break;
case 4:printf("enter a character");
scanf("%d",&h);
(h=='a'||h=='e'||h=='i'||h=='o'||h=='u'||h=='A'||h=='I'||h=='O'||h=='E'||h=='U')?printf("vowel"):printf("not vowel");
break;
case 5:printf("enter a number");
scanf("%d",&c);
(c%5==0&&c%11==0)?printf("divisible"):printf("Not a divisible");
break;
default:printf("Invalide choice");
}
getch();
}
