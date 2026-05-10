#include<iostream>
using namespace std;
class product{
	private:
		string name;
		double price;
		int quantity;
	public:
	void setName(string n)	{
		if (n.empty()){
			cout<<"error:name cannot be empty!";
			
		}else{
			name=n;
		}
	}
	void setPrice(double p){
		if(p<=0){
			cout<<"error :price must be greater than 0!";
		}else{
			price=p;
			
		}
	}
	void setQuantity(int q){
		if(q<0){
			cout<<"error:quality cannot be negative!";
	}	else{
		  quantity=q;
			
		}
	}
	string getName(){
		return name;
		
	}
	double getPrice(){
		return price;
		
	}
	int getQuantity(){
		return quantity;
		
	}	
};
int main(){

	product p;
	p.setName("") ;
	p.setPrice(-50);
	p.setQuantity(-2);
	p.setName(" laptop");
	p.setPrice(1200.50);
	p.setQuantity(5);
	cout<<"product:"<<p.getName()<<endl;
	cout<<"price: $"<<p.getPrice()<<endl;
	cout<<"quantity:"<<p.getQuantity()<<endl;   
}
	
	

	
	
	



