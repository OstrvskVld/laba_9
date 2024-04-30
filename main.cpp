
#include <array>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

template <typename T, size_t N>
void shift(array<T, N>& arr, size_t shift) {
    if (shift > N) {
        cerr << "Error!!!" << endl;
        return;
    }

    array<T, N> temp = arr;

    for (size_t i = 0; i < N; ++i) {
        arr [(i + shift) % N] = temp[i];
    }
}

int main() {
    array<int, 5> int_arr = {1, 2, 3, 4, 5};
    cout << "Original array: ";
    for (int element : int_arr) {
        cout << element << " ";
    }
    cout << endl;

    shift(int_arr, 2);

    cout << "Modified array: ";
    for (int element : int_arr) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}


//template <typename T, typename Container>
//void print_container(const Container& container) {
//    for (const auto& element : container) {
//        cout << element << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//
//    vector<string> names = {"Alice", "Bob", "Charlie"};
//    cout << "Vector: ";
//    print_container(names);
//
//
//    map<string, int> ages = {{"Alice", 30}, {"Bob", 25}, {"Charlie", 22}};
//    cout << "Map: ";
//    print_container(ages);
//
//    return 0;
//}



