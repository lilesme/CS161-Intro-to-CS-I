/***********************************************************************
 **Program: assignment4.cpp (Wheel of Fortune)
 **Author: Megan Liles
 **Date: 2/17/2017
 **Description: Modified version of wheel of fortune
 **Input: string secret message, integers, characters
 **Output: message with dashes, money earned, options to play
 ***********************************************************************/
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>


using namespace std;



/************************************************************************
 **Function: welcome
 **Description: asks user how many players
 **Parameters:it takes an int that represents the players money
 **Preconditions:N/A
 **Postconditions:must have a variable to put number of players in
 **Return:none
 ***********************************************************************/
//welcome message
void welcome(int &player1, int &player2, int &player3){
   int players;
   while(true){
      cout<<"Hello and Welcome to Wheel of Fortune! Do you have 1, 2, or 3 players? "<<endl;
      cin>>players;

      if(players == 1){
	 player1=0;
	 return;
      }
      else if(players == 2){
	 player1=0;
	 player2=0;
	 return;
      }
      else if(players == 3){
	 player1=0;
	 player2=0;
	 player3=0;
	 return;
      }
   }
}
/************************************************************************
 **Function: rounds_playing 
 **Description:asks for number of rounds playing
 **Parameters:none
 **Preconditions:none
 **Postconditions:needs rounds stored in variable
 **Return:int
 ***********************************************************************/
//Rounds Playing
int rounds_playing(){
   int rounds;
   cout<<"How many rounds do you want to play? "<<endl;
   cin>>rounds;

   return rounds;

}
/************************************************************************
 **Function:change_to_lowercase
 **Description:replaces message with lowercase letters
 **Parameters:needs string original that was entered
 **Preconditions:string original is entered with characters and spaces
 **Postconditions:string is in lowercase characters
 **Return:none
 ***********************************************************************/
//Change message to  lowercase
void change_to_lowercase(string *original){
   for(int i = 0; i<(*original).size(); i++){
      (*original)[i]=tolower((*original)[i]);
   }
} 
/************************************************************************
 **Function:get_secret_message
 **Description:asks the user for the secret message
 **Parameters:needs string original
 **Preconditions:there is at least one player and one round
 **Postconditions:message is saved as a variable
 **Return:none
 ***********************************************************************/
//Get Message
void get_secret_message(string *original){
   int error;
   do{
   cout<<"Please enter a secret message: "<<endl;
   cin.ignore();
   getline(cin, *original);
   change_to_lowercase(original);
  for(int i=0;i<(*original).length(); i++){
    if((*original).at(i) < 'a' || (*original).at(i) > 'z'){
       if((*original).at(i) != ' '){
	  error=1;
	  break;
       }
    }
    else{
       error=0;
    }
  }
    if(error>0){
       cout<<"That is not a valid message. Please only enter letters and spaces."<<endl;
    }
    }while(error>0);	 
}
/************************************************************************
 **Function:set_replace_message
 **Description:replaces the message inputed by user with dashes
 **Parameters:needs string original and string copy
 **Preconditions:message is in characters
 **Postconditions:message is in dashes
 **Return:none
 ***********************************************************************/
//Replace message  with dashes
void set_replace_message(string original, string *copy){
   for(int x = 0; x<original.length(); x++){
      if(original.at(x) == ' '){
	 *copy+= ' ';
      }
      else{
	 *copy+= '-';
      }
   }
}
/************************************************************************
 **Function:money_earned
 **Description:calculates the money earned from guessing a letter
 **Parameters:wheel num, total letter, and player
 **Preconditions:guessed a letter
 **Postconditions:none
 **Return:none
 ***********************************************************************/
//Money earned function
void money_earned(int wheelnum, int total_letter, int &player){

   player += wheelnum*total_letter;   
   return;
}
/************************************************************************
 **Function:no_letters_found
 **Description:user loses turn if no letters are found
 **Parameters:needs int total_letter, wheelnum and address of player
 **Preconditions:none
 **Postconditions: none
 **Return:none
 ***********************************************************************/

//0 letters found function
void  no_letters_found(int total_letter,int wheelnum, int &player){
   if(total_letter==0){
      cout<<"You lose your turn! "<<endl;
      return;
   }
   else{
      return;
   }
}
/************************************************************************
 **Function:get_search_replace
 **Description:searches the message for letter
 **Parameters:needs string original, address of copy and int wheel num and address of copy
 **Preconditions:message is entered
 **Postconditions:none
 **Return:integer of letters found
 ***********************************************************************/
