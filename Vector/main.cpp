#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    vector<int> mVector(6);

    mVector[0] = 10;
    mVector[1] = 111;
    mVector[2] = 23423;
    mVector[3] = 93;

    mVector.push_back(16666);

    cout << mVector[1] << endl;
    cout << mVector.back() << endl;


    mVector.pop_back();

    cout << mVector.at(3) << endl;


    return 0;
}
