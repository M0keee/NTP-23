#include <iostream>
using namespace std;

void HanojskeKule(int n, char pocetak, char kraj, char sredina)
{
    if (n == 1)
    {
        cout << " Pomjeri " << n << " sa " << pocetak << " na " << kraj << endl;
    }
    else
    {
        HanojskeKule(n - 1, pocetak, sredina, kraj);
        cout << " Pomjeri " << n << " sa " << pocetak << " na " << kraj << endl;
        HanojskeKule(n - 1, sredina, kraj, pocetak);
    }
}
int main()
{
    int BrojDiskova;
    cout << "Unesite broj Diskova: ";
    cin >> BrojDiskova;
    do
    {
        cout << "Broj diskova nije zadovoljavajuci, unesite opet: ";
        cin >> BrojDiskova;
    } while (BrojDiskova < 3 && BrojDiskova > 5000);
    HanojskeKule(BrojDiskova, 'A', 'B', 'C');
    return 0;
}