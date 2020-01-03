#include<iostream>
using namespace std;

int main()
{
	int  rup;
	int fiv_hun,two_hun,hun,fif,twe,ten,five,two,one;
	
	cout<<"enter rupees";
	cin>>rup;
	
	fiv_hun=rup/500;
	
	two_hun=(rup-fiv_hun*500)/200;
	
	hun=(rup-fiv_hun*500-two_hun*200)/100;
	
	fif=(rup-fiv_hun*500-two_hun*200-hun*100)/50;
	
	twe=(rup-fiv_hun*500-two_hun*200-hun*100-fif*50)/20;
	
	ten=(rup-fiv_hun*500-two_hun*200-hun*100-fif*50-twe*20)/10;
	
	five=(rup-fiv_hun*500-two_hun*200-hun*100-fif*50-twe*20-ten*10)/5;
	
	two=(rup-fiv_hun*500-two_hun*200-hun*100-fif*50-twe*20-ten*10-five*5)/2;
	
	one=(rup-fiv_hun*500-two_hun*200-hun*100-fif*50-twe*20-ten*10-five*5-two*2)/1;
	
	cout<<fiv_hun<<"   fivehundred notes "<<endl<<two_hun<<"   twohundred notes"<<endl
			<<hun<<"   hundred notes"<<endl<<fif<<"   fifty notes"<<endl
			<<twe<<"    twenty notes"<<endl<<ten<<"     ten notes"<<endl
			<<five<<"   five   coins"<<endl<<two<<"      two coins"<<endl
			<<one<<"     one coins ";
}
