#include<iostream>
#include<deque>
#include<string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	deque<int> d;
	
	int x;
	cin >> x;
	int a;
	int cnt = 0;
	int point;
	for (int i = 0; i < n; i++)
	{
		d.push_back(i + 1);

	}
	for (int i = 0; i < x; i++)
	{
		cin >> a;
		while (1)
		{
			for (int i = 0; i < d.size(); i++)
			{
				if (d[i] == a)
				{
					 point= i;

				}

			}
			if (d.front() == a)
			{
				d.pop_front();
				break;
			}

				if (d.size()-point>=point)
				{
					d.push_back(d.front());
					d.pop_front();
					cnt++;

				}
				else if (d.size() -point<point)
				{
					d.push_front(d.back());
					d.pop_back();
					cnt++;
				}
				
			}
			

		}
cout << cnt;
	}
	
