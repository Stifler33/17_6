#include <iostream>
int main() {
    int cutlery[12][4] =   {{1,1,1,1},
                            {1,1,1,1},
                            {1,1,1,0},
                            {1,1,1,0},
                            {1,1,1,0},
                            {1,1,1,0},
                            {1,1,1,0},
                            {1,1,1,0},
                            {1,1,1,0},
                            {1,1,1,0},
                            {1,1,1,0},
                            {1,1,1,0}};

    int dishes[12][3] =    {{1,1,1},
                            {1,1,1},
                            {1,1,0},
                            {1,1,0},
                            {1,1,0},
                            {1,1,0},
                            {1,1,0},
                            {1,1,0},
                            {1,1,0},
                            {1,1,0},
                            {1,1,0},
                            {1,1,0}};

    int chair[12][1] =     {{1},
                            {1},
                            {1},
                            {1},
                            {1},
                            {1},
                            {1},
                            {1},
                            {1},
                            {1},
                            {1},
                            {1}};
    chair [4][0] = 2;
    dishes[2][0] = 0;
    dishes[0][0] = 0;
    cutlery[0][3] = 0;
    //std::cout << chair [4][0];
    return 0;
}
