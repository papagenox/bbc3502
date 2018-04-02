#include<stdio.h>

//int x=500;
//void f();
//void ff();
//int main( )
//{
//	int x=300;   
//	f(); 
//	ff( ); 
//	printf("x=%d\n",x);
//	
//	return 0;
//}
//
//void f( )
//{	
//	x+=100; 
//	printf("x=%d\n",x);   
//}
//
//void ff( )
//{
//	int x=10; 
//	printf("x=%d\n",x);   
//}
//======================
//int k=1;
//void fun(int);
//main( )
//{
//	int i=4;
//	fun(i);
//	printf("%d, %d",i,k);   
//}
//   
//void fun(int m)
//{
//	m += k;  
//	k += m;
//	{
//		char k = 'B';
//		printf("%d",k-'A');
//	}
//	printf("%d, %d", m,k);
//}
//

//=========================
#include<stdio.h>
void gx(),gy();
int main()
{

	extern int x,y;
	//x = 1;
	//y = 2;
	printf("1: x=%d\t\ty=%d\n",x,y);
	//y=246;
	gx();
	gy(); 
}

void gx()
{	
	extern int x,y;
	x=135;
	printf("2: x=%d\ty=%d\n",x,y);
}

int x,y;
void gy()
{
	printf("3: x=%d\ty=%d\n",x,y);
}