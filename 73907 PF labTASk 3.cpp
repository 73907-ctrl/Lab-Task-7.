#include<iostream>
using namespace std;
int main ()
{
int marks;
cout<<"enten marks(0-100):";
cin>>marks;
switch(marks/10)
{
	case 10:
		case9:cout<<"grade:A";
		break;
		case 8:cout<<"grade:B";
		break;
		case 7:cout<<"grade:C";
		break;
		case 6:cout<<"grade:D";
		break;
		default:cout<<"grade:F";
	}
return 0;
}