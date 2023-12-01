#include <iostream>

using namespace std;

int main()
{
    string tab3d[2][3][6] = {
    {
        {"1A","1B","1C","1D","1E","1F"},
        {"2A","2D","2C","2D","2E","2F"},
        {"3A","3B","3C","3D","3E","3F"}
    },
    {
        {"1X","2X","3X","4X","5X","6X"},
        {"1Y","2Y","3Y","4Y","5Y","6Y"},
        {"1Z","2Z","3Z","4Z","5Z","6Z"}
    }
    };

    //cout << tab3d[0][0][2] << " " << tab3d[0][0][3] << endl << tab3d[0][1][2] << " " << tab3d[0][1][3] << " " << tab3d[0][1][4] << endl;
    //cout << tab3d[1][1][2] << " " << tab3d[1][1][3] << endl  << tab3d[1][2][2] << " " << tab3d[1][2][3];

    for (int k = 0; k < 2; k++) {
        for (int j = 0; j < 3; j++) {
            for (int i = 2; i <= 3; i++) {
                cout << tab3d[k][j][i];
            }
            cout << endl;
        }
        cout << endl;
    }


}