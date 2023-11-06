#include <iostream>
#include<iomanip>
#include<string>
#include<list>
#include"queue.h"
using namespace std;

int main()
{
	myqueue::queue<int> myQueue;
	myQueue.push(5);
	myQueue.push(4);
	myQueue.push(3);
	myQueue.push(2);
	myQueue.push(1);
	cout << "Empty? " << myQueue.empty() << endl;
	cout << "Front: " << myQueue.front() << endl;
	cout << "Pop front: " << myQueue.pop() << endl;
	cout << "Size: " << myQueue.size() << endl;
	
	return 0;
}