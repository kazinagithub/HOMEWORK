#include <iostream>
using namespace std;
int main(){
	int num[20][20],i,j,n,sum=0,sum1=0,sum2=0,sum3=0;
	cout<<"enter the number of rows and column ";
	cin>>n;
	cout<<"enter the matrix elements .......\n";
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<"enter the number in the pocket["<<i<<"]["<<j<<"]";
			cin>>num[i][j];
		}
		cout<<endl;
	}
		for(i=0;i<n;i++){
			sum=sum+num[0][i];
		}
		for(j=0;j<n;j++){
			
			sum1=sum1+num[j][0];
		}
	
	cout<<"MATRIX IS...."<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<num[i][j]<<"   ";
		}
		cout<<sum<<" "<<endl;
	}
	for(i=0;i<n;i++){
		cout<<sum1<<"  ";
	}
		cout<<" "<<endl;
		for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				sum2=sum2+num[i][j];
			}
			if(i+j==n-1){
				sum3=sum3+num[i][j];
			}
		}
		}
		cout<<"Right diagonal is "<<sum2<<" and "<<"Left diagonal is "<<sum3<<endl;
	if ((sum == sum1) && (sum1 == sum3)){
    cout << "is a magic square matrix!!!";
          }
else {
    cout << "is not magic square matrix!!!";
    }  
	 
	return 0;
 }
