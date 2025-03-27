#include<iostream>
#include<stack>
#include<string>
using namespace std;


int main()
{
	int n;	
	stack<int> s;
	string a;
	int x;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a == "push")
		{
			cin >> x;
			s.push(x);

		}
		else if (a == "pop")
		{
			if (s.empty())
				cout << "-1" << "\n";
			else
			{
				cout << s.top() << "\n";
				s.pop();
			}

		}
		else if (a == "size")
		{
			cout << s.size() << "\n";

		}
		else if (a == "top")
		{

			if (s.empty())
				cout << "-1" << "\n";
			else	cout << s.top()<<"\n";

		}
		else if (a == "empty")
		{
			if (s.empty())
			{
				cout << "1" << "\n";
			}
			else cout << "0" << "\n";
		}
	}

}
