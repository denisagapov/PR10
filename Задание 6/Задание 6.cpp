#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	ifstream in("f.txt");
	ofstream gout("g.txt"), hout("h.txt");
	int n;
	while (in.peek() != EOF)
	{
		in >> n;
		if (n % 2==0)
		{
			gout << n << " ";
		}
		else
		{
			hout << n << " ";
		}
	}
	in.close();
	gout.close();
	hout.close();
	system("pause");
	return 0;
}