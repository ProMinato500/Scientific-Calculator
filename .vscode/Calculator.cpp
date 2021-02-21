#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
int main ()
{
    float a,b,c,d,e,f,g,PI;
    int s,i;
    char p;
    cout<<endl;
    cout<<"******************** Calculator ******************"<<endl;
    cout<<"************************ By **********************"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    do
    {	clrscr();
	cout<<"Operations: "<<endl;
	cout<<"--------------------------------------------------"<<endl;
	cout<<"1: Division\t\t 2: Multiplication"<<endl;
	cout<<"3: Subtraction\t\t 4: Addition"<<endl;
	cout<<"5: Exponent\t\t 6: Square Root"<<endl;
	cout<<"7: Sin\t\t\t 8: Cos"<<endl;
	cout<<"9: Tan\t\t\t 10: Inverse of Sin"<<endl;
	cout<<"11: Inverse of Cos\t 12: Inverse of Tan"<<endl;
	cout<<"13: Log\t\t\t 14: Log with base 10"<<endl;
	cout<<"15: Factorial\t\t 16: Gamma"<<endl;
	cout<<"17: Beta"<<endl;
	cout<<"Enter the function that you want to perform : "<<endl;
	cin>>s;
	PI=3.14159265;
	switch(s)
	{
	    case 1:
		cout<<"Enter Dividend : ";
		cin>>a;
		cout<<"Enter Divisor : ";
		cin>>b;
		if(b==0)
		    cout<<"Undefined";
		else
		    cout<<"Division = "<<a/b<<"\n";
		break;
	    case 2:
		cout<<"Enter 1st number : ";
		cin>>a;
		cout<<"Enter 2nd number : ";
		cin>>b;
		cout<<"Multiplication = "<<a*b<<"\n";
		break;
	    case 3:
		cout<<"Enter 1st number : ";
		cin>>a;
		cout<<"Enter 2nd number : ";
		cin>>b;
		cout<<"Subtraction = "<<a-b<<"\n";
		break;
	    case 4:
		cout<<"Enter 1st number : ";
		cin>>a;
		cout<<"Enter 2nd number : ";
		cin>>b;
		cout<<"Addition = "<<a+b<<"\n";
		break;
	    case 5:
		cout<<"Enter the number : ";
		cin>>a;
		cout<<"Enter the exponent : ";
		cin>>b;
		cout<<"Exponent = "<<pow(a,b)<<"\n";
		break;
	    case 6:
		cout<<"Enter the number : ";
		cin>>a;
		cout<<"Square Root = "<<sqrt(a)<<"\n";
		break;
	    case 7:
		cout<<"Enter the radian : ";
		cin>>a;
		cout<<"Sin = "<<sin(a)<<"\n";
		break;
	    case 8:
		cout<<"Enter the radian : ";
		cin>>a;
		cout<<"Cos = "<<cos(a)<<"\n";
		break;
	    case 9:
		cout<<"Enter the radian : ";
		cin>>a;
		cout<<"Tan = "<<tan(a)<<"\n";
		break;
	    case 10:
		cout<<"Enter the number : ";
		cin>>a;
		cout<<"Inverse of Sin = "<<asin(a)*180.0/PI<<"\n";
		break;
	    case 11:
		cout<<"Enter the number : ";
		cin>>a;
		cout<<"Inverse of Cos = "<<acos(a)*180.0/PI<<"\n";
		break;
	    case 12:
		cout<<"Enter the number : ";
		cin>>a;
		cout<<"Inverse of tan = "<<atan(a)*180.0/PI<<"\n";
		break;
	    case 13:
		cout<<"Enter the number : ";
		cin>>a;
		cout<<"Log = "<<log(a)<<"\n";
		break;
	    case 14:
		cout<<"Enter the number : ";
		cin>>a;
		cout<<"Log with base 10 = "<<log10(a)<<"\n";
		break;
	    case 15:
		cout<<"Enter the number : ";
		cin>>a;
		b=1;
		for(i=1;i<=a;i++)
		b=b*i;
		cout<<"Factorial of "<<a<<" = "<<b<<"\n";
		break;
	    case 16:
		cout<<"Enter the number : ";
		cin>>a;
		b=1;
		for(i=1;i<a;i++)
		b=b*i;
		cout<<"Gamma of "<<a<<" = "<<b<<"\n";
		break;
	    case 17:
		cout<<"Enter 1st number : ";
		cin>>a;
		cout<<"Enter 2nd number : ";
		cin>>b;
		c=1;
		for(i=1;i<a;i++)
		c=c*i;
		d=1;
		for(i=1;i<b;i++)
		d=d*i;
		e=a+b;
		f=1;
		for(i=1;i<e;i++)
		f=f*i;
		g=((c*d)/f);
		cout<<"Beta("<<a<<","<<b<<") = "<<g<<endl;
		break;
	    default:
		cout<<"Wrong Input"<<"\n";
	}
	cout<<"Do you want to continue: y/n"<<"\n";
	    p = getchar();
	    getchar();
    } while( p == 'y'||p == 'Y' );
return 0;
}
