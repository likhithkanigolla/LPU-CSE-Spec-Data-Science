#include<iostream>
#include<malloc.h>
using namespace std;
main(){
	
	int number, *ptr, i; 
 cout<<" How many ints would you like store? ";
 cin>>number;
 ptr = (int *)malloc(number*sizeof(int));
 
  for(i=0 ; i<number ; i++) {
  cin>>*(ptr+i); 
 }
 cout<<"\n Values before deallocating the memory are ";
 for(i=0 ; i<number ; i++){ 
   cout<<"\n"<<*(ptr + i); 
 } 
 cout<<endl;
 free(ptr);
 cout<<"\n Values after deallocating the memory are ";
 for(i=0 ; i<number ; i++){ 
   cout<<"\n"<<*(ptr + i); 
 } 
 
}
