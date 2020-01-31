/******************************************************
 **Program Filename: assignment5.cpp
 **Author:Megan Liles
 **Date:2/27/17
 **Description:Keeps scores Bowling Game
 **Input:characters for names, and enter to bowl
 **Output:scores from pins the user bowled
 ******************************************************/

#include <iostream>
#include <string.h>
#include <cstdlib> /*included to allow rand() and srand() to be used*/
#include <ctime>

using namespace std;


/*******************************************************
 **Function:num_of_players
 **Description: Gets number of players playing
 **Parameters:none
 **Pre-Condiitons:none
 **Post-Conditions:players stored in integer players
 **Return: players
 *******************************************************/
int num_of_players(){
   int players;
   cout<<"How many players are there?"<<endl;
   cin>>players;
   cin.ignore();

   return players;
}

/*******************************************************
 **Function:frame_total
 **Description: creates a 2D array for the frame totals
 **Parameters:int players
 **Pre-Condiitons:none
 **Post-Conditions:array is created
 **Return: total_frame
 *******************************************************/
int** frame_total(int players){
   int** total_frame = new int* [players];
   for(int x=0; x<players; x++){
      total_frame[x]= new int[10];
      for(int i=0; i<10; i++){
	 total_frame[x][i]=0;
      }
   }
   return total_frame;
}
/*******************************************************
 **Function:get_names
 **Description:get the names of the players
 **Parameters:int players
 **Pre-Condiitons:none
 **Post-Conditions:array names has the names of the players
 **Return:array names
 *******************************************************/
char** get_names(int players){
   char** names = new char* [players];
   for(int x=0; x<players; x++){
      names[x]= new char [256];
      cout<<"Please enter player "<<x+1<<"'s name: "<<endl;
      cin.getline(names[x], 256);
   }
   return names; 
}

/*******************************************************
 **Function:get_scores
 **Description:makes a array of scores for each player
 **Parameters:int players
 **Pre-Condiitons:1d array
 **Post-Conditions:2d array
 **Return:array scores
 *******************************************************/
int** get_scores(int players){
   int** scores = new int* [players];
   for(int x=0; x<players; x++){
      scores[x]= new int[21];
      for(int i=0; i<21; i++){
	 scores[x][i]=-1;
      }
   }
   return scores;
}
/*******************************************************
 **Function:delete_array
 **Description:deletes the array's created
 **Parameters:int players, char** names, int** scores
 **Pre-Condiitons:arrays names and scores exist
 **Post-Conditions:arrays names and scores are deleted
 **Return:none
 *******************************************************/
void delete_array(int players, char** names, int** scores){
   for(int i=0; i<players; i++){
      delete[]names[i];
   }
   delete[]names;
   for(int j=0; j<players; j++){
      delete[]scores[j];
   
   }
   delete []scores;
}

/*******************************************************
 **Function:enter_to_bowl
 **Description:allows the user to press enter to bowl
 **Parameters:none
 **Pre-Condiitons:none
 **Post-Conditions:none
 **Return:none
 *******************************************************/
void enter_to_bowl(){
   cout<<"Press enter to bowl."<<endl;
   cin.get();

}
/*******************************************************
 **Function:bowl1
 **Description:gets a random num from 0-10 for the first bowl
 **Parameters:none
 **Pre-Condiitons:none
 **Post-Conditions:x is an integer from rand num generator
 **Return:x
 *******************************************************/
int bowl1(){
   int x;
   enter_to_bowl();
   x=rand() % 11 + 0; /*Random number in the range of 0-10*/
   if(x==0){
      cout<<"Gutter Ball! You got 0 pins"<<endl;
      
   }
   else if(x==10){
      cout<<"You bowled a strike!"<<endl;
     
   }
   else{
      cout<<"You knocked down "<<x<<" pins!"<<endl;
   }
   return x;
}
/*******************************************************
 **Function: bowl2
 **Description: gets a random num from 0-pins left for second bowl
 **Parameters:int x
 **Pre-Condiitons:none
 **Post-Conditions:y is an integer from ran num generator
 **Return:y
 *******************************************************/

int bowl2(int x){
   enter_to_bowl();
   int y=rand() % (11-x) + 0;
   if(y==0){
      cout<<"Gutter Ball! You got 0 pins"<<endl;
   }
   else if(y==10){
      cout<<"You knocked down 10 pins and got a spare! "<<endl;
     
   }
   else if(y==10-x){
      cout<<"You knocked down "<<y<<" pins and got a spare!"<<endl;
      

   }
   else{
      cout<<"You knocked down "<<y<<" pins!"<<endl;
   }
   return y;
}
/*******************************************************
 **Function:change_bowl1_to_character
 **Description:prints 'X', or '/' or '-' for strikes, spares and gutter balls
 **Parameters:int** scores
 **Pre-Condiitons:score is integer
 **Post-Conditions:score is character
 **Return:character '-', '/', 'X' 
 *******************************************************/
