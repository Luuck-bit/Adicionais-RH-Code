#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(){

 locale brLocale("pt_BR.UTF-8");
 locale::global(brLocale);

float resultado, salario, hora, valorhora, jornadamulti;
float jornada, insalubridade, ferias, inss;
float ir, baseir, feriasatt;
int button;

do{
cout << "o que deseja Calcular? " << endl;
cout << "1 - Adicional Noturno" << endl;
cout << "2 - Adicional de Insalubridade" << endl;
cout << "3 - Adicional de Periculosidade" << endl;
cout << "4 - Cálcular Férias" << endl;
cout << "5 - Sair" << endl;
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
cout << "Qual o salário do Indivíduo?" << endl;
cin >> salario;
ferias = salario + (salario / 3);
//inss
if (ferias >= 7507.49){
   inss = 876.95;
}else if(ferias < 7507.49 && ferias >= 3856.95){
   inss = ((ferias - 3856.95) * 0.14) + 99.00 + 112.61 + 511.07;
}else if(ferias < 3856.95 && ferias >= 2571.30){
   inss = ((ferias - 2571.30) * 0.12) + 99.00 + 112.61;
}else if(ferias < 2571.30 && ferias > 1320.00){
   inss = ((ferias - 1320) * 0.09) + 99.00;
}else{
   inss = 99.00;
}
//ir
baseir = ferias - inss;
if (baseir >= 4664.69){
   ir = baseir * 0.275 - 884.96;
}else if(baseir > 3751.07 && baseir <= 4664.68){
   ir = baseir * 0.225 - 651.73;
}else if(baseir > 2826.66 && baseir <= 3751.06){
   ir = baseir * 0.15 - 370.40;
}else if(baseir > 2112.00 && baseir <= 2826.66){
   ir = baseir * 0.075 - 158.40;
}else{
   ir = 0;
}
feriasatt = ferias - inss - ir;
cout << ferias << endl;
cout << "As férias do indivíduo serão de: " << feriasatt << endl;
cout << "Sendo o INSS de: " << inss << endl;
cout << "Sendo o IR de: " << ir << endl;



break;

case 5:
cout << "Saindo..." << endl;
return 0;
break;


default:
cout << " Selecione a opĆ§Ć£o desejada: " << endl;



}
}while(button != 5);

}