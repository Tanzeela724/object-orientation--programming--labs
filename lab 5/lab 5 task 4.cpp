#include<iostream>
using namespace std;
class printer{
	public:
		void print_document(){
			cout<<" printing document..";
			
		}
};
class scanner{
	public:
		void scan_document(){
			cout<<"scanning document..";
			
		}
};
class photocopier:public printer,public scanner{
	
	public:
		void photocopy(){
			cout<<"photocopying document...";
	
		}
};
int main(){
	photocopier obj;
	obj.print_document();
	obj.scan_document();
	obj.photocopy();
}
