
//Program for regula falsi method for x*x-x-6

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) ((sin(x)*x)+cos(x))
int main(void){
	float x0=0,x1=3,x2=0,y0=0,y1=0,y2=0;int iter =0;
	//printf("The Solution for the Equation using regula falsi method : x*x-x-6=0 \n");
	//do{ 
	//	printf("Enter Range :");
	//	scanf("%f %f",&x0,&x1);
		y0=f(x0),y1=f(x1);
		/*if(y0==0){
			printf("The solution is %f\n",x0);
			exit(0);
		}
		else if(y1==0){
			printf("The solution is %f\n",x1);
			exit(0);
			}
		}while((y0*y1)>0);*/
		//printf("Iteration  \tx0  \t x1  \t Mid  \t   f(x0) \t f(x1) \t  f(Mid)"); 
		
		do{
		x2=(x0*y1-y0*x1)/(y1-y0);
		y2=f(x2);
	//	printf("\n%d\t  %f   %f  %f  %f  %f   %f\n",(++iter),x0,x1,x2,y0,y1,y2); 
		printf("%f %f\n",x0,y0);
		printf("%f %f\n",x1,y1);
		//if(y2>=0.000001||y2<=-0.000001)
		//{
		if(y0*y2>0){
			x0=x2;
			y0=y2;
		}
		else{
			x1=x2;
			y0=y2;
		}
		y0=f(x0),y1=f(x1);
		
		
		}while(y2>=0.000001||y2<=-0.000001);
//		printf("\nThe solution is %f in %f ",x2,f(x2));
		return 0;
}
