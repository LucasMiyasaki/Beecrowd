// 08-11-2022

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int t1, t2, t3;
	
	cin >> t1 >> t2 >> t3;
	
	if(t1>t2 && t2<=t3)
		cout << ":)" << endl;
		
	if(t1<t2 && t2>=t3)
		cout << ":(" << endl;
		
	if(t1<t2 && t2<t3 && (t2-t1)>(t3-t2))
		cout << ":(" << endl;
		
	if(t1<t2 && t2<t3 && (t2-t1)<=(t3-t2))
		cout << ":)" << endl;
		
	if(t1>t2 && t2>t3 && (t1-t2)>(t2-t3))
		cout << ":)" << endl;
		
	if(t1>t2 && t2>t3 && (t1-t2)<=(t2-t3))
		cout << ":(" << endl;
	
	if(t1==t2 && t3>t2)
		cout << ":)" << endl;
		
	if(t1==t2 && t3<t2)
		cout << ":(" << endl;
		
	if(t1==t2 && t3==t2)
		cout << ":(" << endl;
	
	return 0;
}
