#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric>
#include <list>
#include <set>
#include <array>

using namespace std;

bool sort_descending(int a, int b) {
	return a > b;
}

void display(string value) {
	cout << value << ' ';
}

int total_even(int accumulator, int current_val) {
         if (current_val % 2 == 0)
                 accumulator += current_val;
                 return accumulator;
}


int main()
{
	cout << "Algorithm Practice\n\n";

	// count() algorithm
//	vector<char> vect { 'h', 'e', 'l', 'l', 'o' };
//	array<char, 5> arr { 'h', 'e', 'l', 'l', 'o' };
//	list<char> lst { 'h', 'e', 'l', 'l', 'o' };
//	multiset<char> mlti { 'h', 'e', 'l', 'l', 'o' };
//	string str = "hello";

//	int c;

//	c = count(vect.begin(), vect.end(), 'l');
//	cout << c << ", ";
//	c = count (arr.begin(), arr.end(), 'l');
//	cout << c << ", ";
//	c = count(lst.begin(), lst.end(), 'l');
//	cout << c << ", ";
//	c = count(mlti.begin(), mlti.end(), 'l');
//	cout << c << ", ";
//	c = count(str.begin(), str.end(), 'l');
//	cout << c << endl;
//
//	// 14

//	vector<int> nums { 5, 7, 34, 6, 1, 890, 17 };

//	sort(nums.begin(), nums.end());
//
//	c = count(nums.begin(), nums.end(), 6);
//	cout << c;

//	c = count(nums.begin() + 3, nums.end(), 6);
//	cout << c;

//	auto iter = find(nums.begin(), nums.end(), 6);
//	if (iter == nums.end()) {
  //  		cout << "Value not found.\n";
//	}
//	else {
  //  		cout << "Value found.\n";
//	}

//	sort(nums.begin(), nums.end(), sort_descending);

	// 19
//	vector<double> nums { 6.0, 4.5, 34.1, 6.7, 6 };
//	int c = count(nums.begin(), nums.end(), 6);
//	cout << "\n\n" << c << endl;
	// 
//	set<string> states { "OR", "WA", "CA", "AK", "HI" };
//	for_each(states.begin(), states.end(), display);

//	list<int> target { 1, 2, 3, 4, 5 };
//	auto iter = find(target.begin(), target.end(), 3);
//	if (iter == target.end()) {
  //  		cout << "Not Found!\n";
//	}

//	vector<int> target { 1, 2, 3, 4, 5 };
//	set<int> to_find { 3, 4, 5, 6 };
//	auto iter = search(target.begin(), target.end(),
  //                 to_find.begin(), to_find.end());
//	if (iter == target.end()) {
  //  		cout << "Not Found!\n";
//	}


	//

//	string cc_number = "4012-881022-88810";
//	replace(cc_number.begin(), cc_number.end(), '-', ' ');
//	cout << cc_number << endl;

//	vector<int> scores { 89, 34, 78, 100, 45, 68, 92};
//	fill(scores.begin(), scores.end(), 0);

//	list<int> nums { 1, 4, 5, 2, 3, 1 };
//	vector<int> numbers(nums.size());
//	copy(nums.begin(), nums.end(), numbers.begin());

	//
//	vector<int> times { 1800, 1845, 0, 2000, 0, 1745, 1600, 0, 1530 };
//	auto iter = remove(times.begin(), times.end(), 0);
//	times.erase(iter, times.end());

//	vector<int> times { 1800, 1845, 0, 2000, 0, 1745, 1600, 0, 1530 };
//	times.erase(remove(times.begin(), times.end(), 0), times.end());

	//

//	vector<int> nums { 89, 34, 78, 100, 45, 68 };

//	auto min_iter = min_element(nums.begin(), nums.end());
//	cout << "Min is " << *min_iter << endl;

//	auto max_iter = max_element(nums.begin(), nums.end());
//	cout << "Max is " << *max_iter << endl;

//	int index = max_iter - nums.begin();

//	iota(nums.begin(), nums.end(), 5);
//	auto total = accumulate(nums.begin(), nums.end(), 0);
//	cout << total << endl;

//	total = accumulate(nums.begin(), nums.end(), 0, total_even);
//	cout << total << endl;

	// -------	
}
















