#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>student;
    map<string, int>::iterator it;
    student.insert({"Sweet",3});
    student.insert({"Ridwan",1});
    student.insert({"Ebrahim",2});
    student.insert({"Nafisa",4});

    cout << student["Eti"] << endl; // by default value 0 if not in map

    for(it=student.begin(); it != student.end(); it++) {
        cout << it->first << " - " << it->second << endl;
    }


}