#include<iostream>
using namespace std;
int main()
{
int bal,w,d;cout<<"enter balance "<<endl;
cin>>bal;
int c;cout<<"choose 1 for wIthdraw 2 for deposite"<<endl;
cin>>c;
switch(c)
{
	case 1:
		
			cout<<"you want to withdraw "<<endl;
			int w;
			cout<<"enter withdraw ammount "<<endl;
			cin>>w;
			bal=bal-w;
			cout<<"you withdraw RS"<<w<<endl;
			cout<<"now your current balance is "<<bal;
			break;
			case 2:
				cout<<"you want to depoisite "<<endl;
				cout<<"enter deposite ammount";
				int d;
				cin>>d;
				bal=bal+d;
				cout<<"you deposite RS"<<d<<endl;
				cout<<"now yor net balance is"<<endl;
				cout<<"RS"<<bal;
				break;
				default:
					cout<<"you choose worng ";
					cout<<endl<<"your balance is";
					cout<<"RS"<<bal;
		}
	
				return 0;
		
}
