#include <iostream>
#include <utility>
#include <vector>

#include <sys/time.h>

#define SIZE 100000000

std::vector<int> vec;

double wctime() {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return tv.tv_sec + 1E-6 * tv.tv_usec;
}

void print_vector() {
    for (const auto &el: vec) {
        std::cout << el << ' ';
    }
    std::cout << std::endl;
}

size_t partition(size_t start, size_t end) {
    int x = vec[start];
    size_t i = start;
    size_t j;

    for (j = start + 1; j < end; j++) {
        if (vec[j] <= x) {
            i = i + 1;
            std::swap(vec[i], vec[j]);
        }

    }

    std::swap(vec[i], vec[start]);
    return i;
}

void sort(size_t start, size_t end) {
    size_t r;
    if (start < end) {
        r = partition(start, end);

        sort(start, r);
        sort(r + 1, end);
    }
}

int main() {
    srand(123);

    std::vector<int> vec(SIZE);
    for (int i = 0; i < SIZE; i++) {
        int input = rand() % 100;
        vec[i] = input;
    }
    double start, end;

    for (int i = 0; i < SIZE; i++) {
        int input = rand() % 100;
        vec[i] = input;
    }

    print_vector();

    start = wctime();
    sort(0, SIZE);
    end = wctime();

    std::cout << "Time:" << end - start << std::endl;

    print_vector();

    return 0;
}

