// Q.No.3.  Verify the Modus Tollens using the truth table.




#include<iostream>
using namespace std;
int main(){
	int p[4]={1,1,0,0},
	q[4]={1,0,1,0},
     a[4],m[4],n[4];
	for(int i=0;i<4;i++){
		m[i]=!p[i];
	}
	for(int i=0;i<4;i++){
		n[i]=!q[i];
	}
	for(int i=0;i<=4;i++){
		if(p[i]==1&&q[i]==0){
			a[i]=0;
		}
		else{
			
			a[i]=1;
		}
	}
	cout<<"---------------------------------------------------"<<endl;
	cout<<"|p  |"<<"\t"<<"q  |"<<"\t"<<"(!p)"<<"\t|"<<"  (!q)"<<"  |"<<"(p->q)\t  |"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	for(int i=0;i<4;i++){
		cout<<"|"<<p[i]<<"  |"<<"\t"<<q[i]<<"  |"<<"\t"<<" "<<m[i]<<"\t|"<<" "<<n[i]<<"\t"<<" |"<<"\t"<<a[i]<<"\t"<<"  |"<<endl;
	}
		cout<<"---------------------------------------------------"<<endl;
	for(int i=0;i<4;i++){
		if(a[i]==1&&n[i]==1&&m[i]==1){
			cout<<"If p->q is true and !q is also true then !p is also true(Modus Tollens)";
		}
	}
	return 0;
}
