#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    cout<<n<<(n%2==0 ? " is even":" is odd")<<endl;
    // if(n%2==0) cout<<n<<" is even"<<endl;
    // else cout<<n<<" is odd"<<endl;
    return 0;
}