#pragma once
#include <iostream>
#include<list>
#include<string>
using namespace std;

#ifndef QUEUE
#define QUEUE
namespace myqueue {
	template<typename T>
	class queue {
	public:
		// constructs an empty queue
		queue() {};
		//fuction take an input, and add it to the end of the queue
		void push(const T& item) {
			myList.push_back(item);
		}
		//fucntion that returns the first item in queue
		T front() {
			return myList.front();
		}
		// funtion that remove the first item in queue and returns it
		T pop() {
			T frontItem = front();
			myList.pop_front();
			return frontItem;
		}

		// boolean function that checks if the queue is empty
		bool empty() {
			return myList.empty();
		}
		// function that returns the size of the queue
		size_t size()const {
			return myList.size();
		}
		
		
	private:
		// using a list to store the queue
		std::list<T> myList;
		};
}


#endif