//Search message with letter
int get_search_replace(string original, string &copy, int wheelnum, int &player){
   char letter;
   bool x;
   while(x==false){
      cout<<"Guess a letter in the secret message: "<<endl;
      cin>>letter;
      if((letter== 'a' || letter== 'e')|| (letter== 'i' || letter == 'o') || (letter== 'u')){
	 cout<<"That is a vowel!"<<endl;
	 x=false;
      }
      else{
	 x=true;
      }
   }
   
   int total_letter=0;
   for(int x=0; x<original.length(); x++){
      if(letter==original.at(x)){
	 total_letter++;
	 copy.at(x)=letter;

      }
   }
   cout<<"There were "<<total_letter<<" letters found!"<<endl;
   cout<<copy<<endl;
   no_letters_found(total_letter, wheelnum, player);
   return total_letter;

}
/************************************************************************
 **Function: wheel_spin
 **Description: determines if user loses based on wheel spin number
 **Parameters:int wheelnum, and address of player, string original and address of copy
 **Preconditions:none
 **Postconditions:none
 **Return:integer from function get_search replace
 ***********************************************************************/

//Wheel Number
int wheel_spin(int wheelnum, string original, string &copy, int &player){
   if(wheelnum == 0){
      cout<<"Your earnings are lost! "<<endl;
      player=0;
      return 0;
   }
   else if(wheelnum == 21){
      cout<<"You keep your money, but you lose your turn."<<endl;
      return 0;
   }
   else{
      return  get_search_replace(original, copy, wheelnum, player);
   }
}
/************************************************************************
 **Function:rand_num
 **Description:spins the wheel for a random number
 **Parameters:none
 **Preconditions:player has entereed their turn and chose to spin wheel
 **Postconditions:the wheelnumber is outputed
 **Return:int wheelnum
 ***********************************************************************/
//Spin the Wheel
int rand_num(){	
   int wheelnum;/* variable to hold our random integer*/
   srand(time(NULL));/*seeds random number generator. Do this just once*/

   wheelnum = rand() % 21 + 1; //wheelnum in the range 1-21
   cout<<"The wheel landed on: "<<wheelnum<<endl;
   return wheelnum;

}
/************************************************************************
 **Function: solve_puzzle
 **Description:asks user for their guess of the puzzle
 **Parameters:needs string original
 **Preconditions:none
 **Postconditions:none
 **Return:bool false or true
 ***********************************************************************/
//CHOOSE SOLVE PUZZLE 
bool solve_puzzle(string original){
   string guess;
   cout<<"Please enter your guess: "<<endl;
   cin.ignore();
   getline(cin, guess);
   change_to_lowercase(&guess);
   if(guess==original){
      cout<<"Congratulations! You Won the round!"<<endl;
      return true;
   }
   else{
      cout<<"I'm sorry that's not correct. You lose your turn. "<<endl;
      return false;
   }
}   
/************************************************************************
 **Function: is_puzzle_solved
 **Description: checks if the message is done 
 **Parameters:needs string original
 **Preconditions:none
 **Postconditions:none
 **Return:bool true or false
 ***********************************************************************/
//Is puzzle solved loop
bool is_puzzle_solved(string original){
   for(int x=0; x<original.length(); x++){
      if(original.at(x)=='-'){
	 return false;
      }


   } 
   return true;  
}

/************************************************************************
 **Function:Choose Spin
 **Description:calls functions once they choose spin
 **Parameters:needs string original, address of copy and address of player
 **Preconditions:User's turn 
 **Postconditions: a letter is or is not found
 **Return:total_letter
 ***********************************************************************/
//CHOOSE SPIN
int choose_spin(string original,string &copy, int &player){
   int wheelnum = rand_num();
   int total_letter = wheel_spin(wheelnum, original, copy, player);
   money_earned(wheelnum, total_letter, player);
   cout<< "Money: $"<<player<<endl;
   return total_letter;
}
/************************************************************************
 **Function:get_vowel_search_replace
 **Description:asks user for a vowel
 **Parameters:needs string original, address of copy and int wheelnum and address of player
 **Preconditions: has enough money to buy a vowel
 **Postconditions:number of vowels found
 **Return:total_letters found
 ***********************************************************************/
//Search message with vowel
int getvowel_search_replace(string original, string &copy, int wheelnum, int &player){
   char vowel;;
   bool x;
   while(x==false){
      cout<<"Guess a vowel in the secret message: "<<endl;
      cin>>vowel;
      if((vowel!='a' && vowel!='e')&&(vowel !='i' && vowel !='o')&& vowel!='u'){
	 cout<<"That is not a vowel!"<<endl;
	 x=false;
      } 
      else{
	 x=true;
      }
   }
   int total_letter=0;
   for(int x=0; x<original.length(); x++){
      if(vowel==original.at(x)){
	 total_letter++;
	 copy.at(x)=vowel;

      }
   }
   cout<<"There were "<<total_letter<<" vowels found!"<<endl;
   cout<<copy<<endl;
   no_letters_found(total_letter, wheelnum, player);
   return total_letter;
}


