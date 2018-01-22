//Muhammad Syafiq Bin Mohd Saudi A17DW2394
//its just an array example
//find the sum of all the value inside the array
#include <iostream>
using namespace std;


int ary[10]={1,2,3,4,5,6,7,8,9,10};

int n, result=0;

int main()
{

	for(n=0;n<10;n++)
	{
		result += ary[n];
	}
	cout<<result;
	

}
