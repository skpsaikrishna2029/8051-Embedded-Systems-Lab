#include<reg51.h>
void main()
{
	TMOD=0X06;
		TH0=0;
		TR0=1;
		while(1)
		{
			while(TF0==0)
			{
			P2=TL0;
		}
		TF0=0;
	}
}