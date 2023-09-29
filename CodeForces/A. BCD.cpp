#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int boxes = ceil((double)N / K);

    cout << boxes << endl;

    return 0;
}
