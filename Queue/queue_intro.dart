#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // stack initialization
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(50);

    // traverse
    // while (!q.empty())
    // {

    //     cout << q.front() << endl;
    //     q.pop();
    // }

    // search

    int target = 30;
    bool not_found = 1;
    while (!q.empty())
    {
        if (q.front() == target)
        {
            cout << "Value found!" << endl;
            not_found = 0;
            break;
        }
        q.pop();
    }
    if (not_found)
    {
        cout << "value not found!" << endl;
    }
    return 0;
}