void change_bowl1_to_character(int scores){
        if(scores==0){
           cout<<"-";
        }
	else if(scores==-1){
           cout<<" ";
        }
        else if(scores==10){
           cout<<"X";
        }
	else{
	   cout<<scores; //+ 48;//fix this print normal score
      }
   }


/*******************************************************
 **Function:change_bowl2_to_character
 **Description:prints 'X', or '/' or '-' for strikes, spares and gutter balls
 **Parameters:int** scores
 **Pre-Condiitons:score is integer
 **Post-Conditions:score is character
 **Return:character '-', '/', 'X' 
 *******************************************************/
void change_bowl2_to_character(int scores, int scores2){
         if(scores2==0){
            cout<<"-";
         }
	 else if(scores2==-1){
           cout<<" ";
        }
         else if(scores + scores2==10){
            cout<<"/";
         }
	 else{
	    cout<<scores2; // + 48;//fix this print normal score
	 }
      }
   
/*******************************************************
 **Function:change
 **Description:checks if frame is -2 to replace it
 **Parameters:int* total frame
 **Pre-Condiitons:none
 **Post-Conditions:none
 **Return:none
 *******************************************************/
void change(int total_frame){
    if(total_frame<0){
       cout<<" ";
    }
    else{
       cout<<total_frame;  //+ 48;
    }
}

/*******************************************************
 **Function:total_frame_math
 **Description:does the math for the frames
 **Parameters:int players,  int** scores, int** total_frame
 **Pre-Condiitons:none
 **Post-Conditions:none
 **Return:none
 *******************************************************/
void total_frame_math(int players,  int** scores, int** total_frame, int i, int j){	
   //math to add frame total
//	cout<<"250"<<endl;
   	if(scores[i][j+1]==-1){//if second throw dne
//	   cout<<"252"<<endl;
	   total_frame[i][j/2]= scores[i][j];//frame total is first throw
	}
	else{// other
//	   cout<<"256"<<endl;
//	   cout<<scores[i][j]<<scores[i][j+1]<<endl;
	    total_frame[i][j/2]= scores[i][j]+ scores[i][j+1];
	}
      }
/*******************************************************
 **Function:tenth_frame 
 **Description:
 **Parameters:int players, int** scores
 **Pre-Condiitons:none
 **Post-Conditions:none
 **Return:none
 *******************************************************/
void tenth_frame(int players, int **scores, int** total_frame, int i){
      cout<<" ";
      change_bowl1_to_character(scores[i][20]);//print 10th frame throw 3
      //total_frame[i][9] += scores[i][20];//add third throw to total
//      change(total_frame[i][9]);//print frame total
      cout<<endl;
      cout<<"     ";
   }

/*******************************************************
 **Function:
 **Description:
 **Parameters:
 **Pre-Condiitons:none
 **Post-Conditions:none
 **Return:none
 *******************************************************/
void math(int players, int** scores, int** total_frame, int i, int j){

      //start printing frame totals
      for(int k=0; k<9; k++){
         //if total of frame adds to 10
	 if(total_frame[i][k]==10){
            j=2*k;
	       //if future frames Exist:
               if( (scores[i][j+2]!=-1) && (scores[i][j+3]!=-1) && (scores[i][j+4]!=-1) ){
	       //do math
		  //if 10 is a strike
		  if(scores[i][j]==10){
		    total_frame[i][k]+=scores[i][j+2];
//		    cout<<"|";
//	            change(total_frame[i][k]);
//	            cout<<"  ";
		      //if strike again, add the next bowl
		      if(scores[i][j+2]==10){
			 total_frame[i][k]+=scores[i][j+4];
		         cout<<"|";
	                 change(total_frame[i][k]);
	                 cout<<"  ";
		      }
		      //else not a strike again, add next bowl
		      else{
			 total_frame[i][k]+= scores[i][j+3];
		         cout<<"|";
	                 change(total_frame[i][k]);
	                 cout<<"  ";
		      }
		  }
		  //else 10 is a spare
		  else{
		     total_frame[i][k]+=scores[i][j+2];
		     cout<<"|";
	             change(total_frame[i][k]);
	             cout<<"  ";
	          }
	       }
	       //if future frames DNE
	       else{
		 // cout<<327<<endl;
	          //do nothing and keep bowling)
//		  total_frame[i][k]==100;
		  cout<<"|";
//	          change(total_frame[i][k]);
	          cout<<"  ";
	       } 
	 }
	   //if total of frame DOESNT add to 10
	   else{
//	      cout<<"323"<<endl;
	      cout<<"|";
	      change(total_frame[i][k]);
	      cout<<"  ";
	   }
      }
//      cout<<"|";
      //change(total_frame[i][9]);
//      cout<<"frame 10 total"<<total_frame[i][9]<<endl;
   }
/*******************************************************
 **Function:print_scores
 **Description:prints the scores for each player
 **Parameters:int players, char** names, int** scores
 **Pre-Condiitons: none
 **Post-Conditions:none
 **Return:none
 *******************************************************/
