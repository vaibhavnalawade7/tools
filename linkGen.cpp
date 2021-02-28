#include<iostream>
#include<string>

using namespace std;

int main()
{
	//Declaration Of Veraiables string link, link1, int i,
	string link ="http://epaper.lokmat.com/main-editions/Mumbai%20Main%20/2021-";
	string link1="/1";
	int i, j;
	
	//Link Generetion Logic
	//Month Generation Logic
	for(j=3;j<=12;j++)
	{
		//Day Generation Logic
		for(i = 1;i <= 31; i++)
		{
			if(j<=9)
			{
				//Printing Results
				cout<<link<<"0"<<j<<"-"<<i<<link1<<"\n";
				
			}
			else
			{
				//Printing Results
				cout<<link<<j<<"-"<<i<<link1<<"\n";
				
			}
		}
		
		//Empty Line Logic
		if(i=31)
		{
			cout<<"\n";
		}
	}
	
	return 0;
}
