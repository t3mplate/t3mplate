#include <iostream>

using namespace std;

bool F(int x, int p){
	if (x > 31 && p == 3)
		return true;
	else if (x > 31 && p != 3)
		return false;
	else if (x < 31 && p == 3)
		return false;
	if (p % 2 == 0)
		return F(x + 1, p + 1) || F(x * 3 + 1, p + 1);
	else 
		return F(x + 1, p + 1) && F(x * 3 + 1, p + 1);
}

int main(){
	for (int i = 1; i < 32; ++i){
		if (F(i, 1) == true)
			cout << i << endl;
	}
	return 0;
}
