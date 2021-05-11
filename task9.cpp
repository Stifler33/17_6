#include <iostream>
#include <vector>
using namespace std;
void init_Field_Player(vector<vector<int>> &field, int numberPlayer){
    int originX;
    int originY;
    int endX;
    int endY;
    do{
        cout << "enter origin 4-deck ship : \n";
        cin >> originX >> originY;
        cout << "enter end 4-deck ship : \n";
        cin >> endX >> endY;
        bool out = originX != endX && originY != endY;
        if (out){
            cout << "only vertical or horizontal !\n";
        }
    }while (out);


}
int main() {
    vector<vector<int>> field1(10,vector<int> (10, 0));
    vector<vector<int>> field2(10,vector<int> (10, 0));
    init_Field_Player(field1,1);

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
