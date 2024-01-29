#include <iostream>
#include <list> 
#include<algorithm>
using namespace std;

int main() {
    // Example 1: Creating and initializing a list
    list<int> numbers = {1, 2, 3, 4, 5};

    // Example 2: Adding elements to the list
    numbers.push_back(6);
    numbers.push_front(0);

    // Example 3: Iterating through the list using iterators
    cout << "List elements: ";
    for (const auto &num : numbers) {
        cout << num << " ";
    }
    cout <<endl;

    // Example 4: Removing elements from the list
    numbers.pop_back();
    numbers.pop_front();

    // Example 5: Inserting an element at a specific position
    auto it = find(numbers.begin(), numbers.end(), 3);
    if (it != numbers.end()) {
        numbers.insert(it, 100);
    }

    // Example 6: Removing elements with a specific value
    numbers.remove(4);

    // Example 7: Checking if the list is empty
    if (numbers.empty()) {
        cout << "List is empty." <<endl;
    } else {
        cout << "List is not empty." <<endl;
    }

    // Example 8: Accessing elements by index (using std::advance)
    if (!numbers.empty()) {
        list<int>::iterator nth_element = numbers.begin();
        advance(nth_element, 2);
        cout << "Third element: " << *nth_element <<endl;
    }

    return 0;
}