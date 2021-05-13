#include <iostream>
#include <vector>
using namespace std;
int originX = 0;
int originY = 0;
int endX = 0;
int endY = 0;
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
void input_ship(int &dockShip, vector<vector<int>> &field1){
    bool corCoordinates;
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
            if (corCoordinates) cout << "incorrect coordinates\n";
        }
    }while(!init_Field_Player(field1,originX,originY,endX,endY) || corCoordinates);
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


    int dockShip = 1;
    while (dockShip <= 4){

         for (int Ship1 = 0; Ship1 < 4; Ship1++){
            input_ship(dockShip, field1);
        }
         dockShip++;
        for (int ship2 = 0; ship2 < 3; ship2++){
            input_ship(dockShip, field1);
        }
        dockShip++;
        for (int ship3 = 0; ship3 < 2; ship3++){
            input_ship(dockShip, field1);
        }
        dockShip++;
        for (int ship4 = 0; ship4 < 1; ship4++){
            input_ship(dockShip, field1);
        }
        dockShip++;
    }

    cout_Field(field1);


    return 0;
}
