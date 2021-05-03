#include <iostream>

int main() {
    int array[5][5];
    int val = 24;
    for (int l = 4; l >= 0; l--){
        for (int c = 4; c >= 0 && (l%2 == 0); c--){
            array[l][c] = val--;
        }
        for (int c = 0; c < 5 && (l%2 != 0); c++){
            array[l][c] = val--;
        }
    }
    for (int i = 0; i < 5; i++){
        for (int g = 0; g < 5; g++){
            std::cout << array[i][g] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
