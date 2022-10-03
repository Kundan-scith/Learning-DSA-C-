#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int sol=0;
    int k=0;
    while(n>0){
        int lastnumber = n%10;
        sol= sol + (lastnumber*pow(8,k));
        k++;
        n=n/10;
    }
    cout<<sol;
	return 0;
}
