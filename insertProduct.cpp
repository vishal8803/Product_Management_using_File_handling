#include<iostream>
#include<fstream>
using namespace std;
#include "Product.h"

int main(){
	fstream f;
	Product p;
	
	f.open("Product.db",ios::out|ios::app|ios::binary);
	char ch;
	do{
		p.getProduct();
		f.write((char*)&p,sizeof(p));
		cout<<"DO YOU WANT TO ADD MORE RECORDS Y/N: ";
		cin>>ch;
	}while(ch=='y' || ch=='Y');
	f.close();
}
