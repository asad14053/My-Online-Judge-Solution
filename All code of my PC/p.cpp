#include <string>
#include <queue>
#include <iostream>

using namespace std;  // This is to make available the names of things defined in the standard library.

int main()
{
    queue<string> pq; // Creates a priority queue pq to store strings, and initializes the queue to be empty.

    pq.push("the quick");
    pq.push("fox");
    pq.push("jumped over");
    pq.push("the lazy dog");

    // The strings are ordered inside the priority queue in lexicographic (dictionary) order:
    // "fox", "jumped over", "the lazy dog", "the quick"
    //  The lowest priority string is "fox", and the highest priority string is "the quick"

    while (!pq.empty()) {
       cout << pq.front() << endl;  // Print highest priority string
      // pq.pop();                    // Remmove highest priority string
    }

    return 0;
}

