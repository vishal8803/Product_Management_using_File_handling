#include<iostream>
#include<fstream>
using namespace std;
#include "Product.h"

int main(){
	fstream f;
	Product p;
	
	f.open("Product.db",ios::in|ios::binary);
	if(f.bad())
	{
		cout<<"Something went wrong, could not open file"<<endl;
	}else
	{
		int id;
		cout<<"ENTER THE PRODUCT ID YOU WANT  TO SEARCH: ";
		cin>>id;
		int found=0;
		while(!f.eof())
		{
			f.read((char*)&p,sizeof(p));
			if(f.eof())break;
			if(p.search(id)){
				p.putProduct();
				found =1;	
			}
		}
		if(!found)
		{
			cout<<"NO RESULT FOUND"<<endl;	
		}	
	}
	
	f.close();
}
