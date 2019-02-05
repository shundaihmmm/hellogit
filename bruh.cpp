#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{
int number = 0;
vector<char> v;
vector<int> v1 = {10, 14, 32, 64, 16};
v.push_back('p');
v1.pop_back();
v.push_back('i');
v1.pop_back();
for (int i = 0; i<4; i++)
{

	v1.push_back(0);
	cout <<"x";
}
for (int i = 0; i <v1.size(); i++)
	cout << v1[i]<< "";
cout << "\n\n\n\n";
cout <<"Hello \n";

for (int i=0; i<v1.size(); i++)
	v1.pop_back();

for (int i=0; i<10; i++)
{
	number = i*i;
	v1.push_back(number);
}
for (int i = 0; i <v1.size(); i++)
	cout << v1[i]<< "\n";

cout <<"yeet \n";
	
}
