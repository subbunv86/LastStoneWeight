// LastStoneWeight.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	int lastStoneWeight(vector<int>& stones) {
		sort(stones.begin(), stones.end(), greater<int>());
		while ((stones[0] >= 1) && (stones.size() > 1))
		{
			stones.push_back(stones[0] - stones[1]);
			stones.erase(stones.begin(), stones.begin() + 2);
			sort(stones.begin(), stones.end(), greater<int>());
		}
		return stones[0];
	}
};
int main()
{
	vector<int> stone = { 2,7,4,1,8,1 };
	Solution slnObj;
	cout << slnObj.lastStoneWeight(stone);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
