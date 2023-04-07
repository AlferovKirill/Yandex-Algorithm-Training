#include <iostream>

int main()
{
    int t_room, t_cond, answer;
    std::string mode;

    std::cin >> t_room >> t_cond >> mode;

    if (mode == "freeze") {
        if (t_room <= t_cond) answer = t_room;
        else answer = t_cond;
    }
    else if (mode == "heat") {
        if (t_room >= t_cond) answer = t_room;
        else answer = t_cond;
    }
    else if (mode == "auto") {
        answer = t_cond;
    }
    else if (mode == "fan") {
        answer = t_room;
    }

    std::cout << answer;

    return 0;
}