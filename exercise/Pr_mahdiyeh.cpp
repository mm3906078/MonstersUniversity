#include <iostream>

using namespace std;

int main()
{
    int sizearaye;
    cout<<"sizearaye ra vared konid"<<endl;
    cin>>sizearaye;
    int surati[sizearaye];
    int sum = 0;
    for(int i = 0; i < sizearaye; i++){
        int n;
        cout << "meghdar moteghaier ra vared konid" <<endl;
        cin >> n;
    if(n<0)
    n=(-1)*n;
    surati[i] = n;
    sum += surati[i];
    }
    cout << "jam eshun : " << sum;
    return 0;
}
