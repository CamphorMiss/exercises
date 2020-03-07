// write your code here cpp
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	string str, name;
	while (getline(cin, str))
	{
		getline(cin, name);
		//接下来把抄送列表分割
		vector<string>v;
		for (size_t i = 0; i<str.size(); i++)
		{
			if (str[i] == '\"'){
				v.push_back(str.substr(i + 1, str.find('\"', i + 1) - i - 1));
				i = str.find('\"', i + 1) + 1;
			}
			else{
				if (str.find(',', i) ){
					v.push_back(str.substr(i, str.size() - i));
					i = str.size();
				}
				else{//没到结束
					
						string ret=str.substr(i, str.find(',', i) - i );
						v.push_back(ret);
					i = str.find(',', i);
				}
			}
		}
		cout << ((find(v.begin(), v.end(), name) != v.end()) ? "Ignore" : "Important!") << endl;
	}
	return 0;
}