#include <iostream>
#include <vector>
#include <cassert>
using namespace std;
int originX = 0;
int originY = 0;
int endX = 0;
int endY = 0;
bool init_Field_Player(vector<vector<int>> &field, int &inX, int &inY, int &endX, int &endY){
    assert(inX < 10 && inY < 10 && endX < 10 && endY < 10);
            for (int iterationCount = 0; iterationCount < 2; iterationCount++){
                if (inX == endX){
                    for (int l = inY; l <= endY; l++){
                        if (field[l][inX] != 0) {
                            cout << "already here ship!\n";
                            return false;
                        }else if (iterationCount == 1){
                            field[l][inX] = 1;
                        }
                    }
                }else if (inY == endY){
                    for (int c = inX; c <= endX; c++){
                        if (field[inY][c] != 0) {
                            cout << "already here ship!\n";
                            return false;
                        }else if (iterationCount == 1){
                            field[inY][c] = 1;
                        }
                    }
                }
            }
    return true;
        }
void input_ship(int &dockShip, vector<vector<int>> &field){
    bool corCoordinates = true;
    do{
        if (dockShip == 1){
            cout << "enter 1 dock ship\n";
            cin >> originX >> originY;
            endX = originX;
            endY = originY;
            corCoordinates = originX < 10 && originY < 10;
        }else {
            cout << "enter origin x and y " << dockShip << " dock ship\n";
            cin >> originX >> originY;
            cout << "enter end x and y " << dockShip << " dock ship\n";
            cin >> endX >> endY;
            if (originX == endX && originY >= endY){
                    corCoordinates = false;
            }else if (originY == endY && originX >= endX){
                    corCoordinates = false;
            }else if (originX != endX && originY != endY){
                corCoordinates = false;
            }else corCoordinates = originX < 10 && originY < 10 && endX < 10 && endY < 10;
        }
        if (!corCoordinates) cout << "incorrect coordinates\n";
    }while(!corCoordinates || !init_Field_Player(field,originX,originY,endX,endY));
}
void count_ship(vector<vector<int>> &field){
    int dockShip = 1;
    while (dockShip <= 4){

        for (int Ship1 = 0; Ship1 < 4; Ship1++){
            input_ship(dockShip, field);
        }
        dockShip++;
        for (int ship2 = 0; ship2 < 3; ship2++){
            input_ship(dockShip, field);
        }
        dockShip++;
        for (int ship3 = 0; ship3 < 2; ship3++){
            input_ship(dockShip, field);
        }
        dockShip++;
        for (int ship4 = 0; ship4 < 1; ship4++){
            input_ship(dockShip, field);
        }
        dockShip++;
    }
}
void cout_Field(vector<vector<int>> &field){
    for (int l = 0; l < field.size(); l++){
        for (int c = 0; c <  field[l].size(); c++){
            cout << field[l][c] << " ";
        }
        cout << endl;
    }
    cout << "\n*************************\n";
}

int main() {
    vector<vector<int>> field1(10,vector<int> (10, 0));
    vector<vector<int>> field2(10,vector<int> (10, 0));
    count_ship(field1);
    //count_ship(field2);



    cout_Field(field1);
    //cout_Field(field2);

    return 0;
}
