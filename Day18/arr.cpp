// template classes and arrays

#include <iostream>
#include <array>

using namespace std;

const size_t rows{2};
const size_t columns{3};

void printArr(const array<array<int, columns>, rows>& );

int main() {
    array<array<int, columns>, rows> array1{1, 2, 3, 4, 5, 6};
    array<array<int, columns>, rows> array2{7, 8, 9, 10, 11, 12};

    cout << "Values in array1 by row are" << endl;
    printArr(array1);

    cout << "Values in array2 by row are" << endl;
    printArr(array2);

    return 0;
}

    // array <int,5> a={1,2,3,4,5};
    // for(int i=0;i<a.size();i++){
    //     cout<<a[i];
    // }
