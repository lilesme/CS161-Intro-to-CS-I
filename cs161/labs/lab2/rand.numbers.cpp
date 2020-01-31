#include <iostream>
#include <ctime> /*included to allow time() to be used*/
#include <cstdlib> /*included to allow rand() and srand() to be used*/

using namespace std;

int main() {
	int x; /* variable to hold our random integer*/
srand(time(NULL)); /*seeds random number generator. Do this just once*/

x = rand();
cout << "x = " << x << endl;

x= rand()%6;
cout << "x = " << x << endl;

if (x==0)
	cout<< "bummer, I'm zero" << endl;
if (x==1||x==3||x==5)
	cout<< "I'm an odd number"<< endl;
if (x== 2||x==4)
	cout<<"I'm an even number"<< endl;
}

