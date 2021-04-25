#include <iostream>
#include <cassert>
using namespace std;
char userAns = '0';
char player1;
char player2;
int x=0;
int y=0;
char playingField[3][3] = {'0','0','0',
                           '0','0','0',
                           '0','0','0',};


void coutField(){
    for (int line = 2 ; line >= 0; line--){
        for (int column = 0; column < 3 ; column++){
            cout << playingField[line][column] << ' ';
        }
        cout << endl;
    }
}
bool chekWin(){
    return false;
}
bool chekInput(int player){
    x -= 1, y -= 1;
    //assert((x >= 0 && x <= 2) && (y >= 0 && y <= 2));
    bool corXY = playingField[y][x] == '0' && ((x >= 0 && x <= 2) && (y >= 0 && y <= 2));
    while (!corXY){
        cout << "incorrect X or Y\n" << "Please enter correct X and Y :";
        cin >> x;
        assert(x >= 0 && x <= 3);
        cin >> y;
        assert(y >= 0 && y <= 3);
        x -= 1, y -= 1;
        //assert((x >= 0 && x <= 2) && (y >= 0 && y <= 2));
        corXY = playingField[y][x] == '0' && ((x >= 0 && x <= 2) && (y >= 0 && y <= 2));
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
    while (counterStep < 9){
        cout << "go 1 player\n";
        cin >> x >> y >> userAns;
        counterStep += chekInput(1);
        if (counterStep >= 9) continue;
        cout << "go 2 player\n";
        cin >> x >> y >> userAns;
        counterStep += chekInput(2);
    }


    return 0;
}
