#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    
    // Finding the iterator pointing to value 3
    auto it = std::find(vec.begin(), vec.end(), 3);
    
    if (it != vec.end()) {
        // Calculating the distance between the beginning of the vector and the iterator pointing to value 3
        int distance_to_3 = std::distance(vec.begin(), it);
        
        std::cout << "Distance to value 3: " << distance_to_3 << std::endl;
    } else {
        std::cout << "Value 3 not found." << std::endl;
    }

    return 0;
}
