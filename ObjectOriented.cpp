/*Memory Allocation IN C++.*/

#include<iostream>
#include<string> 
using namespace std;

class book{
	private:
		int bookid[100];
		int bookprice[100];
		int counter;
		public:
			void getprice(void);
			void setprice(void);
			void initcounter(void) {counter= 0 ;}
		    void displayprice();
			
};
void book::setprice(void){
	cout << "The ID Of Book no " <<counter +1 <<endl;
	cin  >>  bookid[counter];
	cout << endl;
    cout << "The price Of Book no " <<counter +1<<endl;
	cin  >>  bookprice[counter];
	cout << endl;
	counter++;
}
void book::displayprice(void){
//	cout << "The priceOf Book Is " << bookprice[i]<<is <<endl;

for(int i=0; i<counter; i++){
		cout << "The Id Of Book Is  : "<< bookid[i]<<"is"<<endl;
		cout << "The price od Book Is:"<<bookprice[i]<<"is"<<endl;
}
}
int main(){
	book b1;
	b1.setprice();
	b1.setprice();
	b1.setprice();		
	b1.displayprice();
} 
