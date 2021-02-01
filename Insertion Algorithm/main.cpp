#include <iostream>

using namespace std;

int main()
{

    int row [] {5,4,6,2,3,0};
    for (int i=0;i<6;i++)
    {
        //listing the original array before sorting using Insertion Algorithm
        cout << row[i] << "  ";
    }
    cout << endl << endl;

    //Using Insertion Algorithm to sort values in ascendant order
    int column [6] {0};
    for (int j=0;j<6;j++)
    {
        int key = row[j];
        column[j] = key;
        cout << "key= " << key << "  ";
        int i = j-1;
        while (i>=0&&column[i]>key)
        {
            cout << "column[i+1]= " << column[i+1] << "  ";
            column[i+1]=column[i];
            cout << endl << "swap= " << column[i+1] << "  ";
            i--;
        }
        column[i+1] = key;
        cout << "updated_key= " << column[i+1] << "  ";
    }

    cout << endl << endl;

    for (int i=0;i<6;i++)
    {
        cout << column[i] << "  ";
    }
    return 0;
}
