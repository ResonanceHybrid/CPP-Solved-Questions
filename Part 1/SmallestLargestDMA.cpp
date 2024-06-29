#include <iostream>
using namespace std;

class sl{
	int i,j,x,n,*p;
	
	public:
		void num_count(){
			cout<<"How manu number you want to enter? ";
			cin>>n;
		}
		void large_small(){
			
			p=new int [n];
			
			for(i=0;i<n;i++){
				cout<<"\nEnter "<<i+1<<" Number: ";
				cin>>p[i];
			}
			for(i=0;i<n;i++){
				for(j=i+1;j<n;j++){
					if(p[i]>p[j]){
						x=p[i];
						p[i]=p[j];
						p[j]=x;
					}
				}
			}
		}
		void display(){
			cout<<"The largest number is: "<<p[n-1];
			cout<<"\nThe smallest number is: "<<p[0];
			delete []p;

		}
		
		
		
};

int main(){
	sl s;
	s.num_count();
	s.large_small();
	s.display();
}
