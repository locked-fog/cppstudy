#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<" (x = 100) = "<< (x = 100) << endl;
    cout<<"now x = "<< x <<endl;
    cout<<" (x<3) = "<<(x<3)<<endl;
    cout.setf(ios_base::boolalpha);
    cout << " (x > 3) = "<<(x>3)<<endl;
    return 0;
}