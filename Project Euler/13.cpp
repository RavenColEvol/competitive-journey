#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	const unsigned int MinDigits = 50 + 10;
  
  	std::vector<unsigned int> sum(MinDigits, 0);
	
	int n;
	cin >> n;

	while(n--)
	{
		string s;
		cin >> s;

		vector<int> add;
		for(auto i = s.rbegin(); i!=s.rend(); i++)
		{
			add.push_back(*i - '0');
		}
		add.resize(sum.size(),0);

		for (unsigned int i = 0; i < add.size(); i++)
	    {
	      sum[i] += add[i];

	      if (sum[i] >= 10)
	      {
	        sum[i + 1]++; // sum[i + 1] = sum[i] % 10
	        sum[i] -= 10; // sum[i]    %= 10
	      }
	    }
	}

	auto i = sum.rbegin();
	while (*i == 0)
		i++;

	  
	unsigned int numDigits = 10;
	while (numDigits-- > 0)
		cout << *i++;


	return 0;
}