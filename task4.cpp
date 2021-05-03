#include <iostream>
void coutArray(int array[4][4]){
    for (int l = 0; l < 4; l++){
        for (int c = 0; c < 4; c++){
            std::cout << array[l][c] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "***************************\n";
}
int enterArray(int array[][4]){
    int val;
    for (int l = 0; l < 4; l++){
        for (int c = 0; c < 4; c++){
            std::cin >> val;
            array[l][c] = val;
        }
    }
    return array[4][4];
}
bool compareArray(int array1[][4], int array2[][4]){
    int val1;
    int val2;
    for (int l = 0; l < 4; l++){
        for (int c = 0; c < 4; c++){
            val1 = array1[l][c];
            val2 = array2[l][c];
            if (val1 != val2) return false;
        }
    }
    return true;
}
int main() {
    int array_1[4][4];
    int array_2[4][4];
    int val = 0;
    std::cout << "Enter 1 array\n";
    enterArray(array_1);
    std::cout << "Enter 2 array\n";
    enterArray(array_2);
    compareArray(array_1, array_2) ? std::cout << "equal!\n" : std::cout << "NO equal!\n";
    coutArray(array_1);
    coutArray(array_2);
    return 0;
}
