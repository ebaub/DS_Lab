#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n;
    int temp;
    map<int,bool> a;
    for(int i=0;i<n;i++) {
        cin >> temp;
        a[temp] = 1;
    }

    cin >> m;
    int counter=0;
    for(int i=0; i<m; i++) {
        cin >> temp;
        if(a[temp]) {
            counter++;
        }
    }

    cout << counter << endl;
    return 0;
}

/*

name, id, mark

input: 
Abul 1 55
Kashem 2 65
Hashem 3 35
Rahim 4 88

Output:
Rahim 4 88
Kashem 2 65
Abul 1 55


*/