#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int ch;
	do{
		cout<<endl<<"Main Menu:\n1] Add Product\n2] Display All Product\n3] Search By Product Id\n4] Search By Product GST\n5] Buy Product\n6]Exit"<<endl;
		cout<<endl<<"ENTER YOUR CHOICE"<<endl;
		cin>>ch;
		switch(ch){
			case 1:
				system("insertProduct.exe");
				break;
			case 2:
				system("DisplayAllProduct.exe");
				break;
			case 3:
				system("searchByProductId.exe");
				break;
			case 4:
				system("searchByGST.exe");
				break;
			case 5:
				system("saleTheProduct.exe");
				break;
			case 6:
				cout<<"Good Bye......"<<endl;
				break;
			default:
				cout<<"WRONG CHOICE"<<endl;
				break;
		}
	}while(ch!=6);
}
