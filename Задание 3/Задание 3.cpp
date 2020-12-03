#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	ifstream in("f.txt");
	ofstream out("g.txt");
	char symbol;
	cout << "Vvedite bukvu: ";
	cin >> symbol;
	char s[100];
	int k = 0;
	while (in.peek() != EOF)
	{
		in.getline(s, sizeof(s));
		if (s[0] == symbol)
			k++;
	}
	out << k;
	in.close();
	out.close();
	system("pause");
	return 0;
}