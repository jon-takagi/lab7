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
    const int* median = start + ((*finish - *start) / 2);
    if(start + 1 == finish) {
        if(*start == val) {
            while(*(start + 1) == val) {
                start += 1;
            }
            return start;
        } else {
            while(*(finish + 1) == val) {
                finish += 1;
            }
            return finish;

        }
    }
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
