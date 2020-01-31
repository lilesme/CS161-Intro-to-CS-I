#include <iostream>
#include <sys/time.h>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

int fib_iter(int n){
   int fzero=0, fone=1, fn=0;
   for(int i=0; i<(n-1); i++){
      fn=fzero+fone;
      fzero=fone;
      fone=fn;
   }
   return fn;
}

int fib_recurs(int n){
 if(n<2){
    return n;
 }
 else{
    return fib_recurs(n-2) + fib_recurs(n-1);
 }

}


int main(){
   int n;
   int fni;
   int fnr;

   typedef struct timeval time;
   time stop, start;

   //Time your iterative or recursivce function here.
   
   cout<<"Please enter an integer: "<<endl;
   cin>>n;

   gettimeofday(&start, NULL);
   
   fni = fib_iter(n);
   cout<<"The interative fibonacci number is: "<<fni<<endl;
   
   gettimeofday(&stop, NULL);
   
   if(stop.tv_sec > start.tv_sec)
      cout<<"Seconds: "<<stop.tv_sec-start.tv_sec<<endl;
   else
      cout<<"Micro: "<<stop.tv_usec-start.tv_usec<<endl;

   gettimeofday(&start, NULL);
   
   fnr = fib_recurs(n);
   cout<<"The recursive fibonacci number is: "<<fnr<<endl;

   gettimeofday(&stop, NULL);

   if(stop.tv_sec > start.tv_sec)
      cout<<"Seconds: "<<stop.tv_sec-start.tv_sec<<endl;
   else
      cout<<"Micro: "<<stop.tv_usec-start.tv_usec<<endl;






   return 0;
}
