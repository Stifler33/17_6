#include <iostream>
#include <vector>
using namespace std;
void initField(bool field[][5][5]){
    for (int z = 0; z < 10; z++){
        for (int y = 0; y < 5; y++){
            for (int x = 0; x < 5; x++){
                field[z][y][x] = false;
            }
        }
    }
}
void enterHeightBlock(bool field[][5][5], int &heightBlock){
    for (int z = 0; z < 10; z++){
        for (int y = 0; y < 5; y++){
            for (int x = 0 ; x < 5; x++){
                if (z < heightBlock){
                    field[z][y][x] = true;
                }else field[z][y][x] = false;
            }
        }
    }
}
void coutField(bool field[][5][5]){
    for (int z = 0; z < 10; z++){
        for (int y = 0; y < 5; y++){
            for (int x = 0 ; x < 5; x++){
                cout << field[z][y][x] << " ";
            }
            cout << endl;
        }
        cout << z << " *********************\n";
    }

}
int main() {
    bool field[10][5][5];
    initField(field);
    int heightBlock = 0;

    //coutField(field);

    return 0;
}
