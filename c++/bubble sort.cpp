#include <iostream>
using namespace std;
int main(){
	int scambio;
	int arr[10];
	cout<<"inserire i numeri dell'array";
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	for (int i=0;i<10;i++){
		for (int a=0;a<10-1;a++){
			if(arr[a]>arr[a+1]){
			    scambio=arr[a];
				arr[a]=arr[a+1];
				arr[a+1]=scambio;
			}
		}
	}
	cout<<"numeri ordinati in ordine crescente:\n";
	for (int i=0;i<10;i++){
		cout<<arr[i];
		if (i<9){
			cout<<",";
		}
	}
	cout<<"numero maggiore\n";
	cout<<arr[9];
	cout<<"numero minore\n";
	cout<<arr[0];
}
