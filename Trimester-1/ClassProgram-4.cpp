#include<iostream> 
using namespace std;

int main()
{
    int x = 0;
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        if (i == j) {
            continue;
        }
        x++;
    }
}
cout << x;
}