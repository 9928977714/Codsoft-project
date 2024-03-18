#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() 
{
srand(time(0)); //Seed the random number generator with the current time
int secretNumber= rand() %500+1;// generator number between 1 to 100
int guess; 
int attempts =0;
string name;
cout<<"Lets Start the game"<<endl;
cout <<" Hello Buddy ! Name Please"<<endl;
cin>>name;
cout<<"you're thinking of a number between 1 and 500.And you want me try to guess it. Let me give it a shot"<<endl;
do
{
	cout<<" Enter Your Number";
	cin>>guess;
	attempts++;
	if(guess<secretNumber)
	{
		cout<<"too low! try again!"<<endl;
	}
	else if (guess>secretNumber)
	{
		cout<<"too high! try again!"<<endl;
	}
	else{
	
		cout<<" Congrats! You Won"<<secretNumber<<"in"<<attempts<<"attempts."<<endl;  
	
	}
}   while(guess!=secretNumber);
  
    return 0;
    
}



