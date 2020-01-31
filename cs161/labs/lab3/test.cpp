/**********************
 **Program: Test Lab3
 **Author: Megan Liles
 **Date: 1/24/17
 **Description:
 **Input:
 **Output:
 **********************/

#include<iostream>

using namespace std;

int main(){
	int x=0;

	cout<<"Do you like vi as an editor? Enter 0 for yes, 1 for no"<<endl;
	cin>>x;

	if(x==1){
		cout<<"You hate vi!"<<endl;
	}
	else if(x==0){
		cout<<"You love vi!"<<endl;
	}
	return 0; }

