#include <iostream>
#include <vector>
using namespace std;
bool init_Field_Player(vector<vector<int>> &field, int &inX, int &inY, int &endX, int &endY){
             if (inX == endX){
                for (int l = inY; l <= endY; l++){
                    if (field[l][inX] == 0) {
                        field[l][inX] = 1;
                    }else {
                        cout << "already here ship!\n";
                        return false;
                    }
                }
            }else if (inY == endY){
                for (int c = inX; c <= endX; c++){
                    if (field[inY][c] == 0) {
                        field[inY][c] = 1;
                    }else {
                        cout << "already here ship!\n";
                        return false;
                    }
                }
            }
    return true;
        }

void cout_Field(vector<vector<int>> &field){
    for (int l = 0; l < field.size(); l++){
        for (int c = 0; c <  field[l].size(); c++){
            cout << field[l][c] << " ";
        }
        cout << endl;
    }
}
int main() {
    vector<vector<int>> field1(10,vector<int> (10, 0));
    vector<vector<int>> field2(10,vector<int> (10, 0));
    int originX = 0;
    int originY = 0;
    int endX = 0;
    int endY = 0;
    bool corCoordinates;
    int dockShip = 4;
    while (dockShip > 0){
        do{
            if (dockShip == 1){
                cout << "enter 1 dock ship ";
                cin >> originX >> originY;
                endX = originX;
                endY = originY;
            }else {
                cout << "enter origin x and y " << dockShip << " dock ship\n";
                cin >> originX >> originY;
                cout << "enter end x and y " << dockShip << " dock ship\n";
                cin >> endX >> endY;
                corCoordinates = originX != endX && originY != endY;
            }
        }while(!init_Field_Player(field1,originX,originY,endX,endY) || corCoordinates);
        dockShip --;
    }

    cout_Field(field1);


    return 0;
}
