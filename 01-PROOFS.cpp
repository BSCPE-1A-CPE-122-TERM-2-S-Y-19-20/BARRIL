//Proof (Simple proving using logic)

#include <iostream>
using namespace std;

class Proof
{
	private:
		int choice;
		
	public:
		void input();
		void conjunction();
		void disjunction();
		void negation();
		void conditional();
		void biconditional();
};

int main()
{
	for(;;)
	{	
		Proof c;
		c.input();
	}
}

void Proof :: input()
 {
 	cout<<"\n\n  --Select a number to show simple proving using table--";
 	cout<<"\n\n    [1] Conjunction    [2] Disjunction    [3]Negation\n";
 	cout<<"    [4] Conditional    [5]Biconditional\n";
	cout<<"Choice: ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			conjunction();
			break;
		case 2:
			disjunction();
			break;
		case 3:
			negation();
			break;
		case 4:
			conditional();
			break;
		case 5:
			biconditional();
			break;
		default:
			cout<<"Invalid choice";
	}
 }
 
 void Proof :: conjunction()
 {
 	cout<<"\n| P | Q || P^Q |"<<endl;
	cout<<"| T | T ||  T  |"<<endl;
	cout<<"| T | F ||  F  |"<<endl;
	cout<<"| F | T ||  F  |"<<endl;
	cout<<"| F | F ||  F  |"<<endl;
}

void Proof :: disjunction()
{
	cout<<"\n| P | Q || PvQ |"<<endl;
	cout<<"| T | T ||  T  |"<<endl;
	cout<<"| T | F ||  T  |"<<endl;
	cout<<"| F | T ||  T  |"<<endl;
	cout<<"| F | F ||  F  |"<<endl;
}

void Proof :: negation()
{
	cout<<"\n| P | Q || ~P | ~Q |"<<endl;
	cout<<"| T | T ||  F |  F |"<<endl;
	cout<<"| T | F ||  F |  T |"<<endl;
	cout<<"| F | T ||  T |  F |"<<endl;
	cout<<"| F | F ||  T |  T |"<<endl;
}

void Proof :: conditional()
{
	cout<<"\n| P | Q || P-->Q |"<<endl;
	cout<<"| T | T ||   T   |"<<endl;
	cout<<"| T | F ||   F   |"<<endl;
	cout<<"| F | T ||   T   |"<<endl;
	cout<<"| F | F ||   T   |"<<endl;
}

void Proof :: biconditional()
{
	cout<<"\n| P | Q || P<->Q |"<<endl;
	cout<<"| T | T ||   T   |"<<endl;
	cout<<"| T | F ||   F   |"<<endl;
	cout<<"| F | T ||   F   |"<<endl;
	cout<<"| F | F ||   T   |"<<endl;
}

