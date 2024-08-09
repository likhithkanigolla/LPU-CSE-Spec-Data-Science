#include<iostream>
using namespace std;
class sort
{ 
   int A[100],n,i,j;
   public:
   	void get()
	   {
   		cout<<"Enter the size of the array ";
	    cin>>n;
	    cout<<"Enter the elements of the array \n ";
      
	  for(i=0;i<n;i++)
	   cin>>A[i];
	   }
	void bsort()
	{
	   	int temp=0;
	   	for(i=0;i<n-1;i++)
	    for(j=0;j<n-1;j++)
	    {   
	       if(A[j]>A[j+1])
	       {
	       	 temp=A[j];
	       	 A[j]=A[j+1];
	       	 A[j+1]=temp;
	       }
	    }
    } 
	void put()
	{
	      cout<<"\nThe array after sorting is:\n";
		  for(i=0;i<n;i++)
		  cout<<"  "<<A[i];
    }
};
main(){
	sort s;
	s.get();
	s.bsort();
	s.put();
}
