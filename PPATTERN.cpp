//Contest Code:PRACTICE Problem Code:PPATTERN

/*1 2 4 7
3 5 8 11
6 9 12 14
10 13 15 16*/



#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n][n];
	    int num=1;
	    int c=0;
	    while(num!=n*n+1){
	        for(int i=0;i<n;i++){
	            for(int j=0;j<n;j++){
	                if(i+j==c){
	                    a[i][j]=num++;
	                }
	            }
	        }
	        c++;
	    }
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cout<<a[i][j]<<" ";
	        }
	        cout<<endl;
	    }
	}
	
	
	// your code goes here
	return 0;
}
