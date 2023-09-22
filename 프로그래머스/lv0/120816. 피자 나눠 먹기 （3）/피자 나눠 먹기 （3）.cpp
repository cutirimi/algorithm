#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    
    int result=0;
    
    if(n%slice!=0)
    {
        result=(n/slice)+1;
        return result;
    }
    else
    {
        result=n/slice;         
        return result;
    }

}