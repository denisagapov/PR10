#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	fstream f("f.txt");
	fstream g("g.txt");
	fstream h("h.txt");
	string s0;
	string s1;
	string s3;
	while (f.peek() != EOF)
	{
		getline(f, s0);
		h << s0;
	}
	while (g.peek() != EOF)
	{
		getline(g, s1);
		f << s1;
	}
	while (h.peek() != EOF)
	{
		getline(f, s3);
		g << s3;
	}
	f.close();
	g.close();
	h.close();
	system("pause");
	return 0;
}