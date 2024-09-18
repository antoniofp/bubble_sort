#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void bubbleSort(vector<int> & vec){
    int n = vec.size();
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(vec[j] > vec[j+1]){
                int const temp = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = temp;
            }
        }
    }
}

int main()
{
    vector<int> vec;
    int calif=0;
    for (int i = 0; i < 7; i++)
    {
        cout << "Ingresa la calificación " << i + 1 << ": ";
        cin >> calif;
        vec.push_back(calif);
    }
    bubbleSort(vec);
    cout <<"La calificacion mas baja es: " << vec[0] << endl;
    cout <<"La calificacion mas alta es: " << vec[vec.size()-1] << endl<<endl;
    cout << "Arreglo ordenado:"<<endl;
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    return 0;
}