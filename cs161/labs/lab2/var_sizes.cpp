#include <iostream>
#include <cmath>
#define NUM_BITS_IN_BYTE 8
int main() 
{
std::cout<<"A char takes up " <<sizeof(char)*NUM_BITS_IN_BYTE<<"bits of memory\n";
std::cout<<"An int takes up " <<sizeof(int)*NUM_BITS_IN_BYTE<<"bits of memory\n";
std::cout<<"A long takes up " <<sizeof(long)*NUM_BITS_IN_BYTE<<"bits of memory\n";
std::cout<<"A shorts takes up " <<sizeof(short)*NUM_BITS_IN_BYTE<<"bits of memory\n";
std::cout<<"A float takes up " <<sizeof(float)*NUM_BITS_IN_BYTE<<"bits of memory\n";
std::cout<<"A double takes up " <<sizeof(double)*NUM_BITS_IN_BYTE<<"bits of memory\n";
std::cout<<"A bool takes up " <<sizeof(bool)*NUM_BITS_IN_BYTE<<"bits of memory\n";

} 
