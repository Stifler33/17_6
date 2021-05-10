#include <iostream>
#include <vector>
#include <cassert>
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
void coutSlice(bool field[][5][5], int numberSlice){
    assert(numberSlice <= 9 && numberSlice >= 0);
    for (int y = 0; y < 5; y++){
        for (int x = 0; x < 5; x++){
            cout << field[numberSlice][y][x] << " ";
        }
        cout << endl;
    }
}
int main() {
    bool field[10][5][5];
    initField(field);
    //vector<int> hBlock = {9,9,8,7,5,4,3,2,1,0,1,8,7,10,5,4,6,8,9,6,4,1,0,3,10};
    vector<int> hBlock(25);
    for (int i = 0; i < hBlock.size(); i++){
        cout << "enter height block " << i << " : ";
        cin >> hBlock[i];
        assert(hBlock[i] <= 10 && hBlock[i] >= 0);
    }
    int countBlock = 0;
    for (int y = 0; y < 5; y++){
        for (int x = 0; x < 5; x++){
            for (int z = 0; z < hBlock[countBlock]; z++){
                field[z][y][x] = true;
            }
            countBlock++;
        }
    }
    //coutField(field);
    cout << "Enter number slice : ";
    int slice = 0;
    while (slice != -1){
        cin >> slice;
        if (slice >= 0 && slice < 10) coutSlice(field, slice);
    }

    return 0;
}
