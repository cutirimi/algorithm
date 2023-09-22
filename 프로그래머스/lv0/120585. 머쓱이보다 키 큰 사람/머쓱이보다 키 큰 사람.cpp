#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int cnt=0;
    
    for(int i=0;i<array.size();i++)
    {
        if(height<array[i])
        {
            cnt++;
        }
    }
    return cnt;
}