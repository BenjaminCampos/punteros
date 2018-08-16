#include<iostream>

using namespace std;

int arreglo[10]={6,6,3,23,11,23,45,2,3,1};
int *apuntador;

int main()
{
	int suma;
	float promedio;
	for(int i=0;i<10;i++)
	{
		apuntador=&arreglo[i];
		suma+=*apuntador;
		if(i==9)
		{
			i++;
			promedio=suma/i;
		}
		cout<<"/n";
		cout<<"arreglo direccion: "<<apuntador<<endl;
		cout<<"arreglo valor: "<<*apuntador<<"\n"<<endl;
	}
	cout<<"el promedio es "<<promedio<<endl;
	cout<<" la suma de los elementos es: "<<suma<<endl;
	
	
	
	return 0;
}
