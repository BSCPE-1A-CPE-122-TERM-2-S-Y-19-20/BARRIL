//Implement Logic

#include <iostream>
using namespace std;

class logic 
{
	private:
		int x,y,number;
	
		
	public:
		void input();
		void gates();
};

int main()
{
	for(;;)
	{
	
	logic c;
	c.input();
	c.gates();
	}
}

void logic :: input()
{
	 x=0;
	 y=0;
		for(;;)
		{
				cout<<"\n\n\n--Input two binary number: --\n\t";
				
		 cin>>x>>y;
		
		if(x>=2)
			{	
				cout<<"   "<<x<<" Is NOT a BINARY Number!\n\n";
				continue;
			}
		if(y>=2)
			{
				cout<<"   "<<y<<" Is NOT a BINARY Number!\n\n";
				continue;
			}
			else
			{
				break;
			}
		}
}

void logic :: gates()
{
		cout<<"\n--Choose your desired logic gate? --\n\n";
		cout<<"  "<<"[1] and    [2] or   [3] nand   [4] nor\n\n";
		cout<<"  "<<"[5] not    [6] xor  [7] xnor\n\n";
		cout<<"Logic gate to use: ";
		
	for(;;)
	{
	
		cin>>number;
	
		if(number==1)
		{
			cout<<"\n\t"<<x<<"  &  "<<y<<" = "<<x*y;
			
			break;
			
		}
		
		if(number==2)
		{
			if(x==1||y==1)
			{
				cout<<"\n\t"<<x<<" | "<<y<<" = 1";
				break;
			}
		
			else
			{
				cout<<"\n\t"<<x<<" | "<<y<<" = 0";
				break;
			}	
		}			
	
	if(number==3)
		{
			
			if(x==0||y==0)
			{
				cout<<"\n\t"<<x<<" !& "<<y<<" = 1";
				break;
			}
			
			else
			{
				cout<<"\n\t"<<x<<" !& "<<y<<" = 0";
				break;
			}
			
		}
		
		if(number==4)
		{
			
			if(x==1||y==1)
			{
				cout<<"\n\t"<<x<<" !| "<<y<<" = 0";
				break;
			}
			
			else
			{
				cout<<"\n\t"<<x<<" !| "<<y<<" = 1";
				break;
			}
		}
		
		if(number==5)
		{
			for(;;)
			{
				if(x==1)
				{
					cout<<"x !x = 0\n";
					break;
				}
				else
				{
					cout<<"x !x = 1\n";
					break;
				}				
			}
			for(;;)
			{
			
				if(y==1)
				{
					cout<<"y !y = 0\n";
					break;
				}
				else
				{
					cout<<"y !y = 1\n";
					break;
				}				
			}
			break;
		}
		
		if(number==6)
		{
			
				if(x==y)
				{
				cout<<"\n\t"<<x<<" ^ "<<y<<" = 0";
				break;
				}
			else
			{
				cout<<"\n\t"<<x<<" ^ "<<y<<" = 1";
				break;
			}
		}
		
		if(number==7)
		{
			
				if(x==y)
				{
				cout<<"\n\t"<<x<<" !^ "<<y<<" = 1";
				break;
				}
			else
			{
				cout<<"\n\t"<<x<<" !^ "<<y<<" = 0";
				break;
			}
		}
	}
}
