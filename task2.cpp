#include <iostream>
#include <cassert>
using namespace std;
char userAns = '0';
char player1;
char player2;
int x=0;
int y=0;
char playingField[3][3] = {' ',' ',' ',
                           ' ',' ',' ',
                           ' ',' ',' ',};


void coutField(){
    for (int line = 2 ; line >= 0; line--){
        for (int column = 0; column < 3 ; column++){
            cout << playingField[line][column] << ' ';
        }
        cout << endl;
    }
}
bool chekWin(){
    for (int c = 0; c < 3; c++){
        int winOc = 0;
        int winXc = 0;
        for (int l = 0; l < 3; l++){
            winOc += playingField[l][c] == 'O';
            winXc += playingField[l][c] == 'X';
            if (winOc == 3) {
                cout << "win O\n";
                return true;
            }else if (winXc == 3) {
                cout << "win X\n";
                return true;
            }
        }
    }
    for (int l = 0; l < 3; l++){
        int winOl = 0;
        int winXl = 0;
        for (int c = 0; c < 3; c++){
            winOl += playingField[l][c] == 'O';
            winXl += playingField[l][c] == 'X';
            if (winOl == 3) {
                cout << "win O\n";
                return true;
            }else if (winXl == 3) {
                cout << "win X\n";
                return true;
            }
        }
    }
    return false;
}
bool chekInput(int player){
    x -= 1, y -= 1;
    //assert((x >= 0 && x <= 2) && (y >= 0 && y <= 2));
    bool corXY = playingField[y][x] == ' ' && ((x >= 0 && x <= 2) && (y >= 0 && y <= 2));
    while (!corXY){
        cout << "incorrect X or Y\n" << "Please enter correct X and Y :";
        cin >> x;
        assert(x >= 0);
        cin >> y;
        assert(y >= 0);
        x -= 1, y -= 1;
        //assert((x >= 0 && x <= 2) && (y >= 0 && y <= 2));
        corXY = playingField[y][x] == ' ' && ((x >= 0 && x <= 2) && (y >= 0 && y <= 2));
    }
    bool corSy = player == 1 && userAns == player1 || player == 2 && userAns == player2;
    while (!corSy){
        cout << "Incorrect symbol !\n" << "Please enter correct symbol ,X or O :" , cin >> userAns;
        corSy = player == 1 && userAns == player1 || player == 2 && userAns == player2;
    }
        playingField[y][x] = userAns;
        coutField();
        return true;
}
int main() {
    bool corUsAns = (userAns == 'O' || userAns == 'X');
    while (!corUsAns){
        cout << "who is 1 player ? :";
        cin >> userAns;
        corUsAns = (userAns == 'O' || userAns == 'X');
        if (corUsAns){
        cout << "OK\n";
        }else cout << "invalid character\n" << "O or X\n";
    }
    if (userAns == 'X'){
        cout << "player 1 " << userAns << endl << "player 2 O\n";
        player1 = userAns;
    }else if (userAns == 'O') {
        cout << "player 1 " << userAns << endl << "player 2 X\n";
        player1 = userAns;
    }
    player1 == 'X' ? player2 = 'O' : player2 = 'X';
    cout << "input format - x y X or O\n";
    int counterStep = 0;
    while (counterStep < 9 && !chekWin()){
        cout << "go 1 player\n";
        cin >> x >> y >> userAns;
        counterStep += chekInput(1);
        if (chekWin()) return 0;
        if (counterStep >= 9) continue;
        cout << "go 2 player\n";
        cin >> x >> y >> userAns;
        counterStep += chekInput(2);
        if (chekWin()) return 0;
    }


    return 0;
}
