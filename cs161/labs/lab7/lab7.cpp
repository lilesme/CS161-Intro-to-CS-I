#include <iostream>
#include <string.h>

using namespace std;

void create_mem(char **array){
   int max_chars;
   cout<<"How many characters would you like? "<<endl;
   cin>> max_chars;
   max_chars + max_chars + 1;
   *array = new char [max_chars];
}

void delete_mem(char **array){
   delete [] *array;

}

int main(){
   char *what;
   create_mem(&what);
   delete_mem(&what);

   return 0;
}
