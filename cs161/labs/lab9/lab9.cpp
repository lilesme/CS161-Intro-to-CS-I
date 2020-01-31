#include <iostream>
#include <string.h>

using namespace std;

void print_array(int** b, int rows, int cols){
   for(int i=0; i<rows; i++){
      for(int j=0; j<cols; j++){
	cout<<b[i][j];
      }
      cout<<endl;
   }
   cout<<"___________________________________"<<endl;
}

void move(int disk, int** b, int from_col, int to_col, int rows, int cols){
   int lowest;
   int i;

   for(i=rows-1; i>=0 && b[i][from_col] !=0; i--){
      disk = i;
   }
   for(i=rows-1; i>=0; i--){
      if(b[i][to_col]==0){
	 lowest=i;
	 break;
      }
   }
   b[lowest][to_col]= b[disk][from_col];
   b[disk][from_col]=0;
}




void towers(int disk, int** b, int from_col, int to_col, int spare, int rows, int cols){
  if(disk>=0){
     towers(disk-1, b, from_col, spare, to_col, rows, cols);
     move(disk,b,from_col, to_col, rows, cols);
     print_array(b, rows, cols);
     towers(disk-1, b, spare, to_col, from_col, rows, cols);
  }
}
      
int main(){
   
   int rows=3;
   int cols=3;
cout<<"How many rows?"<<endl;
cin >> rows;
//cin >> cols;

int** b;
b=new int*[rows];
for(int i=0; i<rows; i++){
   b[i]= new int[cols];
   b[i][0] = i+1; 
}
/*
b[0][0]=1;
b[1][0]=2;
b[2][0]=3;
*/
towers(rows-1, b, 0,2,1,rows, cols);


for(int i=0; i<rows; i++){
   delete[]b[i];
}
delete [] b;
  

return 0;
}
