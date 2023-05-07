#include <iostream>
#include <vector>

int main() {
    long long N, M, K, p, q;
    std::cin >> N >> M >> K;

    std::vector<std::vector<long long>> desk(N, std::vector<long long>(M, 0));
    std::vector<std::pair<long long, long long>> coordinates(K, { 0, 0 });

    for (long long i = 0; i < K; ++i) {
        std::cin >> p >> q;

        --p;
        --q;

        coordinates[i] = { p, q };

        for (long long x = -1; x <= 1; ++x) {
            if (p + x < 0 || p + x >= N) continue;

            for (long long y = -1; y <= 1; ++y) {
                if (q + y < 0 || q + y >= M) continue;
                ++desk[p + x][q + y];
            }
        }
    }

    for (std::pair<long long, long long> coor: coordinates) {
        desk[coor.first][coor.second] = -1;
    }

    for (std::vector<long long> n: desk) {
        for (long long m: n) {
            if (m == -1) std::cout << "* ";
            else std::cout << m << " ";
        }
        std::cout << "\n";
    }
}