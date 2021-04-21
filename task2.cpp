#include <iostream>
using namespace std;

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
int main() {
    char userAns = '0';
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
        cout << "player 1 " << userAns << endl << "player 2 " << 'O';
    }else if (userAns == 'O') cout << "player 1 " << userAns << endl << "player 2 " << 'X';
    
    return 0;
}
