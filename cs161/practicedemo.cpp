#include <iostream>
#include <string.h>

using namespace std;

void sum_elements(int n, int* x, int* y, int* z){
   for(int b=0; b<n; b++){
      z[b]= (x[b]+y[b]);
      cout<<z[b];
   }
}


int main(){

   int n;
   cout<<"Please enter a number: "<<endl;
   cin>>n;

   int* x;
   x= new int[n];

   int* y;
   y = new int[n];

   int* z;
   z = new int[n];

   int k=0;
   int q=1;

   for(int i=0; i<n; i++){
      x[i]=k;
      cout<<x[i];
      k+=2;

   }

cout<<endl;
   for(int j=0; j<n; j++){
      y[j]=q;
      cout<<y[j];
      q+=2;
   }
cout<<endl;
   sum_elements(n, x, y, z);
cout<<endl;
}
