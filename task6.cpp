#include <iostream>
#include <vector>
using namespace std;
vector<float> coutVec(vector<float> &v){
    cout << "Enter number vec :\n";
    float number;
    for (int i = 0; i < 4 ;i++){
        cin >> number;
        v[i] = number;
    }
    return v;
}
int main() {
    vector<float> v(4);
    float m[4][4] = {{12.4, 13.6, 25.8, 55.2},
                     {112.2, 258.1, 0.0f, 100.100},
                     {0.1, 1.1f, 22.1, 11.11},
                     {36.3, 7.1, 0.0, 74.1}};
    vector <float> r(4);
    coutVec(v);
    for (int l = 0; l < 4; l++){
        for (int c = 0; c < 4; c++){
            r[l] += v[c] * m[l][c];
        }
    }
    for (float i : r){
        cout << i << " ";
    }

    return 0;
}
