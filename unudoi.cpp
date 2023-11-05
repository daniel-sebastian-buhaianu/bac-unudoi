#include <iostream>
#include <cstring>
#define LGMAX 51
using namespace std;
int main()
{
	char t[LGMAX], aux[LGMAX];
	int lg, i;
	cout << "t = "; cin >> t;
	for (lg = strlen(t), i = 0; i < lg; i++)
		if (t[i]-'0' <= 2)
		{
			strcpy(aux, t+i+1);
			t[i+1] = 0;
			if (t[i] == '1')
				strcat(t, "unu");
			else
				strcat(t, "doi");
			strcat(t, aux);
			i += 3, lg += 3;
		}
	cout << t;
	return 0;
}
