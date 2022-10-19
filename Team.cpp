#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter how number :";
    cin>>number;
    int array[number];
    for (int i = 0; i <= number-1; i++){
        cout<<"Enter Number :";
        cin>>array[i];
    }

    int sum = 0;
    string value[number];
    for (int i = 0; i <= number-1; i++){
        value[i]=to_string(array[i]);     
    }
    int output = 0;
    for (int i = 0; i <= number-1; i++){
        int sum = 0;
        for (int j = 0; j <= value[i].length()-1; j++){
            if (value[i][j]=='1')
            {
                sum+=1;
            }
            
        }
        
        if (sum>=2)
        {
            output = output+1;
        }    

    }
    cout<<output;
    

    
}