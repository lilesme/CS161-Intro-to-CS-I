/****************************************
** Program: assignment1.cpp
** Author: Megan Liles
** Date: 1/13/17
** Description: Max/Min values for integers, long, shorts, signed/unsigned
** Input:keyboard,integers
** Output:monitor
*/

#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main() {
	cout<<"INT_MAX macro is " <<INT_MAX<<endl;
	cout<<"INT_MIN macro is " <<INT_MIN<<endl;
	cout<<"UINT_MAX macro is " <<UINT_MAX<<endl;
	cout<<"LONG_MIN macro is " <<LONG_MIN<<endl;
	cout<<"LONG_MAX macro is " <<LONG_MAX<<endl;
	cout<<"ULONG_MIN macro is " <<ULONG_MAX<<endl;
	cout<<"SHRT_MIN macro is " <<SHRT_MIN<<endl;
	cout<<"SHRT_MAX macro is " <<SHRT_MAX<<endl;
	cout<<"USHRT_MAX macro is " <<USHRT_MAX<<endl; 
	
	cout<< "The Max Unsigned value is " << pow(2,8)-1 <<endl;
	cout<<"The Max Signed value is " << pow(2,8-1)-1 <<endl;
	cout<<"The Min Signed value is " << (-1)*pow(2,8-1) <<endl; 
	
	cout<<"Please enter an integer" <<endl;
	int x;
	cin>> x;
	cout<< "The Max Unsigned value is " << pow(2,x)-1 <<endl;
	cout<<"The Max Signed value is " << pow(2,x-1)-1 <<endl;
	cout<<"The Min Signed value is " << (-1)*pow(2,x-1) <<endl; 
	return 0;
}
