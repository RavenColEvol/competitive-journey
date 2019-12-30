#include<iostream>
#include<string>
#include<cmath>
#include <iomanip>
using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;
	int net_a = 0, net_b = 0;
	int count_undefined = 0;
	for(int i = 0; i < a.size(); i++)
	{
		if(a[i] == '+')
			net_a += 1;
		else
			net_a -= 1;
	}
	for(int i = 0;i < b.size(); i++)
	{
		if(b[i] == '+')
			net_b += 1;
		else if(b[i] == '-')
			net_b -= 1;
		else
			count_undefined += 1;
	}
	if(net_b == net_a && count_undefined == 0)
		cout << fixed << setprecision(12) << 1.0;
	else if(count_undefined < (net_a - net_b))
		cout << fixed << setprecision(12) << 0.0;
	else{
		//int answer = net_a - net_b;

		cout << fixed << setprecision(12) << count_undefined / (float) pow(2, count_undefined);
	}
	cout << endl;
	return 0;
}