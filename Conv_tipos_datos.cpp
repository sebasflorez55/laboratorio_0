#include<iostream>
#include<string>
#include <sstream>

using namespace std;

int NumStringToInt(string numero)
{
    int x = 0; 
    int prueba = 1;
    stringstream (numero) >> x; 
    
    cout<<"Se convirtio a int, porque ya se puede sumar con datos del mismo tipo"<<endl;
    
    return x +1;
    
	
	
}

int main()
{
    string number1 = "45678945";
	cout<<NumStringToInt(number1)<<endl;
	string number2 = "-375907";
	cout<<NumStringToInt(number2)<<endl;
}
