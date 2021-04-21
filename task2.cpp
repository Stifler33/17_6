#include <iostream>
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
    for (int line = 0 ; line < 3; line++){
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
    if (playingField[y][x] == '0'){
        if (player == 1 && userAns == player1 || player == 2 && userAns == player2){
            playingField[y][x] = userAns;
            coutField();
            return true;
        }else {
            cout << "incorrect input !\n";
            return false;
        }
    }else {
        cout << "incorrect input !\n";
        return false;
    }
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

        cout << "go 1 player\n";
        cin >> x >> y >> userAns;
        chekInput(1);
        cout << "go 2 player\n";
        cin >> x >> y >> userAns;
        chekInput(2);

    return 0;
}
