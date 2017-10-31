#include <iostream.h>
int minCommonMultiple(int,int);
int maxCommonDivisor(int,int);
void main()
{
	int a,b;
	cout<<"����������������";
	cin>>a>>b;
	cout<<a<<","<<b<<"����С�������ǣ�"<<minCommonMultiple(a,b)<<endl;
	cout<<a<<","<<b<<"�����Լ���ǣ�"<<maxCommonDivisor(a,b)<<endl;

}

/**
  ����������a��b����С��������
  �㷨��
  1.������c��ʾa,b����������
  2.����һ��������k(c<=k<=a*b),���kͬʱ����a��b����k����С������
 */
int minCommonMultiple(int a, int b)
{
	int c=b;
	if(a>b) c=a;
	for(int k=c; k<=a*b; k++)
	{
		if( k%a == 0 && k%b == 0)
		{
			c = k;
			break;
		}
	}
	return c;
}

/**
 ����������a��b�����Լ��
 */
int maxCommonDivisor(int a, int b)
{
	int r,t;
	if( a > b)
	{
		t=a; a=b; b=t;
	}
	do{
		r = a%b;
		a = b;
		b = r;
	}while(r!=0);
	return a;
}