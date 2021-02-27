#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> vec;
	int x;
	int sum = 0;
	cout << "Please enter the numbers: \n\n";
	while (cin>>x){
		vec.push_back(x);
	}
	for (int i = 0; i != vec.size(); ++i){
		cout << vec[i] << ' ' ;}
	int numtosum;
	cout << "How many numbers would you like to sum? \n\n";
	cin >> numtosum;
}