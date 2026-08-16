#include<reg51.h>
void main()
{
	TMOD=0X01;
	while(1)
	{
		TH0=0;
		TL0=0;
		TR0=1;
		while(TF0==0);
		TF0=0;
		TR0=0;
		P1=~P1;
	}
}