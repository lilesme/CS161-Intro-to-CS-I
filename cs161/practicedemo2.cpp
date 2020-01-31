#include <iostream>
#include <string.h>

using namespace std;


int sum_elements(int array[][3]){
   int sum=0;

   for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
	 sum = sum + array[i][j];
      }
   }
   return sum;
}


int main(){
   int array[3][3]={{1,1,1},{2,2,2},{3,3,3}};

   for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
	 cout<<array[i][j];
      }cout<<endl;
   }
  int sum=0; 
   sum = sum_elements(array);
   cout<<"Sum: "<<sum<<endl;

   return 0;


}
