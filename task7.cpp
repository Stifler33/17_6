#include <iostream>
using namespace std;
void initField(bool fieldPop[][12]){
    for (int l = 0; l < 12; l++){
        for (int c = 0; c < 12; c++){
            fieldPop[l][c] = true;
        }
    }
}
void outputField(bool fieldPop[][12]){
    for (int l = 11; l >= 0; l--){
        for (int c = 0; c < 12; c++){
            fieldPop[l][c] == true ? cout << 'O' : cout << 'X';
            cout << " ";
        }
        cout << endl;
    }
}
bool burstField(bool fieldPop[][12], int &x,int &y,int &eX,int &eY){
    if ((x > 12 || x < 0) || (y > 12 || y < 0) || (eX > 12 || eX < 0) || (eY > 12 || eY < 0)){
        cout << "Error !\n";
        return false;
    }else {
        x -= 1;
        y -= 1;
        eX -= 1;
        eY -= 1;
        for (int l = 0; l < 12; l++) {
            for (int c = 0; c < 12; c++) {
                if ((l >= y && l <= eY) && (c >= x && c <= eX)) {
                        fieldPop[l][c] = false;
                }
            }
        }
    }
    return true;
}
bool exit(bool fieldPop[][12]){
    for (int l = 0; l < 12; l++) {
        for (int c = 0; c < 12; c++) {
            if (fieldPop[l][c] == true) return true;
        }
    }
    return false;
}
int main() {
    bool fieldPop[12][12];
    initField(fieldPop);
    outputField(fieldPop);
    while (exit(fieldPop)){
        int x;
        int y;
        int eX;
        int eY;
        cout << "Enter X and Y start:", cin >> x >>y;
        cout << "Enter X and Y end:", cin >> eX >>eY;
        if(burstField(fieldPop, x,y,eX,eY)) outputField(fieldPop);
    }
    return 0;
}
