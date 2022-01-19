#include <iostream>
#include <utility>
#include <vector>
#include <queue>

#include <sys/time.h>

#define SIZE 1000

std::vector < std::vector<int> > graph;

double wctime() {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return tv.tv_sec + 1E-6 * tv.tv_usec;
}

void print_vector() {
    for (const auto &line: graph) {
        for (const auto &el: line) {
            std::cout << el << ' ';
        }
        std::cout << std::endl;
    }
}

void bfs(int n, size_t start) {
    std::queue<int> q;
    q.push (start);
    std::vector<bool> used (n);
    std::vector<int> d (n), p (n);
    used[start] = true;
    p[start] = -1;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (size_t i=0; i<graph[v].size(); ++i) {
            int to = graph[v][i];
            if (!used[to]) {
                used[to] = true;
                q.push (to);
                d[to] = d[v] + 1;
                p[to] = v;
            }
        }
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
