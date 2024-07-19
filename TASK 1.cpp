#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
	cout<< "\n\t\t **Welcome to NO. Guessing Game**\n"<<endl;
	cout<<"\n\t\t**Guess No. btw 1 to 100**";
	cout<<"\n\t\t___Let's start game__"<<endl;
	
	srand(time(0));
	int randNumber = (rand()%100)+1;
	
	cout<<"\n**You will have five chances to guess correct number**\n";
	int chanceLeft=5;
	int playerInput;
	
	for(int i=1;i<=5; i++)
	{
		cout<<"\n--Enter Number:";
		cin>>playerInput;
		
		if(playerInput == randNumber)
		{
			cout<<"\nCongrats!!. You have guessed the right number\n";
			cout<<"\nThanks for playing.Have a nice day--SHIVAM SINGH";
		break;
		}
		else
		{
			if(playerInput>randNumber)
			{
				cout<<"\n""Insert a smaller Number. Try Again"""<<endl;
			}
			else
			{
				cout<<"\n""[Insert a Larger Number. Try Again]"""<<endl;
			}
		}
		chanceLeft--;
		cout<<"\n(Chance Left to guess the Random Number:"<<chanceLeft<<")"<<endl;
		
		if(chanceLeft==0)
		{
			cout<<"\n Sorry your chance has been finished to guess the random number\n"<<endl;
			cout<<"The random Number was: "<<randNumber<<endl;
			cout<<"Thanks for playing--SHIVAM SINGH";
			
		}
	}
	cout<<"\n";
	return 0;
}
