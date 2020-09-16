#include<iostream>
#include<conio.h>
using namespace std;

void calculateBMI()
{
	system("cls");
	double weight;
	double height;
	double bmi;
	
	cout<<endl<<endl;
	cout<<"Enter Your Weight (in Kilograms) : ";
	cin>>weight;
	cout<<endl;
	cout<<"Enter Your Height (in Meters Note : 100cm = 1m) : ";
	cin>>height;
	
	bmi=weight/(height*height);
	cout<<endl<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<"Your Body Mass Index (BMI) is "<<bmi<<endl;
	cout<<"------------------------------------------------"<<endl;
	
	if(bmi<18.5)
		cout<<"You are Underweight :(";
	else if(bmi>=18.5 && bmi<=25)
		cout<<"You are Perfectly Healthy :)";
	else if(bmi>25 && bmi <50)
		cout<<"You are Overweight :(";
	else
		cout<<"Bhai To iss Duniya ka insaan Nahi Hai ....Tada";
	cout<<endl<<"-------------------------------------------";
	cout<<"\nPress any key to go back to Menu...";
	getch();
}

void instructions()
{
	system("cls");
	cout<<"Instructions";
	cout<<"\n----------------";
	cout<<"\nBMI is less than 18.5 : You are Underweight.";
	cout<<"\nBMI is between 18.5 and 25 (inclusive) : You are Perfectly Healthy.";
	cout<<"\nBMI is Greater than 25 : You are Overweight.";
	cout<<"\n\n\nPress any key to go back to Menu...";
	getch();
}

int main()
{
	do
	{
		system("cls");
		cout<<" --------------------------------------------------------- "<<endl;
		cout<<" |                    BMI Calculator                     | "<<endl;
		cout<<" ---------------------------------------------------------"<<endl<<endl;
		
		cout<<"1. Calculate BMI"<<endl;
		cout<<"2. BMI Rules"<<endl;
		cout<<"3. Quit"<<endl<<endl;
		
		cout<<"Select Option : ";
		char op=getche();
		
		if(op=='1')
			calculateBMI();
		else if(op=='2')
			instructions();
		else if(op=='3')
			exit(0);
		
		
	}while(1);
	
	return 0;
}
