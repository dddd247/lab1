#include<iostream>
using namespace std;

int main()
{
    int n;

	cout <<"Please inpput a number:"<< endl;
    cin >> n;
	cout << "your input is:" << n << endl;
	while(n != 1)
	{
		if(n%2==1)
		{
			cout << "you get"<< 3*n+1 << endl;
		}
		else
		{
			cout << "you get:" << n/2 << endl;
		}
		system("pause");
		cout <<"Please inpput a number:"<< endl;
        cin >> n;
	    cout << "your input is:" << n << endl;
	}

	system("pause");



}
