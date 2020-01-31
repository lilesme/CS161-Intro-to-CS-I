#include <iostream>
#include <cmath>
using namespace std;


//Name: f
//Description:
//Pre Conditions:
//Post Conditions: none
//Return:

double f(double x){
	return 2*x;
}

//Name:area
//Description:
//Pre Conditions:
//Post Condtions: none
//Return:

double area(double a, double b, int n) {
	double total;
	double w=((b-a)/n);
	for(int x=a; x<=b; x+=w){
		total+= f(x);
	}
	double y=  w*total;
	return y;


}

void quadratic_equation(int a, int b, int c){
	double x1,x2;
	x1=((-b + sqrt(b^2-(4*a*c))))/(2*a);
	x2=((-b + sqrt(b^2-(4*a*c))))/(2*a);
	cout<<x1<<endl;
	cout<<x2<<endl;
	return;

}


int main() {
	int a;
	int b;
	int c;
	int n;
	
   	//calculate and return the area under the function, f(x)
	cout<<"Enter a value for the lower bound"<<endl;
	cin>>a;
	cout<<"Enter a value for the upper bound"<<endl;
	cin>>b;
	cout<<"Enter a value for n, the number of rectangles you would like"<<endl;
	cin>>n;
	int ans=area(a,b,n);
	cout<<ans<<endl;



		cout<<"Please enter a value for a: "<<endl;
		cin>>a;
		cout<<"Please enter a value for b: "<<endl;
		cin>>b;
		cout<<"Please enter a value for c: "<<endl;
		cin>>c;
	quadratic_equation(a,b,c);

	}


