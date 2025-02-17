#include <iostream>
#include <vector>

using namespace std;

class Hungarian
{
public:
    int rowReduction(vector<vector<int>> &costMatrix)
    {
        return 50;
    }

    int columnReduction(vector<vector<int>> &costMatrix)
    {
        return 0;
    }
};

class Hungarian_max : public Hungarian // Use ':' instead of 'extends'
{
public:
};

class Hungarian_min : public Hungarian // Use ':' instead of 'extends'
{
public:
};

int workflow(bool &type, vector<vector<int>> &costMatrix)
{
    Hungarian instance;
    instance.rowReduction(costMatrix);
    instance.columnReduction(costMatrix);
}

int main()
{
    int N;
    cout << "Please Enter the number of Task(s)/Worker(s):";
    cin >> N;

    cout << "Fill the costMatrix:";

    vector<vector<int>> costMatrix(N, vector<int>(N));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> costMatrix[i][j];
        }
    }

    bool type;
    Hungarian instance;
    cout << "1. Please Enter 0 for Maximization or any other integer for Minimization:";
    cin >> type;

    workflow(type, costMatrix);

    return 0;
}