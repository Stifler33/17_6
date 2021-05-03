#include <iostream>

int main() {
    int array[4][4] = {{0,0,0,0},
                       {0,0,0,0},
                       {0,0,0,0},
                       {0,0,0,0}};
    std::cout << "Enter diagonal\n";
    int val;
    for (int l = 0; l < 4; l++){
        std::cin >> val;
        array[l][l] = val;
    }
    for (int l = 0; l < 4; l++){
        for (int c = 0; c < 4; c++){
            std::cout << array[l][c] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
