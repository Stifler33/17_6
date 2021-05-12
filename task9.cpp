#include <iostream>
#include <vector>
using namespace std;
void init_Field_Player(vector<vector<int>> &field, int numberPlayer){
    int originX = 0;
    int originY = 0;
    int endX = 0;
    int endY = 0;
    bool out;
    do{
        cout << "enter origin 4-deck ship : \n";
        cin >> originX >> originY;
        cout << "enter end 4-deck ship : \n";
        cin >> endX >> endY;
        out = originX != endX && originY != endY;
        if (out){
            cout << "only vertical or horizontal !\n";
        }else {
             if (originX == endX){
                for (int l = originY; l <= endY; l++){
                    if (field[l][originX] == 0) {
                        field[l][originX] = 1;
                    }else {
                        cout << "already here ship!\n";
                        out = true;
                    }
                }
            }else if (originY == endY){
                for (int c = originX; c <= endX; c++){
                    if (field[originY][c] == 0) {
                        field[originY][c] = 1;
                    }else {
                        cout << "already here ship!\n";
                        out = true;
                    }
                }
            }
        }
    }while (out);


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
    init_Field_Player(field1,1);
    cout_Field(field1);
    /*
     for (int l = 0; l < play1.size(); l++){
        for (int c : play1[l]){
            cout << play1[l][c] << " ";
        }
        cout << endl;
    }
     */

    return 0;
}
