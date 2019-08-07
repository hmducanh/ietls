/*input
1
a^b
*/
/********************************
 *        GGGGG      GGGGG       *
 *       G          G            *
 *       G  GGG     G  GGG       *
 *       G   GG     G   GG       *
 *        GGGGG      GGGGG       *
 *                               *
 ********************************/
#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>
using namespace std;
#define int long long

int a[1001], cnt, point, pos;
vector < string > s, v;
vector < string > :: iterator it;
string t;
signed main()
{
	ifstream file1("ielts.txt");
	while(getline(file1, t))
		s.push_back(t);
	ifstream file2("learned.txt");
	while(getline(file2, t))
		v.push_back(t);
	srand(time(NULL));
	pos = s.size() / 2 - v.size();
	cnt = pos;
	point = cnt;
	while(cnt)
	{
		int res = rand() % s.size();
		if(res % 2)
			--res;
		if(!a[res] && find(v.begin(), v.end(), s[res]) == v.end())
		{
			a[res] = 1;
//			if(cnt != pos)
//				getch();
			cout << s[res] << endl;
			getline(cin, t);
//			getch();
			if(t != s[res + 1])
			{
				cout << "Wrong : " << s[res + 1] << endl;	
				point--;
			}
			else
				v.push_back(s[res]);
			--cnt;
		}
	}
	cout << point << endl;
	freopen("learned.txt", "w", stdout);
	for(int i=0;i<v.size();i++)
		cout << v[i] << endl;
}