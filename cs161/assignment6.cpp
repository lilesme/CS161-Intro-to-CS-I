/**********************************************************************************
 ** Program Filename: assignment6.cpp
 ** Author: Megan Liles
 ** Date: 3/16/2017
 ** Description: Randomly selects words from a file to print out in one of three stories.
 ** Input: text file
 ** Output: Mad Lib
 **********************************************************************************/
#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;

/**********************************************************************************
 ** Function: char* random_regnoun
 ** Description: selects a random regular noun
 ** Parameters: char regnoun[][30], int &num_regnoun
 ** Pre-Conditions: words are put into the noun array
 ** Post-Conditions: none
 ** Return: regnoun[x]
 **********************************************************************************/
char* random_regnoun(char regnoun[][30], int &num_regnoun){
   int x;
   do{x=rand()%num_regnoun;
   }while(regnoun[x][0]==0);
   return regnoun[x];
}
/**********************************************************************************
 ** Function: char* random_regverb
 ** Description: selects a random regular noun
 ** Parameters: char regverb[][30], int &num_regverb
 ** Pre-Conditions: words are put in the verb array
 ** Post-Conditions: none
 ** Return: regverb[x]
 **********************************************************************************/
char* random_regverb(char regverb[][30], int &num_regverb){
   int x;
   do{x=rand()%num_regverb;
   }while(regverb[x][0]==0);
   return regverb[x];
}
/**********************************************************************************
 ** Function: char* random_adjective
 ** Description: selects a random adjective
 ** Parameters: char adjective[][30], int &num_adjective
 ** Pre-Conditions: words are put in the adjective array
 ** Post-Conditions: none
 ** Return: adjective[x]
 **********************************************************************************/

char* random_adjective(char adjective[][30], int &num_adjective){
   int x;
   do{x=rand()%num_adjective;
   }while(adjective[x][0]==0);
   return adjective[x];
}
/**********************************************************************************
 ** Function: char* random_pnoun
 ** Description: selects a random plural noun
 ** Parameters: char pnoun[][30], int &num_pnoun 
 ** Pre-Conditions: words are put in the plural noun array
 ** Post-Conditions: none
 ** Return: pnoun[x]
 **********************************************************************************/

char* random_pnoun(char pnoun[][30], int &num_pnoun){
   int x;
   do{x=rand()%num_pnoun;
   }while(pnoun[x][0]==0);
   return pnoun[x];
}

/**********************************************************************************
 ** Function: char* random_verbing
 ** Description: selects a random verb(ing)
 ** Parameters: char verbing[][30], int &num_verbing
 ** Pre-Conditions: words are put in the verb(ing) array
 ** Post-Conditions: none
 ** Return: verbing[x]
 **********************************************************************************/
char* random_verbing(char verbing[][30], int &num_verbing){
   int x;
   do{x=rand()%num_verbing;
   }while(verbing[x][0]==0);
   return verbing[x];
}

/**********************************************************************************
 ** Function: story_1
 ** Description: prints out story one with random words from the inputted file
 ** Parameters: char noun[][30], char adjective[][30], char verb[][30], int num_verb, int num_adjective, char pnoun[][30], char verbing[][30], char regnoun[][30], char regverb[][30], int num_pnoun, int num_verbing, int num_regnoun, int num_regverb
 ** Pre-Conditions: user enters which story they want
 ** Post-Conditions: story is printed out
 ** Return: none
 **********************************************************************************/
void story_1(char noun[][30], char adjective[][30], char verb[][30], int num_verb, int num_adjective, char pnoun[][30], char verbing[][30], char regnoun[][30], char regverb[][30], int num_pnoun, int num_verbing, int num_regnoun, int num_regverb){

cout<<"Most doctors agree that bicycle "<<random_verbing(verbing, num_verbing)<<" is a/an "<<random_adjective(adjective, num_adjective)<<" form of exercise."<<random_verbing(verbing, num_verbing)<<" a bicycle enables you to develop your "<<random_regnoun(regnoun, num_regnoun)<<" muscles, as well as increase the rate of your "<<random_regnoun(regnoun, num_regnoun)<<" beat. More "<<random_pnoun(pnoun, num_pnoun)<<" around the world "<<random_regverb(regverb, num_regverb)<<" bicycles than drive "<<random_pnoun(pnoun, num_pnoun)<<". No matter what kind of "<<random_regnoun(regnoun, num_regnoun)<<" you "<<random_regverb(regverb, num_regverb)<<" always be sure to wear a/an " <<random_adjective(adjective, num_adjective)<<" helmet. Make sure to have "<<random_adjective(adjective, num_adjective)<<" reflectors too!"<<endl;

}	

