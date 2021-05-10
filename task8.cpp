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
void enterHeightBlock(bool field[][5][5], int &heightBlock, int x, int y){

}
void coutField(bool field[][5][5]){
    for (int z = 0; z < 10; z++){
        cout << z << " *********************\n";
        for (int y = 0; y < 5; y++){
            for (int x = 0 ; x < 5; x++){
                cout << field[z][y][x] << " ";
            }
            cout << endl;
        }
    }

}
int main() {
    bool field[10][5][5];
    initField(field);
    int hBlock[25] = {9,9,8,7,5,4,3,2,1,0,1,8,7,9,5,4,6,8,9,6,4,1,0,3,10};
    int heightBlock = 0;
    int countBlock = 0;
    for (int y = 0; y < 5; y++){
        for (int x = 0; x < 5; x++){
            for (int z = 0; z < hBlock[countBlock]; z++){
                field[z][y][x] = true;
            }
            countBlock++;
        }
    }
    coutField(field);

    return 0;
}
