#include "trial.hpp"
#include "func.hpp"

#include <cstddef>
#include <cstdio>

int main(int argc, char *argv[]) {
    std::printf("Hello, world!\n");
    // Call the function defined in func.cpp
    int x = 5;
    std::printf("func(%d) = %d\n", x, trial::func(x));
    return 0;
}
