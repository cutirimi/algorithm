#include <string>
#include <vector>

using namespace std;

int solution(int answer) {
    if(answer<90) return 1;
    else if(answer==90) return 2;
    else if(answer<180) return 3;
    else return 4;
}