/************************************************************************
 **Function:buy_vowel
 **Description:checks if user can buy a vowel
 **Parameters:needs string original, copy,int  wheelnum and address of player
 **Preconditions:chose buy vowel, has money in their account
 **Postconditions:money account updated
 **Return:integer
 ***********************************************************************/
//CHOOSE BUY VOWEL
int buy_vowel(string original, string copy, int wheelnum, int &player){
   //Check for enough money
   int playertotal;
   if(player>10){
      player-=10;
   }
   else{
      cout<<"You do not have enough money!"<<endl;
      return 0;
   }
   int total_letter = getvowel_search_replace(original, copy, wheelnum, player);
   money_earned(wheelnum, total_letter, player);
   cout<<"Money: $"<<player<<endl;
   return 1;
}

/************************************************************************
 **Function:main_option
 **Description:asks user if they want to spin, buy a vowel, or solve the puzzle
 **Parameters:string original, copy,int  address of player and string current player
 **Preconditions:a user has started their turn
 **Postconditions:user has either guessed the puzzle or lost their turn, bank may be empty
 **Return:none
 ***********************************************************************/
//Menu of Options for Each Player
void main_option(string original, string *copy, int &player,  string current_player){
   string option; 
   int earnings=1;
   while(earnings != 0){
      cout<<current_player<<", do you want to spin the wheel(1), buy a vowel(2), or solve the puzzle(3): "<<endl;
      cin>>option;

      if(option=="1"){
	 earnings = choose_spin(original, *copy,  player);
	cout<<player<<endl; 

      }
      else if(option=="2"){
	 int wheelnum=0;
	 earnings =  buy_vowel(original, *copy, wheelnum,  player);
	 

      }
      else if(option=="3"){
	 if(solve_puzzle(original) == true){
	    *copy=original;
	 }
	 return ;
      }
      else{
	 cout<<"Bad input!"<<endl;
      }
      
   }
   return ;
}

/************************************************************************
 **Function:compare_winnings
 **Description:compares the banks of each of the players to determine who wins
 **Parameters:int player 1, 2, and 3
 **Preconditions:player 1 2 and 3 have money
 **Postconditions:nothing changes
 **Return:none
 ***********************************************************************/
void compare_winnings(int player1, int player2, int player3){
   if((player1 > player2)&&(player1 > player3)){
	 cout<<"Player 1 Wins and has $"<<player1<<endl;
	 cout<<"Player 2 had: $"<<player2<<endl;
	 cout<<"Player 3 had: $"<<player3<<endl;
   }
   else if((player2>player1)&&(player2 > player3)){
      cout<<"Player 2 Wins and has $"<<player2<<endl;
      cout<<"Player 1 had: $"<<player1<<endl;
      cout<<"Player 3 had: $"<<player3<<endl;
      }
   else if((player3 > player1)&& (player3 > player2)){
   cout<<"Player 3 Wins and has $"<<player3<<endl;
   cout<<"Player 2 had: $"<<player2<<endl;
   cout<<"Player 1 had: $"<<player1<<endl;
   }
return ;
}
/************************************************************************
 **Function:play_rouund
 **Description:changes players to play during a round
 **Parameters:string original, string address of copy, int rounds, int address of player1, 2, and 3
 **Preconditions: There is at least 1 player
 **Postconditions:a round is finished
 **Return:none
 ***********************************************************************/
void play_round(string original, string &copy,int rounds, int &player1, int &player2, int &player3){
   int player1income=0;
   int player2income=0;
   int player3income=0;

      set_replace_message(original, &copy);

      system("clear");//clear screen after message is inputed
   while(true){
      
      main_option(original, &copy, player1income,"Player 1");
      if(is_puzzle_solved(copy)==true){
	 player1 += player1income;
	 break;
      }
     
      if(player2>-1){
        main_option(original, &copy, player2income, "Player 2");
	 if(is_puzzle_solved(copy)==true){
	    player2 += player2income;
	    break;
	 }
      }

      if(player3>-1){
	 main_option(original, &copy, player3income, "Player 3");
	 if(is_puzzle_solved(copy)==true){
	    player3 += player3income;
	    break;
	 }
      }
   
  }
   compare_winnings(player1income, player2income, player3income);
}


/************************************************************************
 **Function: main
 **Description:calls functions
 **Parameters:none
 **Preconditions:none
 **Postconditions:none
 **Return:integer
 ***********************************************************************/
//MAIN
int main(){

   int player1=-5;
   int player2=-5;
   int player3=-5;
   int x;
   //Welcome & Player Names
   string original, copy, message;
   int wheelnum, total_letter;

   welcome(player1, player2, player3);

   int rounds = rounds_playing();
   for(int x=1; x<=rounds; x++){ 
      get_secret_message(&original);

      bool solved;
      do{
	 play_round(original, copy,rounds, player1, player2, player3);
	 solved = is_puzzle_solved(copy);
      }while(solved==false);
   }
   compare_winnings(player1, player2, player3);
   return 0;
}


