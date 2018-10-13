#include <iostream>
const int* highest(int val, const int* start, const int* finish);
int main()
{
    const int DATA_LEN = 9;
    const int data[DATA_LEN] = { 1, 1, 1, 4, 4, 5, 6, 7, 10 };

    for (auto search : { 0, 1, 2, 4, 7, 8, 9, 10, 11 }) {
    // auto search = 2;
        const auto where = highest(search, data, data + DATA_LEN);
        std::cout << "Index of elem: " << search << " is: ";
        if (where == nullptr) {
            std::cout << "not found!" << std::endl;
        } else {
            std::cout << (*where) << std::endl;
        }

    }
    return 0;

}
const int* highest(int val, const int* start, const int* finish){
    if(finish - start == 1) {
        if(*finish == val) {
            return finish;
        } else if(*start == val) {
            return start;
        } else {
            return nullptr;
        }
    }
    if(start == finish) {
        if(*start == val) {
            return start;
        } else {
            return nullptr;
        }
    }
    const int* median = start + ((finish - start) / 2);
    if(val == *median) {
        while(*(median + 1) == val) {
            median++;
        }
        return median;
    }
    if(val > *median){
        return highest(val, median, finish);
    } else {
        return highest(val, start, median);
    }
}
