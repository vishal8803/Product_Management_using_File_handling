class Product{
	private:
		int productId,rate,gst,stock;
		char pname[30];
	public:
		void getProduct(){
			
			cout<<"ENTER THE ID OF THE  PRODUCT: ";
			cin>>productId;
			cout<<"ENTER THE RATE OF THE PRODUCT: ";
			cin>>rate;
			cout<<"ENTER THE STOCK OF THE PRODUCT: ";
			cin>>stock;
			cout<<"ENTER THE GST OF FOR THIS PRODUCT: ";
			cin>>gst;
			cout<<"ENTER THE NAME OF THE PRODUCT: ";
			cin>>pname;
		}
		
		void putProduct(){
			cout<<"Name: "<<pname<<", Rate: "<<rate<<", Product Id: "<<productId<<", Stock: "<<stock<<", GST: "<<gst<<endl;
		}
		
		int search(int id){
			return id==productId;
		}
		
		int searchByGST(int gt){
			return gt==gst;
		}
		
		void sale(int nop){
			if(nop>stock){
				cout<<"NOT IN STOCK..."<<endl;
			}else
			{
				int bill = nop*rate;
				int g = (bill*gst)/100 ;
				int tbill = bill + g ;
				stock=stock-nop;
				cout<<"TOTAL AMOUNT YOU HAVE TO PAY(With GST): "<<bill<<endl;
			}
		}
};
