#include<iostream>
using namespace std;
class Counter {
private:
	int count;
public:
	Counter(int count = 0):count(count){}
	unsigned int getCount() const {
		return count;
	}
	Counter operator ++(int) {
		++count;
		Counter temp;
		temp.count = count;
		return temp;
	}
	Counter operator ++() {
		++count;
		Counter temp;
		temp.count = count;
		return temp;
	}
	void display() const {
		cout << "Count : " << count;
	}

};
int main() {
	Counter c, c1;
	++c;
	c1 = c++;
	c1.display();

}