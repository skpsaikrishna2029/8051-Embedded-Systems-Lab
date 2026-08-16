#include<reg51.h>
void delay()
{
unsigned int X;
for(X=0;X<65000;X++);
}
void main()
{
while(1)
{
delay();
P0=~P0;
P1=~P1;
P2=~P2;
P3=~P3;
}
}