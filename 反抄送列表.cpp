// write your code here cpp
#include<iostream>//这不就是抄送列表的另一个版本吗........
#include<string>
#include<vector>
using namespace std;
int main()
{
	int n = 0;
	while (cin >> n)
	{
		string str;
		vector<string>v(n);
		getchar();
		for (int i = 0; i<n; i++){
			getline(cin, v[i]);
			if (v[i].find('\0') != v[i].npos || v[i].find(',') != v[i].npos)//如果包含则需要处理
			{
				str.push_back('"');
				str += v[i];
				str.push_back('"');
			}
			str += ", ";
		}
		cout << str.substr(0, str.size()) << endl;
	}
	return 0;
}