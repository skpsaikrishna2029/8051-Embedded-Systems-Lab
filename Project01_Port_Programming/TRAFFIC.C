#include<reg51.h>
void delay()
{
	unsigned int X;
	for(X=0;X<14;X++)
	{
		TH0=0;
		TL0=0;
		TR0=1;
		while(TF0==0);
		TF0=0;
		TR0=0;
	}
}
void main()
{	TMOD=0X01;
while(1)
{
	P1=0X54;
	P2=0X02;
	delay();
	P1=0XA1;
	P2=0X02;
	delay();
	P1=0X09;
	P2=0X05;
	delay();
	P1=0X4A;
	P2=0X08;
	delay();
}
}