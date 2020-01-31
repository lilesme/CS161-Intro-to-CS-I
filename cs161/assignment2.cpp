/***************************************
**Program: assignment2.cpp
**Author: Megan Liles
**Date: 1/20/2017
**Description: Adventure game
**Input: Integer
**Output: Scenarios in the game
***************************************/
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main () {
	int x;
	x=1;
	while(x==1){
	

	int a;
	cout<<"Welcome, you have entered the corn maze! To go right enter 1, to go left enter 2: "<<endl;
	cin>>a;
	if(a==1) {
		cout<<"You have reached a dead end, to climb through the corn enter 1, to turn around enter 2: "<<endl;
		int b;
		cin>>b;
		if(b==1) {
			cout<<"You have left the corn maze, you lose!"<<endl;

		}   
		else if(b==2) {
			cout<<"You found a compass. To go north enter 1, to go south enter 2: "<<endl;
			int c;
			cin>>c;
			if(c==1) {
				cout<<"You went the wrong way. You lose!"<<endl;
			} 
			else if(c==2) {
				cout<<"Great choice! To go east enter 1, to go west enter 2: "<<endl;
				int d;
				cin>>d;
				if(d==1){
					cout<<"Dead end! You lose!"<<endl;
				}
				else if(d==2){
					cout<<"You found a secret tunnel. Enter 1 to go around it, enter 2 to go in it: "<<endl;
					int e;
					cin>>e;
					if(e==1){
						cout<<"You got lost! You lose!"<<endl;
					}
					else if(e==2){ 
						cout<<"You have reached the end! You win!"<<endl;
					}
				}

			}
			else if(b !=1 && b !=2) {
				cout<<"Bad input! You lose!" <<endl;
			}

		}
	}
	if(a==2){
		cout<<"You are with a group of friends. Enter 1 to stay with them, enter 2 to go alone: "<<endl;
		int f;
		cin>>f;
		if(f==1){
			cout<<"You chose to stay with your friends. You keep passing the same spot. Enter 1 to ditch your friends, enter 2 to stay with them: "<<endl;
			int g;
			cin>>g;
			if(g==1){
				cout<<"You got lost! Enter 1 to give up, enter 2 to keep going: "<<endl;
				int h;
				cin>>h;
				if(h==1){
					cout<<"You gave up! You lose!"<<endl;
				}
				else if(h==2){
					cout<<"You hear your friends! Enter 1 to go back to your friends, enter 2 to go on without them: "<<endl;
					int i;
					cin>>i;
					if(i==1){
						cout<<"Your friends found the exit! You win!"<<endl;
					}
					else if(i==2){
						cout<<"You got lost again! You'll never get out! You lose!"<<endl;
					}
				}
			}


			else if(g==2){
				cout<<"You chose to stay with your friends! You come across an emergency exit. Enter 1 to escape, enter 2 to remember that exit for later: "<<endl;
				int j;
				cin>>j;
				if(j==1){
					cout<<"You chose to escape! Better luck next time!"<<endl;
				}
				else if(j==2){
					cout<<"You found a trail of footprints! Enter 1 to follow the trail, enter 2 to avoid the trail: "<<endl;
					int k;
					cin>>k;
					if(k==1){
						cout<<"You chose to follow the trail. You are led to the exit and you win!"<<endl;
					}
					else if(k==2){
						cout<<"You avoided the trail to the exit! You lose!"<<endl;
					}
				}

			}
		}
		else if(f==2){
			cout<<"You chose to go alone! You see someone who works here. Enter 1 to keep going, enter 2 to ask for help: "<<endl;
			int l;
			cin>>l;
			if(l==1){
				cout<<"You chose to keep walking! You find a map, enter 1 to use it, enter 2 to save it for later: "<<endl;
				int m;
				cin>>m;
				if(m==1){
					cout<<"The map you used was wrong! You lose!"<<endl;
				}

				else if(m==2){
					cout<<"You saved the map and have come to a cross road. Enter 1 to go left, enter 2 to go right:"<<endl;
					int n;
					cin>>n;
					if(n==1){
						cout<<"You have come to a dead end again! You lose!"<<endl;
					}
					else if(n==2){
						cout<<"You chose the right way! You win!"<<endl;
					}
				}
			}
			else if(l==2){
				cout<<"You asked for help. The worker gives you directions. Let's see if they work!: "<<endl;
				int o;
				srand(time(NULL));


				o=rand()%2+1;
				if(o==1){
					cout<<"Fate decided and an exit appears. Enter 2 to take the exit, enter 1 to turn around: "<<endl;
					int p;
					cin>>p;
					if(p==1){
						cout<<"You get stuck in the maze. You lose!"<<endl;
					}
					else if(p==2){
						cout<<"You took the exit and you win!"<<endl;
					}
				}
				else if(o==2){
						cout<<"Fate decided and the directions dont work. You're lost and you lose!"<<endl;
					
				}
			}
		}
	}

	cout<<"Do you want to play again? Enter 1 for yes, enter 2 for no: "<<endl;
	cin>>x;
}
	return 0;

}











