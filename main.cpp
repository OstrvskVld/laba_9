//task 1
#include <array>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;
//
//template <typename T, size_t N>
//void shift(array<T, N>& arr, size_t shift) {
//    if (shift > N) {
//        cerr << "Error!!!" << endl;
//        return;
//    }
//
//    array<T, N> temp = arr;
//
//    for (size_t i = 0; i < N; ++i) {
//        arr [(i + shift) % N] = temp[i];
//    }
//}
//
//int main() {
//    array<int, 5> int_arr = {1, 2, 3, 4, 5};
//    cout << "Original array: ";
//    for (int element : int_arr) {
//        cout << element << " ";
//    }
//    cout << endl;
//
//    shift(int_arr, 2);
//
//    cout << "Modified array: ";
//    for (int element : int_arr) {
//        cout << element << " ";
//    }
//    cout << endl;
//
//    return 0;
//}

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
//
//    print_container<string, vector<string>>(names);
//
//
//    map<string, int> ages = {{"Alice", 30}, {"Bob", 25}, {"Charlie", 22}};
//    cout << "Map: ";
//
//    for (const auto& [key, value] : ages) {
//        cout << key << " " << value << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
//
//
//

template <typename T>
vector<T> insertlists(const vector<T>& list1, const vector<T>& list2, int index) {
    vector<T> result;


    for (int i = 0; i < index; ++i) {
        result.push_back(list2[i]);
    }


    for (const auto& element : list1) {
        result.push_back(element);
    }


    for (auto it = next(list2.begin(), index); it != list2.end(); ++it) {
        result.push_back(*it);
    }

    return result;
}

int main() {
    vector<int> list1{1, 2, 3, 4};
    vector<int> list2{11, 13, 15};

    int index;
    cout << "Enter the index: ";
    cin >> index;

    vector<int> result = insertlists(list1, list2, index);

    cout << "Updated list: ";
    for (const auto& element : result) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}



