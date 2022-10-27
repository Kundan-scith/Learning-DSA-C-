#include <iostream>
using namespace std;
int main()
{
  int n, m;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cin >> m;
  for (int j = 0; j < n; j++)
  {
    if (arr[j] == m)
    {
      cout << j;
      break;
    }
  }

  return 0;
}
