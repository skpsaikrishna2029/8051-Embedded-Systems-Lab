#include<reg51.h>
signed char values[]={-4,-3,-2,-1,0,1,2,3,4};
void delay()
{
	unsigned int X;
	for(X=0;X<65000;X++);
}
void main()
{
	while(1)
	{
		int y;
		for(y=0;y<9;y++)
		{
			P3=values[y];
			delay();
		}
	}}