/**********************************************************************************
 ** Function: story_2
 ** Description: prints out story with random words from the inputted file
 ** Parameters:char noun[][30], char adjective[][30], char verb[][30], int num_verb, int num_adjective, char pnoun[][30], char verbing[][30], char regnoun[][30], char regverb[][30], int num_pnoun, int num_verbing, int num_regnoun, int num_regverb
 ** Pre-Conditions: user enters which story they want
 ** Post-Conditions: story is printed out
 ** Return: none
 **********************************************************************************/
void story_2(char noun[][30], char adjective[][30], char verb[][30], int num_verb, int num_adjective, char pnoun[][30], char verbing[][30], char regnoun[][30], char regverb[][30], int num_pnoun, int num_verbing, int num_regnoun, int num_regverb){

cout<<"Yesterday, "<<random_regnoun(regnoun, num_regnoun)<<" and I went to the park. On our way to the " <<random_adjective(adjective, num_adjective)<<" park, we saw a "<<random_adjective(adjective, num_adjective)<<" "<<random_regnoun(regnoun, num_regnoun)<<" on a bike. We also saw big "<<random_adjective(adjective, num_adjective)<<" balloons tied to a "<<random_regnoun(regnoun, num_regnoun)<<". Once we got to the "<<random_adjective(adjective, num_adjective)<<" park, the sky turned "<<random_adjective(adjective, num_adjective)<<". It started to "<<random_regverb(regverb, num_regverb)<<" and "<<random_regverb(regverb, num_regverb)<<". "<<random_regnoun(regnoun, num_regnoun)<<" and I "<<random_regverb(regverb, num_regverb)<<" all the way home. Tomorrow we will try to go to the "<<random_adjective(adjective, num_adjective)<<" park again and hope it doesn’t "<<random_regverb(regverb, num_regverb)<<"."<<endl;
}

/**********************************************************************************
 ** Function:story_3
 ** Description: prints out story with random words from the inputted file
 ** Parameters:char noun[][30], char adjective[][30], char verb[][30], int num_verb, int num_adjective, char pnoun[][30], char verbing[][30], char regnoun[][30], char regverb[][30], int num_pnoun, int num_verbing, int num_regnoun, int num_regverb){
 ** Pre-Conditions: user enters which story they want
 ** Post-Conditions: story is printed out
 ** Return: none
 **********************************************************************************/

void story_3(char noun[][30], char adjective[][30], char verb[][30], int num_verb, int num_adjective, char pnoun[][30], char verbing[][30], char regnoun[][30], char regverb[][30], int num_pnoun, int num_verbing, int num_regnoun, int num_regverb){

cout<<"Spring break 2017, oh how I have been waiting for you! Spring break is when you go to some "<<random_adjective(adjective, num_adjective)<<" place to spend time with "<<random_regnoun(regnoun, num_regnoun)<<". Getting to "<<random_regnoun(regnoun, num_regnoun)<<" is going to take "<<random_adjective(adjective, num_adjective)<< " hours. My favorite part of spring break is "<<random_verbing(verbing, num_verbing)<<" in the "<<random_regnoun(regnoun, num_regnoun)<<". During spring break, "<<random_regnoun(regnoun, num_regnoun)<<" and I plan to "<<random_regverb(regverb, num_regverb)<<" all the way to "<<random_regnoun(regnoun, num_regnoun)<<". After spring break, I will be ready to return to "<<random_regnoun(regnoun, num_regnoun)<<" and "<<random_regverb(regverb, num_regverb)<<" hard to finish "<<random_regnoun(regnoun, num_regnoun)<<". Thanks spring break 2017!"<<endl;
}

