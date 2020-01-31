#include<iostream>
#include<string>

using namespace std;

int main(){
	string name;
	bool play_again;
	int x;

	do{
	do{
	cout<<"What would you like to ask about? Hair(1), Gender(2), Glasses(3), Year in school(4)"<<endl;
	cin>>x; 

	if(x==1){
		cout<<"What color hair do I have? 0-Black, 1-Blond, 2-Brown"<<endl;
		cin>>x;
		if(x==0){
			cout<<"That is true!"<<endl;
		}
		else{
			cout<<"That is false!"<<endl;
		}	
	}
	else if(x==2){
		cout<<"Am I a boy or a girl? 0-Boy, 1-Girl"<<endl;
		cin>>x;
		if(x==0){
			cout<<"That is true!"<<endl;
		}
		else{
			cout<<"That is false!"<<endl;
		}
	}
	else if(x==3){
		cout<<"Am I wearing glasses? 0-yes, 1-no"<<endl;
		cin>>x;
		if(x==0){
			cout<<"That is false!"<<endl;
		}
		else{
			cout<<"That is true!"<<endl;
		}
	}
	else if(x==4){
		cout<<"What year am I in school? 1-freshman, 2-sophomore, 3-junior, 4-senior"<<endl;
		cin>>x;
		if(x==4){
			cout<<"That is true!"<<endl;
		}
		else{
			cout<<"That is false!"<<endl;
		}
	}
	cout<<"Who do you think it is?";
	cin>>name;
	if(name=="Jia_Chen"){
		cout<<"You got it!"<<endl;
	}
	else{
		cout<<"Nope, not it!"<<endl;
	}
	
}while(name != "Jia_Chen");
	cout<<"Play again? 1-yes, 0-no" <<endl;
	cin>>play_again;

	}while(play_again==true);
return 0;

}	
	
