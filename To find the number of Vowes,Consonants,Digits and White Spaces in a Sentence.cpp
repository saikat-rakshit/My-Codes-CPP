//To find the number of Vowes,Consonants,Digits and White Spaces in a Sentence.
#include<iostream>
using namespace std;
int main()
{
	char line[200];
	int vowel,consonant,digit,WS;
	
	cout<<"To find the number of Vowes,Consonants,Digits and White Spaces in a Sentence."<<endl;
	cout<<"Enter a Sentence :> \n";
	cin.getline(line,200);
	for(int i=0;line[i]!='\0';i++)
	{
		if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' || line[i]=='A' || line[i]=='E' || line[i]=='I' || line[i]=='O' || line[i]=='U')
		   {
		   	vowel++;
		   }
		   else if((line[i]>='a' && line[i]<='z')||(line[i]>='A' && line[i]<='Z'))
		   {
		   	consonant++;
		   }
		   else if(line[i]>='0' && line[i]<='9')
		   {
		   	digit++;
		   }
		   else if(line[i]=' ')
		   {
		   	WS++;
		   }
	}
	cout<<"Vowels: "<<vowel<<endl;
	cout<<"Consonants: "<<consonant<<endl;
	cout<<"Digits: "<<digit<<endl;
	cout<<"White Spaces: "<<WS<<endl;
	
	return 0;
}
