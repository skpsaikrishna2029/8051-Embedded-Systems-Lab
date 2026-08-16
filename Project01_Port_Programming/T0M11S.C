}#include<reg51.h>
void main()
{
	unsigned int X;
	while(1)
	{
		for(X=0;X<14;X++)
		{
		TMOD=0X01;	
		TH0=0;
		TL0=0;
		TR0=1;
		while(TF0==0);
		TF0=0;
		TR0=0;
		}
		P1=~P1;
	}
}