/**********************************************************************************
 ** Function: determine_words
 ** Description: loops through the text to determine which words are verbs, nouns and adjectives and place them in respective array
 ** Parameters:char noun[][30], char adjective[][30], char verb[][30], int* num_noun, int* num_verb, int* num_adjective
 ** Pre-Conditions: user inputs a file
 ** Post-Conditions: words from file are sorted into their respective arrays
 ** Return: none
 **********************************************************************************/
void determine_words(char noun[][30], char adjective[][30], char verb[][30], int* num_noun, int* num_verb, int* num_adjective){
   char firstword[10];
   char secondword[30];
   int p=0;
   int q=0;
   int r=0;

   while (cin>>firstword){  
   cin>>secondword;
   
      if(firstword[0]=='n'){
	 for(int x=0; x<strlen(secondword); x++){    
	    noun[p][x]=secondword[x];
	 }
	 p++;
	 (*num_noun)++;
         }
      else if(firstword[0]=='a'){
	 for(int x=0; x<strlen(secondword); x++){    
	    adjective[q][x]=secondword[x];
         }
         q++;
	 (*num_adjective)++;
      }
      else if(firstword[0]=='v'){
	 for(int x=0; x<strlen(secondword); x++){    
	    verb[r][x]=secondword[x];
         }
         r++;
	 (*num_verb)++;
      }
   }

}

/**********************************************************************************
 ** Function:check_nouns
 ** Description: sorts through the noun array and seperates the nouns into their respective arrays (plural nouns or regular nouns)
 ** Parameters:char noun[][30], char pnoun[][30], char regnoun[][30], int* num_noun, int* num_pnoun, int* num_regnoun
 ** Pre-Conditions:nouns are correctly put in the noun array
 ** Post-Conditions:nouns are separated into their respective arrays
 ** Return:none
 **********************************************************************************/
void check_nouns(char noun[][30], char pnoun[][30], char regnoun[][30], int* num_noun, int* num_pnoun, int* num_regnoun){
   for(int i=0; i<*num_noun; i++){
      if(noun[i][strlen(noun[i])-1]=='s'){
	 for(int j=0; j<strlen(noun[i]); j++){
	    pnoun[i][j]=noun[i][j];
         }
	 (*num_pnoun)++;
      }
   
      else{
	 for(int j=0; j<strlen(noun[i]); j++){
	    regnoun[i][j]=noun[i][j];
	 }
	 (*num_regnoun)++;
      }
   }
}
/**********************************************************************************
 ** Function:check_verbs
 ** Description:sorts through the verb array and separates the verbs into their respective arrays (regular verbs and ing verbs)
 ** Parameters:char verb[][30], char verbing[][30], char regverb[][30], int* num_verb, int* num_verbing, int* num_regverb
 ** Pre-Conditions: verbs are correctly put in the noun array
 ** Post-Conditions: nouns are separated into their respective arrays
 ** Return: none
 **********************************************************************************/
void check_verbs(char verb[][30], char verbing[][30], char regverb[][30], int* num_verb, int* num_verbing, int* num_regverb){


   for(int i=0; i<(*num_verb); i++){
      int v= strlen(verb[i]);
      if(verb[i][v-1]=='g' && verb[i][v-2]=='n' && verb[i][v-3]=='i'){
	 for(int j=0; j<strlen(verb[i]); j++){
	    verbing[i][j]=verb[i][j];
	 }
         (*num_verbing)++;
      }
      else{
	 for(int j=0; j<strlen(verb[i]); j++){
	    regverb[i][j]=verb[i][j];
	 }
	 (*num_regverb)++;
      }
   }
}
   
/**********************************************************************************
 ** Function:check arguments
 ** Description: error checks to make sure the user entered in two arguments
 ** Parameters:int argc
 ** Pre-Conditions:none
 ** Post-Conditions:none
 ** Return:none
 **********************************************************************************/

bool check_arguments(int argc){
   if(argc!=2){
      cout<<"you do not have enough arguments!"<<endl;
      return true;
   }
   else{
      return false;
   }
}

