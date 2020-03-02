#include<iostream>

using namespace std;

int testFunction(int num1, int num2)
{
    int suma_pre = 0, cont1 = 0, cont2 = 0;
    while(num2 >= 0)
    {
        int cuenta = 0;
        while(cuenta <= num2) // Mientras se cumpla esta condicion se suma de 3 en tres
        {
            suma_pre += num1; //A la variable suma_pre que esta iniciada en 0 se le suma num1 que en este caso es 3
                           // Mientras se cumpla la condicion se suma de 3 en tres
            ++cuenta;
            cout << suma_pre << endl;
            cont1++;
            // Éstas lineas de codigo son las que mas se ejecutan

        }

        cont2++;

        --num2;
    }
    cout<<"While anidado: " << cont1<<endl;
    cout<<"While: " << cont2<<endl;

    return suma_pre;
}

int main()
{
    int resultado = testFunction(3, 10);
    std::cout << "Resultado: " << resultado << std::endl;
}
