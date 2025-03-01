#include <iostream>
using namespace std;
int main()
{

    int arr[10][10] =
        {
            {12, 34, 56, 78, 90, 12, 34, 56, 78, 90},
            {23, 45, 67, 89, 23, 45, 67, 89, 23, 45},
            {34, 56, 78, 90, 34, 56, 78, 90, 34, 56},
            {45, 67, 89, 23, 45, 67, 89, 23, 45, 67},
            {56, 78, 90, 12, 56, 78, 90, 12, 56, 78},
            {67, 89, 23, 45, 67, 89, 23, 45, 67, 89},
            {78, 90, 12, 34, 78, 90, 12, 34, 78, 90},
            {89, 23, 45, 67, 89, 23, 45, 67, 89, 23},
            {90, 12, 34, 56, 90, 12, 34, 56, 90, 12},
            {12, 34, 56, 78, 12, 34, 56, 78, 12, 34}};
    int totalElements = 10 * 10;
    for (int i = 0; i < totalElements / 2; i++)
    {   
        // Compute 2D indices for the current element and its reverse counterpart
        int row1 = i / 10, col1 = i % 10;   // Current element
        int row2 = (totalElements - 1 - i) / 10, col2 = (totalElements - 1 - i) % 10;
        
        // Swap the elements
        int temp = arr[row1][col1];
        arr[row1][col1] = arr[row2][col2];
        arr[row2][col2] = temp;
    }

    cout << "Reversed Array: " << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}