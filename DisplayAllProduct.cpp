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
		while(!f.eof())
		{
			f.read((char*)&p,sizeof(p));
			if(f.eof())break;
			p.putProduct();
		}	
	}
	
	f.close();
}
