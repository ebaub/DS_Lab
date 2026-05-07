#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // stack initialization
    priority_queue<int, vector<int>, greater<int> > q;

    q.push(54);
    q.push(54);
    q.push(4);
    q.push(5);
    q.push(50);
    q.push(2);
    q.push(1);
    q.push(100);

    // traverse
    while (!q.empty())
    {

        cout << q.top() << endl;
        q.pop();
    }

    // search

    // int target = 30;
    // bool not_found = 1;
    // while (!q.empty())
    // {
    //     if (q.front() == target)
    //     {
    //         cout << "Value found!" << endl;
    //         not_found = 0;
    //         break;
    //     }
    //     q.pop();
    // }
    // if (not_found)
    // {
    //     cout << "value not found!" << endl;
    // }
    return 0;
}
