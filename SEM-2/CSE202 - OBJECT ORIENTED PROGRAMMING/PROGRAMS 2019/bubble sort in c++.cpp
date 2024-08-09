#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	 int A[100],n,i,j,temp;
	 cout<<"Enter the size of the array ";
	  cin>>n;
	  cout<<"Enter the elements of the array \n ";
	  
	  for(i=0;i<n;i++)
	   cin>>A[i];
	   
	   /*for(i=0;i<n-1;i++)
	       for(j=0;j<n-1;j++)
	       
	       if(A[j]>A[j+1])
	       {
	       	 temp=A[j];
	       	 A[j]=A[j+1];
	       	 A[j+1]=temp;
		  }*/
		  sort(A,A+n);            //built in function for sorting
		  cout<<"\nThe array after sorting is:\n";
		  for(i=0;i<n;i++)
		  cout<<"  "<<A[i];
		  return 0;
}
