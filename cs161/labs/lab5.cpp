#include <iostream>
#include <string>

using namespace std;





void get_sentence(string &str){

   cout<<"Please enter a sentence: "<<endl;
   getline(cin,str);

   cout <<str << endl;

}

string get_sentence(){
   string str;

   cout<<"Please enter a sentence: "<<endl;
   getline(cin,str);



}






int main(){
   string sentence;

   get_sentence(sentence);
   cout <<sentence<<endl;




   return 0;
}
