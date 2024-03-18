/* WAP a program to print the area of a rectangle by creating a class named 'Area'
having two functions. first function named as 'setDim' takes the length and breadth of the
rectangle.Length and breadth of the rectangle are entered through keyboard*/

#include<iostream>
using namespace std;
class area
{
	private:
		int length,breadth;
	
		public:
			void setDim(int l, int b)
			{
				length = l;
				breadth = b;
				
			}
	int getarea()
		{
			return length * breadth;
		}
		
		
};

main()
{
	int ar;
	area a1;
	a1.setDim(4,6);
	
	ar=a1.getarea();
	cout<<"\n Area of rectangle"<<ar;
	}