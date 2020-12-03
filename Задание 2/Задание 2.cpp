#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	ifstream in("f.txt");
	ofstream out("g.txt");
	char symbol;
	while (in.peek() != EOF)
	{
		in.get(symbol);
		if (symbol == 'C')
			out << "C++";
		else
			out << symbol;
	}
	in.close();
	out.close();
	system("pause");
	return 0;
}