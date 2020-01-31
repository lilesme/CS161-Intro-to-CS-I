#include <iostream>
#include <string.h>

using namespace std;


/*******************************
 * Function:void get_string
 * Description:asks a user for a string and make a copy of it
 * Parameters:string *
 * Pre-Conditions:none
 * Post-Conditions:none
 * Return:none
 * *******************************/

void get_string(char message[]){
   cout<<"Please enter a secret message"<<endl;
   cin.getline(message, 256);


}

/*******************************
 * Function:void set_replace_string
 * Description:gets the copy of the string and changes all the non-space letters to dashes
 * Parameters:string, string*
 * Pre-Conditions:string
 * Post-Conditions:string has been duplicated, all non characters replaced with dashes
 * Return:nothing
 * *******************************/
void set_replace_string(char original[], char copy[]){
	for(int x = 0; x<strlen(original); x++){
		if(original[x] == ' '){
			copy[x] = ' ';
		}
		else{
	   		copy[x] = '-';	
		}
	}



}

/*******************************
 * Function:int get_search_replace
 * Description:gets a letter from the user to search and replace returning the number of letters found
 * Parameters:string, string &
 * Pre-Conditions:string consisting fo dashes
 * Post-Conditions:integer representing the number of letters that is found matching the letter guessed
 * Return:int
 * *******************************/
int get_search_replace(char original[], char copy[]){
	char letter;
   	cout<<"Guess a letter in the secret message: "<<endl;
	cin>>letter;
	int total_letter=0;
	for(int x=0; x<strlen(original); x++){
	   if(letter==original[x]){
		 total_letter++;
		 copy[x]=letter;
		
	   }
	   cout << copy[x];
	}
	//cout<<copy[]<<endl;
	return total_letter;
}
/*******************************
 * Function:main
 * Description:calls functions
 * Parameters:string, string &
 * Pre-Conditions:none
 * Post-Conditions:none
 * Return:none
 * *******************************/
int main(){
   char original[256];
   char copy[256];
   //declare copy
   //
   get_string(original);
   set_replace_string(original, copy);
   //cout << copy << endl;
   int letters_found = get_search_replace(original, copy);
   //cout<<letters_found<<endl;
   return 0;



}