/**********************************************************************************
 ** Function: choose_story
 ** Description: calls the story based on what the user enters
 ** Parameters:char* argv[], char noun[][30], char adjective[][30], char verb[][30], int &num_verb, int &num_adjective, char pnoun[][30], char verbing[][30], char regnoun[][30], char regverb[][30], int &num_pnoun, int &num_verbing, int &num_regnoun, int &num_regverb
 ** Pre-Conditions: user entered the story they wanted
 ** Post-Conditions:story is called
 ** Return:none
 **********************************************************************************/
void choose_story(char* argv[], char noun[][30], char adjective[][30], char verb[][30], int &num_verb, int &num_adjective, char pnoun[][30], char verbing[][30], char regnoun[][30], char regverb[][30], int &num_pnoun, int &num_verbing, int &num_regnoun, int &num_regverb){

   if(strcmp(argv[1], "1")==0){
      cout<<"you chose story 1!"<<endl;
      story_1(noun, adjective, verb, num_verb, num_adjective, pnoun, verbing, regnoun, regverb, num_pnoun, num_verbing, num_regnoun, num_regverb);
      
   }
   else if(strcmp(argv[1], "2")==0){
      cout<<"you chose story 2!"<<endl;
      story_2(noun, adjective, verb, num_verb, num_adjective, pnoun, verbing, regnoun, regverb, num_pnoun, num_verbing, num_regnoun, num_regverb);
      
      
   }
   else if(strcmp(argv[1], "3")==0){
      cout<<"you chose story 3!"<<endl;
      story_3(noun, adjective, verb, num_verb, num_adjective, pnoun, verbing, regnoun, regverb, num_pnoun, num_verbing, num_regnoun, num_regverb);
      
   }
   else{
      cout<<"bad input! please select story 1, 2 or 3"<<endl;
   }
}

/**********************************************************************************
 ** Function: memory
 ** Description: sets the memory of all the arrays to hold nothing
 ** Parameters:char noun[0][30], char adjective[][30], char verb[][30], char pnoun[][30], char verbing[][30], char regnoun[][30], char regverb[][30]
 ** Pre-Conditions: arrays are created
 ** Post-Conditions: arrays are filled with nothing
 ** Return: none
 **********************************************************************************/
void memory(char noun[0][30], char adjective[][30], char verb[][30], char pnoun[][30], char verbing[][30], char regnoun[][30], char regverb[][30]){
  memset(noun, 0, sizeof(noun[0][0]) *75 *30);
  memset(verb, 0, sizeof(verb[0][0]) *75 *30);
  memset(adjective, 0, sizeof(adjective[0][0]) *75 *30);
  memset(pnoun, 0, sizeof(pnoun[0][0]) *75 *30);
  memset(verbing, 0, sizeof(verbing[0][0]) *75 *30);
  memset(regnoun, 0, sizeof(regnoun[0][0]) *75 *30);
  memset(regverb, 0, sizeof(regverb[0][0]) *75 *30);
}

/**********************************************************************************
 ** Function:main
 ** Description: calls functions and creates arrays
 ** Parameters: int argc, char* argv[]
 ** Pre-Conditions:user inputs two command arguments
 ** Post-Conditions:none
 ** Return: int 0
 **********************************************************************************/
int main(int argc, char* argv[]){
   
   srand(time(NULL));

   char noun[75][30];
   char adjective[75][30];
   char verb[75][30];
   char pnoun[75][30];
   char verbing[75][30];
   char regnoun[75][30];
   char regverb[75][30];
   int num_noun=0;
   int num_verb=0;
   int num_adjective=0;
   int num_pnoun=0;
   int num_verbing=0;
   int num_regnoun=0;
   int num_regverb=0;

   memory(noun, adjective, verb, pnoun, verbing, regnoun, regverb);
   int x = check_arguments(argc);
   if(x==true){
      return 0;
   }
   
   determine_words(noun, adjective, verb, &num_noun, &num_verb, &num_adjective);
   check_nouns(noun, pnoun, regnoun, &num_noun, &num_pnoun, &num_regnoun);
   check_verbs(verb, verbing, regverb, &num_verb, &num_verbing, &num_regverb);
   choose_story(argv, noun, adjective, verb, num_verb, num_adjective, pnoun, verbing, regnoun, regverb, num_pnoun, num_verbing, num_regnoun, num_regverb);
   

   return 0;


   }
