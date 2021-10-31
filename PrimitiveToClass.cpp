#include<iostream>
using namespace std;

//Primitive to Class type conversion can be done throuch constructor.

class complex
{
	private:
		int a,b;
	public:
		void setData(int x,int y)
		{
			a=x;
			b=y;
		}
		void showData()
		{
			cout<<"a="<<a<<" b="<<b;
		}
		complex(int z)
		{
			a=z,b=0;
		}
		complex()
		{
		}
};

main()
{
	int a=4;
	complex c;
	c=a;        //whenever a different object or datatype is assignet to an object,constructor is called
	            //of that Class.---- c.complex(a);[not valid(just for explanation)]. 
	c.showData();
}