void print_scores(int players, char** names, int** scores, int** total_frame){
  //print throws
   int i, j;
   for(i=0; i<players; i++){
      cout<<names[i];
      for(j=0; j<19; j+=2){
	    cout<<"|";
	    change_bowl1_to_character(scores[i][j]);//print throw 1
	    cout<<" ";
	    change_bowl2_to_character(scores[i][j], scores[i][j+1]);//print throw 2
   	    total_frame_math(players, scores, total_frame, i, j);//put totals into total_frames array
      }
   tenth_frame(players, scores, total_frame, i);
   math(players, scores, total_frame, i, j);//prints frame totals and does math
   
      cout<<"|";
      change(total_frame[i][9]+scores[i][20]);
      cout<<endl;
      //cout<<"frame 10 total"<<total_frame[i][9]+scores[i][20]<<endl;
   }
}
/*******************************************************
 **Function:print_names
 **Description:prints the names of each player
 **Parameters:int players, char** names, int** scores
 **Pre-Condiitons:none
 **Post-Conditions:none
 **Return:none
 *******************************************************/
void print_names(int players, char** names){
   for(int i=0; i<players; i++){
      cout<<names[i];
      cout<<endl;
   }
   return ;
}
/*******************************************************
 **Function:player_turn
 **Description:keeps track of whichever player is player and plays a round of bowling for the player  
 **Parameters:int players, char** names, int** scores
 **Pre-Condiitons:none
 **Post-Conditions:none
 **Return:none
 *******************************************************/
void  player_turn(int players, char** names, int** scores, int** total_frame, int i, int j){
   //for(int j=0; j<=19; j+=2){
 //for(int i=0; i<players; i++){
	 cout<<names[i]<<", ";
	 int firstbowl=bowl1();
	 scores[i][j]=firstbowl;//rows, columns
	 print_scores(players, names, scores, total_frame);
	 if(firstbowl != 10){
	    scores[i][j+1]=bowl2(firstbowl);
	    print_scores(players, names, scores, total_frame);
	 }
	 else{scores[i][j+1]=0;
	 }
	 if(j==19){
	    if(scores[i][18]+scores[i][19]==10){
	       scores[i][20]=bowl1();
	       print_scores(players, names, scores, total_frame);
	    }
	    else{scores[i][20]=0;
	    }	 
	 }
     
   
   
}
/*******************************************************
 **Function:calculate_total
 **Description:calculates the total for each player
 **Parameters:int players, char** names, int** scores
 **Pre-Condiitons:players have scores in the array
 **Post-Conditions:array is summed
 **Return:none
 *******************************************************/
void calculate_total(int players, char** names,  int** total_frame, int** scores){
 int sum=0;
 int i;
   for(i=0; i<players; i++){
      for(int k=0; k<10; k++){
	 sum = sum + total_frame[i][k]+ scores[i][20];
      }
	 cout<<names[i]<<"  Total: "<<sum<<endl;
	 sum = 0;
      }

   }

/*******************************************************
 **Function:tenth_frame_throws
 **Description:
 **Parameters:
 **Pre-Condiitons:
 **Post-Conditions:
 **Return:
 *******************************************************/
void tenth_frame_throws( int** scores,  int i){
 
   scores[i][18]=bowl1();
   //if you get a stike in first throw
   if(scores[i][18]==10){
      //get full set
   scores[i][19]=bowl1();
   }
   else{
      //if no strike in first bowl-get rest of pins
      scores[i][19]==bowl2(scores[i][18]);
   }
   if( (scores[i][18] + scores[i][19]) >= 10){
      scores[i][20]=bowl1();
   }
   else{scores[i][20]=0;
   }
}

/*******************************************************
 **Function:tenth_frame_math
 **Description:
 **Parameters:
 **Pre-Condiitons:
 **Post-Conditions:
 **Return:
 *******************************************************/
void tenth_frame_math(int** scores, int** total_frame, int i){

      if( (scores[i][18] + scores[i][19]) >= 10){
	 total_frame[i][9]= (scores[i][18] + scores[i][19] + scores[i][20]);
      }
      else{
	 total_frame[i][9]= (scores[i][18] + scores[i][19]);
      }
}
      
/*******************************************************
 **Function:main
 **Description:calls functions to run
 **Parameters:none
 **Pre-Condiitons:none
 **Post-Conditions:none
 **Return: int 0
 *******************************************************/
int main(){

   srand(time(NULL));
   int players = num_of_players();
   char** names= get_names(players);
   int** scores= get_scores(players);
   int ** total_frame = frame_total(players);
   int *total;
   for(int j=0; j<=20; j+=2){
      for(int i=0; i<players; i++){
//cout<<"j= "<<j<<endl;
//cout<<"i= "<<i<<endl;
	if(j==20){
	   tenth_frame_throws(scores,  i);
	   //throws for 10th frame
	   tenth_frame_math(scores, total_frame, i);
	   //math for 10th frame
	  print_scores(players, names, scores, total_frame);  //prints from "player turn"
	}
	else
          player_turn(players,names, scores, total_frame, i, j);
   }
   }
   calculate_total(players, names, total_frame, scores);
   delete_array(players,names, scores);
   return 0;

}

