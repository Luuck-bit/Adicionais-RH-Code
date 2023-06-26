#include <iostream>
#include <string>

using namespace std;

int main(){
float resultado, salario, hora, valorhora, jornadamulti;
int jornada, insalubridade;
int button;

do{
cout << "o que deseja Calcular? " << endl;
cout << "1 - Adicional Noturno" << endl;
cout << "2 - Adicional de Insalubridade" << endl;
cout << "3 -  Adicional de Periculosidade" << endl;
cout << "4 - Sair" << endl;
cin >> button;

switch(button){

case 1:
cout << "Informe o salĆ�rio e te diremos o ADC. Noturno" << endl;
cin >> salario;
cout << "informe a Jornada de Trabalho do individuo" << endl;
cin >> jornada;
cout << "Quantas horas noturnas ele fez?" << endl;
cin >> hora;
valorhora = salario / jornada;
jornadamulti = valorhora * 0.2;
resultado = jornadamulti * hora;
cout << "o adc Ć© de " << resultado << endl;
break;

case 2:
cout << "Qual o salĆ�rio do FuncionĆ�rio?" << endl;
cin >> salario;
cout << "Qual o Grau de Insalubridade? 1 - 10% (MĆ­nimo) 2 - 20% (MĆ©dio) 3 - 40% (MĆ�ximo)" << endl;
cin >> insalubridade;
int sumvalor, totalins;
if (insalubridade == 1)
{
   sumvalor = 1320 * 0.10;
   totalins = salario + sumvalor;
   cout << "O adicional Ć© de; " << sumvalor << " Somado com o salĆ�rio fica: " << totalins << endl;
} 
else if (insalubridade == 2)
{
    sumvalor = 1320 * 0.20;
   totalins = salario + sumvalor;
   cout << "O adicional Ć© de; " << sumvalor << " Somado com o salĆ�rio fica: " << totalins << endl;
}
else if (insalubridade == 3)
{
   sumvalor = 1320 * 0.40;
   totalins = salario + sumvalor;
   cout << "O adicional Ć© de; " << sumvalor << " Somado com o salĆ�rio fica: " << totalins << endl;
}
break;

case 3: 
float adctotal, resuladc;
cout << "Qual o salĆ�rio do FuncionĆ�rio" << endl;
cin >> salario;
adctotal = salario * 0.30;
resuladc = salario + adctotal;
cout << "O adicional Ć© de: " << adctotal << " Somados ao salĆ�rio do indivĆ­duo: " << resuladc << endl;
break;

case 4:
cout << "Saindo..." << endl;
return 0;
break;


default:
cout << " Selecione a opĆ§Ć£o desejada: " << endl;



}
}while(button != 4);








}