
#include <iostream>

using namespace std;

int main ()
{
  int sizearaye;
  cin >> sizearaye;
  int surati[sizearaye];
  int sum = 0;
  for (int i = 0; i < sizearaye; i++)
    {
      int n;
      cin >> n;
      surati[i] = n;
      if (n < 0)
	n = (-1) * n;
	cout<<n<<endl;
      sum+= surati[i];
    }
        cout <<sum;
return 0;
}
