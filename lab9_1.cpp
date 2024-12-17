#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	int i=1;
	double pre,terest,tal,aym,ew,x;
	cout << "Enter initial loan: ";
	cin >> pre;
	cout << "Enter interest rate per year (%): ";
	cin >> x;
	cout << "Enter amount you can pay per year: ";
	cin >> aym;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	while(pre > 0){
    	cout << fixed << setprecision(2); 
    	cout << setw(13) << left << i++; 
    	cout << setw(13) << left << pre;
    	terest = (x*pre)/100	;
    	cout << setw(13) << left << terest;
    	tal = pre+terest;
    	cout << setw(13) << left << tal;
    	if(tal<aym) aym = tal;
    	cout << setw(13) << left << aym;
    	ew = tal-aym;
    	cout << setw(13) << left << ew;
    	pre = ew;
    	cout << "\n";	
	}

}
