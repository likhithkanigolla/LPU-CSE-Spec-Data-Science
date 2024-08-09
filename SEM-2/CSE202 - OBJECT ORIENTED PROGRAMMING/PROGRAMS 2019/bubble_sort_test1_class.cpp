#include<iostream>
#define n 10
using namespace std;
int temp;
class A{
	
	int arr[n];
	int query;
	public:
		
		void get(){
			for(int i=0; i<n; i++){
				cin>>arr[i];
			}
		}
		void put(){
			for(int i=0; i<n; i++){
				cout<<arr[i]<<" , ";
			}
		}
		void sort(){
			
			for(int pass = 0; pass<n; pass++){
				for(int j=0; j<n-pass-1; j++){
					if(arr[j]>arr[j+1]){
						temp = arr[j];
						arr[j] = arr[j+1];
						arr[j+1] = temp;
					}
				}
			}
		}
		void search(){
			cout<<endl<<"Enter element to search: ";
			bool found;
			cin>>query;
			int low = 0, high=n, mid;
			while(low<=high){
				mid = (low+high)/2;
				if(query == arr[mid]){
					cout<<"Found at "<<mid+1;
					found = true;
					break;
				}
				else if(query>arr[mid]){
					low = mid+1;
				}
				else if(query < arr[mid]){
					high = mid-1;
				}
				
			}
			if(found == false){
				cout<<"Not found";
			}
		}
};
int main(){
	A o1;
	o1.get();
	cout<<endl;
	o1.put();
	cout<<endl;
	o1.sort();
	cout<<endl;
	o1.put();
	
	o1.search();
	
	
	return 0;
}
