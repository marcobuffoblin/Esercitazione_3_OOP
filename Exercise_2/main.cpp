#include"ComplexNumber.hpp"

int main()
{
    ComplexNumber z1(-2.13,1.089);
    ComplexNumber z2(0,-2.3784);

    // Stampo i numeri complessi
    cout<<"Il primo numero complesso e': "<<z1<<endl;
    cout<<"Il secondo numero complesso e': "<<z2<<endl;

    // Faccio la somma dei due numeri complessi
    ComplexNumber sum=z1+z2;
    cout<<"La somma dei due numeri complessi e': "<<sum<<endl;

    // Verifico se sono circa uguali
    cout<<"I due numeri sono uguali? (0=False;1=True): "<< (z1==z2) <<endl;

    // Faccio il coniugato
    cout<<"Il primo numero complesso coniugato e': "<<coniugato(z1)<<endl;
    cout<<"Il secondo numero complesso coniugato e': "<<coniugato(z2)<<endl;

}
