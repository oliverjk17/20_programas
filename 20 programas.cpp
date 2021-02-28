#include <iostream>
#include <cstdlib>
#include <string>
#include <limits>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include <bitset>
#include <cmath>
#include <stdlib.h>
#include <math.h>
#include<conio.h>
using namespace std;

//cabecera
void getSuma(); //numero 1                        suma
void getResta(); //numero 2                       resta
void getMultiplicacion(); //numero 3              multiplicacion
void getDivision(); //numero 4                    division
void getParono(); //numero5                       si numero es par o no
void getKilometros(); //numero 6                  conversiones de kilometros y millas.
void getMetrospulgadas(); //numero 7              conversiones de metros y pulgadas.
void getKiloslibras(); //numero 8                  conversion de kilos a libras
void getPalindromo();  //numero 9                  determinar si funa palabra es palindroma o no 
void getConversion();  //numero 10                 conversion de numeros arabigos a romanos
void getConversionletras(); //numero 11            conversion de numeros enteros a letras
void getCondecimales(); //numero 12                conversion de numeros con decimal a letras
void getTablamult(); //numero 13                   una tabla de multiplicar
void getTablasmultiplicar(); //numero 14           tablas de multiplicar del 1 al 10
void getMultigrafico(); //numero 15                multiplicacion de forma grafica
void getDecimalbinario(); //numero 16              conversion de numeros decimales a binarios
void getDecimalhexadecimal(); //numero 17          conversion de numeros decimales a hexadecimal
void getFigurasgeo();    //numero 18                figuras geometricas
 //numero 19           mover punto
void getCajero(); //numero 20                      simulacion de un cajero
void getHipotenusa(); //numero 21                  encuentra la hipotenusa
void getPN(); //numero 22                 Numero mayor
void getforma();    
void getCalcularbase(); 
void getKM();
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  

main()
   { 
  
      cout<<"\n\n----------MENU----------\n"<<endl;
 
        cout<<" 1) Suma.\n"<<endl;
        cout<<" 2) Resta.\n"<<endl;
        cout<<" 3) Multiplicacion.\n"<<endl;
        cout<<" 4) Division.\n"<<endl;
        cout<<" 5) Determinar si un numero es par o impar.\n"<<endl;
        cout<<" 6) Convertir de kilometros a millas y viceversa.\n"<<endl;
        cout<<" 7) Conversion de metros a pulgadas y viceversa. \n"<<endl;
        cout<<" 8) Conversion de kilogramos a libras y viceversa. \n"<<endl;   
        cout<<" 9) Determinar si una palabra o un numero es palindromo. \n"<<endl;
        cout<<" 10) Conversion de numeros arabigos a romanos.\n"<<endl;
        cout<<" 11) Conversion de numeros enteros a letras.\n"<<endl;
        cout<<" 12) Conversion de numeros enteros con decimal a letras .\n"<<endl;
        cout<<" 13) Una tabla de multiplicar .\n"<<endl;
        cout<<" 14) Todas las tablas de multiplicar del 1 al 10.\n"<<endl;
        cout<<" 15) Multiplicacion de forma grafica..\n"<<endl;
        cout<<" 16) Conversion de numeros decimales a binario.\n"<<endl;
        cout<<" 17) Conversion de numeros decimales a hexadecimales .\n"<<endl;
        cout<<" 18) Figuras Geometricas.\n"<<endl;
        cout<<" 19) Mover un punto.\n"<<endl;         //aun faltaaaaaaaaaaaaaaaaaaaaaaaaaaaa
        cout<<" 20) Simulacion de un cajero. \n"<<endl;
        cout<<" 21) Enontrar la hipotenusa de un triangulo. \n"<<endl;
        cout<<" 22) Saber si un numero es positivo o negativo.\n"<<endl;
        cout<<" 23) Formas.\n"<<endl;
        cout<<" 24) Calcular la base de un triangulo o cuadrado.\n"<<endl;
        cout<<" 25) Calcular kilometros a millas.\n"<<endl;
        cout<<" 26) Salir.\n"<<endl;
		cout<<" Digite una opcion: ";
        int op;
		cin>>op;
        do{
        switch(op){
    	
            case 1:
               system("cls"); 
			   getSuma();             //numero 1 suma  	
        	   system("pause");
            break;
          
            case 2:
               system("cls"); 
			   getResta();            //numero 2 resta      	
        	   system("pause");
            break;
			
			case 3:
               system("cls");
			   getMultiplicacion();    //numero 3 multiplicacion        	
        	   system("pause");
            break;
			
			case 4:
               system("cls");
			   getDivision();         //numero 4 division       	
        	   system("pause");
            break;
			
			case 5:
               system("cls");
			   getParono();           //numero 5 si numero es par o no
        	   system("pause");
            break;
			
			case 6:
               system("cls");
			   getKilometros();   //numero 6 conversiones de kilimetros y millas         	
        	   system("pause");
            break;
			
			case 7:
               system("cls");
			   getMetrospulgadas();   //numero 7 conversiones de metros y pulgadas        	
        	   system("pause");
            break;
            
            case 8:
               system("cls");
			    getKiloslibras();      //numero 8 conversion de kilos a libras  	
        	   system("pause");
            break;
			
			case 9:
               system("cls");
			   getPalindromo();   //saber si una palabra es palindroma o no          	
        	   system("pause");
            break;
			
			
			case 10:
               system("cls");
			   getConversion();         //conversion de numeros arabigos a romanos 	
        	   system("pause");
            break;
			
			case 11:
               system("cls");
			   getConversionletras();      //conversion de numeros a letras      	
        	   system("pause");
            break;
			
			case 12:
               system("cls");
               getCondecimales();            	
        	   system("pause");
            break;
			
			case 13:
               system("cls");
			   getTablamult();    //una tabla de multiplicar        	
        	   system("pause");
            break;
			
			case 14:
               system("cls");
			   getTablasmultiplicar();    //tablas de multiplicar del 1 a 10        	
        	   system("pause");
            break;
			
			case 15:
               system("cls");
			   getMultigrafico();       //multiplicacion grafica          	
        	   system("pause");
            break;
			
			case 16:
               system("cls");
			   getDecimalbinario();         //conversion de decimales a binarios 	
        	   system("pause");
            break;
			
			case 17:
               system("cls");
			   getDecimalhexadecimal();        //conversion de decimal a hexadecimal  	
        	   system("pause");
            break;
            
            case 18:
               system("cls");
			   getFigurasgeo();              //figuras geometricas  	
        	   system("pause");
            break;
			
			case 19:
			
               system("cls");        //mover punto  acaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa no se sabe si funciona  	
        	   {
	
	         char opc;
            	int x = 1,y = 1;
               	while (opc != 'q')
             	{
           		if(x < 0)
	          	{
		  	x = 166;
             		}
	     	if(x > 166)
	      	{
	  		x = 0;
	      	}
	     	if(y < 0)
	     	{
	  		y = 78;
	    	}
	     	if(y > 26)
	     	{
		   	y = 0;
	     	}
		system ("cls");
		gotoxy(x,y);
		cout<<"0_0";
		opc=getch();
		switch(opc)
		{
			case 'w':
				y--;
			break;
			case 's':
				y++;
			break;
			case 'a':
				x--;
			break;
			case 'd':
				x++;
			break;
		}
	}
	
}
					
			   system("pause");
                    
	    
			break; 
			
			case 20:{
			
               system("cls");
			   getCajero();                  //siumulacion de un cajero         	
        	   system("pause");
              }
			break;
			
			case 21:{
				
			
               system("cls");
			   getHipotenusa();                 //encuentra la hipotenusa          	
        	   system("pause");
             }
            break;
			
			case 22:
               system("cls");
			   getPN();               //numero mayor      	
        	   system("pause");
            break; 
			
			case 23:
               system("cls");
			   getforma();                    //de faren a celsius      	
        	   system("pause");
            break;
			
			case 24:
               system("cls");                  //calcula la edad de una persona 
			   getCalcularbase();                    	
        	   system("pause");
            break;
			
			case 25:
               system("cls");
			   getKM();                    //calcular el promedio escolar                    	
        	   system("pause");
            break;     
        
         }
     }while(op != 26);
 
 
}

void getSuma(){ //numero 1 suma
	int n1;
	int n2;
	float suma;
	cout<<"Ingrese el primer valor: "<<endl;
	cin>>n1;
	cout<<"Ingrese el segundo valor: "<<endl;
	cin>>n2;
	suma=n1+n2;
	cout<<"El resultado es: "<<suma<<endl;
}

void getResta(){ //numero 2 resta
	int n1;
	int n2;
	float resta;
	cout<<"Ingrese el primer valor: "<<endl;
	cin>>n1;
	cout<<"Ingrese el segundo valor: "<<endl;
	cin>>n2;
	resta=n1-n2;
	cout<<"El resultado es: "<<resta<<endl;
}

void getMultiplicacion(){ //numero 3 multiplicacion
	int n1;
	int n2;
	float multiplicacion;
	cout<<"Ingrese el primer valor: "<<endl;
	cin>>n1;
	cout<<"Ingrese el segundo valor: "<<endl;
	cin>>n2;
	multiplicacion=n1*n2;
	cout<<"El resultado es: "<<multiplicacion<<endl;
}

void getDivision(){  //numero 4 division
	int n1;
	int n2;
	float division;
	cout<<"Ingrese el primer valor: "<<endl;
	cin>>n1;
	cout<<"Ingrese el segundo valor: "<<endl;
	cin>>n2;
	division=n1/n2;
	cout<<"El resultado es: "<<division<<endl;
}

void getParono(){  //numero 5 si numero es par o no
int numero;
cout<<"Ingrese el valor: "<<endl;
cin>>numero;
div_t resultado;

resultado=div(numero,2);

    if (resultado.rem>0)

         {

          cout << numero << " es impar" << endl;

         }

    else {

          cout << numero << " es par" << endl;

         }

cin.get();


}	


void getKilometros(){  //numero 6 conversiones de kilometros y millas

float milla;
float km;
float r;
int x;
	
	
cout<<"Conversiones de Kilometros a milla y viceversa"<<endl;
cout<<"[1] Kilometros a millas"<<endl;
cout<<"[2] Millas a kilometros"<<endl;
cout<<"Elige una opcion: ";
cin>>x;

if (x == 1){
	
    cout<<"Ingrese la cantidad en Kilometros: ";
    cin>>km;
    r = km * 0.62137;
    cout<<"El valor en millas es: "<<r;
	}
else{
	 
	cout<<"Ingrese la cantidad en millas: ";
	cin>>milla;
	r = milla / 0.62137;
	cout<<"El valor en Kilometros es: "<<r;
	   
    }
}
	
	
void getMetrospulgadas(){            // numero 7 conversiones de metros y pulgadas
	
	float metros;
float pulgadas;
float r;
int x;
	
cout<<"Conversiones de metros a pulgadas y viceversa"<<endl;
cout<<"[1] Metros a pulgadas."<<endl;
cout<<"[2] Pulgadas a metros."<<endl;
cout<<"Elige una opcion: ";
cin>>x;

if (x == 1){
	
    cout<<"Ingrese la cantidad en metros: ";
    cin>>metros;
    r = metros * 39.370;
    cout<<"El valor en pulgadas es: "<<r;
	}
else{
	 
	cout<<"Ingrese la cantidad en pulgadas: ";
	cin>>pulgadas;
	r = pulgadas / 39.370;
	cout<<"El valor en metros es: "<<r;
	   
    }
    cout<<endl;
	
}	
	
	
void getKiloslibras(){       //numero 8 conversion de kilos alibras
		
float libras;
float kilogramos;
float r;
int x;
	
	
cout<<"Conversiones de Kilogramos a libras y viceversa"<<endl;
cout<<"[1] Kilogramos a libras"<<endl;
cout<<"[2] Libras a kilogramos."<<endl;
cout<<"Elige una opcion: ";
cin>>x;

if (x == 1){
	
    cout<<"Ingrese la cantidad en kilogramos: ";
    cin>>kilogramos;
    r = kilogramos * 2.2046;
    cout<<"El valor en libras es: "<<r;
	}
else{
	 
	cout<<"Ingrese la cantidad en libras: ";
	cin>>libras;
	r = libras / 2.2046;
	cout<<"El valor en Kilogramos es: "<<r;
	   
    }
	cout<<endl;	
}
	

void getPalindromo(){       //numero 9 saber si una palabra es palindroma o no 
	
	string texto;
    int aux = 0, igual = 0;
    
    cout << "Ingrese la palabra a evaluar: ";
    getline(cin >> ws, texto);
    
    for(int ind = texto.length() - 1; ind >= 0; ind--) {
        if(texto[ind] == texto[aux]) {
            igual++;
        }
        aux++;
    }
    
    if(texto.length() == igual) {
        cout << "La palabra ingresada es palindromo!! :D" << endl;
    } else {
        cout << "La palabra ingresada no es palindromo!! :D" << endl;
    }
	
}

void getConversion(){       // numero 10 conversion a numeros arabigos a romanos
	
int num, a;

cout << "Transformacion de numero arabigos a romanos" << endl;
cout << "Escribe el numero a convertir, que sea mayor o igual a 1 y menor o igual a 3999" << endl;
cin >> a;
num=a;
while(num!=0)
{

if (num<= 3999 && num>= 1000)
{
cout << "M";
num = num -1000;
}
else if(num <1000 && num>=900)
{
cout << "CM";
num = num - 900;
}
else if(num < 900 && num>500)
{
cout << "D";
num = num - 500;
}
else if (num == 500)
{
cout << "D";
num = num -500;
}
else if (num<500 && num>= 400)
{
cout << "CD";
num = num - 400;
}
else if (num<400 && num >99)
{
cout << "C";
num = num -100;
}
else if (num< 100 && num>89)
{
cout << "XC";
num = num - 90;
}
else if (num< 90 && num>59)
{
cout << "L";
num = num - 50;
}
else if(num<60 && num >50)
{
cout << "L";
num = num - 50;
}
else if (num ==50)
{
cout << "L";
num = num -50;
}
else if(num<50 && num>39)
{
cout << "XL";
num = num - 40;
}
else if(num< 40 && num> 10)
{
cout << "X";
num = num - 10;
}
else if(num == 10)
{
cout << "X";
num = num -10;
}
else if(num==9)
{
cout << "IX";
num = num - 9;
}
else if(num<=8 && num>=6)
{
cout << "V";
num = num - 5;
}
else if (num == 5)
{
cout << "V";
num = num - 5;
}
else if (num == 4)
{
cout << "IV";
num = num - 4;
}
else if (num<= 3 && num>=1)
{
cout << "I";
num = num - 1;
}
}
cout << endl << "Saludos!!!" << endl;
}

void getConversionletras(){         // numero 11 conversion de numeros a letras
	
    int x;
    cout<<"ingrese un numero"<<endl;
    cin>>x;
if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
else
 
    {
        if(x>=900)   {cout<<"NOVECIENTOS " ;x=x-900;}
       else if(x>=800)   {cout<<"OCHOCIENTOS " ;x=x-800;}
       else if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
       else if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
       else if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
       else if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
       else if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
       else if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
       else if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
       else if(x==100)  {cout<<"CIEN"     ;x=x-100;}
        if(x>90) {cout<<"NOVENTA Y "   ;x=x-90; }
            if(x==90)   {cout<<"NOVENTA"  ;x=x-90; }  
            if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
            if(x==80)   {cout<<"OCHENTA"  ;x=x-80; }
            if(x>70) {cout<<"SETENTA Y "   ;x=x-70; }
            if(x==70)   {cout<<"SETENTA"  ;x=x-70; }
            if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
            if(x==60)   {cout<<"SESENTA"  ;x=x-60; }
            if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
            if(x==50)   {cout<<"CINCUENTA"    ;x=x-50; }
            if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
            if(x==40)   {cout<<"CUARENTA" ;x=x-40; }
            if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
            if(x==30)   {cout<<"TREINTA"  ;x=x-30; }
            if(x>20) {cout<<"VEINTI"       ;x=x-20; }
            if(x==20)   {cout<<"VEINTE"       ;x=x-20; }
        if(x>=16)    {cout<<"DIECI"        ;x=x-10; }
       else if(x==15)   {cout<<"QUINCE"       ;x=x-15; }
       else if(x==14)   {cout<<"CATORCE"  ;x=x-14; }
       else if(x==13)   {cout<<"TRECE"        ;x=x-13; } 
       else if(x==12)   {cout<<"DOCE"     ;x=x-12; }
       else if(x==11)   {cout<<"ONCE"     ;x=x-11; }
       else if(x==10)   {cout<<"DIEZ"     ;x=x-10; }      
        if(x==9)    {cout<<"NUEVE"        ;x=x-9;  }
        if(x==8)    {cout<<"OCHO"     ;x=x-8;  }
        if(x==7)    {cout<<"SIETE"        ;x=x-7;  }
            if(x==6)    {cout<<"SEIS"     ;x=x-6;  }
       else if(x==5)    {cout<<"CINCO"        ;x=x-5;  }
       else if(x==4)    {cout<<"CUATRO"       ;x=x-4;  }
       else if(x==3)    {cout<<"TRES"     ;x=x-3;  }
       else if(x==2)    {cout<<"DOS"      ;x=x-2;  }
       else if(x==1)    {cout<<"UNO"      ;x=x-1;  }
       }
    cout<<endl;
cin.ignore();
	
}
	
void getCondecimales(){                   //numero 12 conversiones con decimales
int argc; 
char** argv;
double valor;
 int miles,cientos,unidades,decimales;

 char numeros[100][20] = 
 {
  {""},{"uno"},{"dos"},{"tres"},{"cuatro"},{"cinco"},{"seis"},{"siete"},{"ocho"},{"nueve"},
  {"diez"},{"once"},{"doce"},{"trece"},{"catorce"},{"quince"},{"dieciseis"},{"dieceisiete"},{"dieciocho"},{"diecinueve"},
  {"veinte"},{"veintun"},{"veintidos"},{"veintitres"},{"veinticuatro"},{"veinticinco"},{"veintiseis"},{"veintisiete"},{"veintiocho"},{"veintinueve"},
  {"treinta"},{"treinta y uno"},{"treinta y dos"},{"treinta y tres"},{"treinta y cuatro"},{"treinta y cinco"},{"treinta y seis"},{"treinta y siete"},{"treinta y ocho"},{"treinta y nueve"},
  {"cuarenta"},{"cuarenta y uno"},{"cuarenta y dos"},{"cuarenta y tres"},{"cuarenta y cuatro"},{"cuarenta y cinco"},{"cuarenta y seis"},{"cuarenta y siete"},{"cuarenta y ocho"},{"cuarenta y nueve"},
  {"cincuenta"},{"cincuenta y uno"},{"cincuenta y dos"},{"cincuenta y tres"},{"cincuenta y cuatro"},{"cincuenta y cinco"},{"cincuenta y seis"},{"cincuenta y siete"},{"cincuenta y ocho"},{"cincuenta y nueve"},
  {"sesenta"},{"sesenta y uno"},{"sesenta y dos"},{"sesenta y tres"},{"sesenta y cuatro"},{"sesenta y cinco"},{"sesenta y seis"},{"sesenta y siete"},{"sesenta y ocho"},{"sesenta y nueve"},
  {"setenta"},{"setenta y uno"},{"setenta y dos"},{"setenta y tres"},{"setenta y cuatro"},{"setenta y cinco"},{"setenta y seis"},{"setenta y siete"},{"setenta y ocho"},{"setenta y nueve"},
  {"ochenta"},{"ochenta y uno"},{"ochenta y dos"},{"ochenta y tres"},{"ochenta y cuatro"},{"ochenta y cinco"},{"ochenta y seis"},{"ochenta y siete"},{"ochenta y ocho"},{"ochenta y nueve"},
  {"noventa"},{"noventa y uno"},{"noventa y dos"},{"noventa y tres"},{"noventa y cuatro"},{"noventa y cinco"},{"noventa y seis"},{"noventa y siete"},{"noventa y ocho"},{"noventa y nueve"},
 };

 char centenas[10][20] = 
 {
  {""},{"cien"},{"doscientos"},{"trescientos"},{"cuatrocientos"},{"quinientos"},{"seiscientos"},{"sietecientos"},{"ochocientos"},{"novecientos"},
 };
 
 std::cout << "Ingrese un  Numero: ";
 std::cin >> valor;

 miles = ((int)valor)/1000;
 cientos = (((int)valor)%1000)/100;
 unidades = ((int)valor)%100;
 decimales = ((int) (valor*100.0))%100 ;

 if (miles)
  std::cout << numeros[miles] << " mil ";
 
 if (cientos)
  std::cout << centenas[cientos] << " ";
 
 if (unidades) 
  std::cout << numeros[unidades];
 
 if (decimales)
 {
  if(miles || cientos || unidades)
  {
   std::cout << " con ";
  }
 
  std::cout << numeros[decimales];
 }

 std::cout << std::endl;


 system("pause");
}

void getTablamult(){        //numero 13 tabla de multiplicar
	
    int number;
    cout<<"Agregue el numero de la tabla que desea ver :"<<endl;
    cin>>number;
    
    for(int i=1;i<=10;i++){
        int multiplicacion = i * number;
        cout<<number <<" x "<< i <<"="<< multiplicacion <<endl;
    }
	
}

void getTablasmultiplicar(){             //numero 14 todas las tablas de multiplicar
	
	int izquierda=1;
int derecha=1;

cout << "Tablas de multiplicar" << endl;
while (izquierda <= 10){

cout << izquierda << "x" << derecha << "=" << izquierda*derecha << endl;

/* Con la linea anterior sacamos el resultado y le damos
el formato tipico de las tablas de multiplicar */

if (derecha == 10){
cout << endl;
izquierda++; /* Cuando el numero de la derecha llega a diez ya tenemos la primer tabla asi 

que pasamos a la siguiente incrementando el numero de la izquierda en uno*/

derecha=0; /* Tras llegar el numero de la derecha a diez lo devolvemos a 1

para que empieze con la siguiente tabla */

}

derecha++; // Tras mostrar el resultado de la primera multiplicacion pasamos a la siguiente

}

cin.get();
	
}

void getMultigrafico()     //numero 15 multiplicacion grafica
{       
int n1;
int n2;
float x;
	
cout<<"Esta es una multiplicacion grafica."<<endl;
cout<<"Igrese el primer valor: ";
cin>>n1;
cout<<"Ingrese su segundo valor: ";
cin>>n2;
x = n1 * n2;
cout<<endl;
cout<<"Su multiplicacion es: "<<endl;
 cout<<"    "<<n1<<endl;
 cout<<"    "<<n2<<endl;
 cout<<"_x_________"<<endl;
 cout<<"   "<<x;
 cout<<endl;

	
}

void getDecimalbinario(){        //numero 16 conversion de decimal a binario
	
using std::cout; using std::endl;
using std::string; using std::bitset;
using std::cin;

    int number;
    cout<<"Ingrese el valor a convertir en binario: "<<endl;
    cin>>number;

    bitset<32> bs1(number);
    cout << "binary:  " << bs1 << endl;
    bitset<16> bs2(number);
    cout << "binary:  " << bs2 << endl;
    bitset<8> bs3(number);
    cout << "binary:  " << bs3 << endl;
    bitset<5> bs4(number);
    cout << "binary:  " << bs4 << endl;
    cout << endl;
	
}

void getDecimalhexadecimal(){            //numero 17 convercion de decimal a hexadecimal
	

    long dec;
    int rem;

    std::cout << "Ingrese el valor a convertir:  ";
    std::cin >> dec;

    while (dec > 0) {
        rem = dec % 16;
        if (rem > 9) {
            switch (rem) {
               case 10: std::cout << "su valor en hexadecimal es: A"; break;
               case 11: std::cout << "su valor en hexadecimal es: B"; break;
               case 12: std::cout << "su valor en hexadecimal es: C"; break;
               case 13: std::cout << "su valor en hexadecimal es: D"; break;
               case 14: std::cout << "su valor en hexadecimal es: E"; break;
               case 15: std::cout << "su valor en hexadecimal es: F"; break;
            }
        }
        else {
           std::cout<<"Su valor en hexadecimal es: " <<rem;
        }
        cout<<endl;
        dec = dec / 16;
    }
}


void getFigurasgeo(){
	
	//numero 18 aca falta la cabecera y el case.             dibuja figuras geometricas

	int op;
	cout<<"     Elige la forma que mas deseas."<<endl;
	cout<<" [1] Cuadrado."<<endl;
	cout<<" [2] Rectangulo."<<endl;
	cout<<" [3] Triangulo."<<endl;
	cout<<" [4] Rombo."<<endl;
	cout<<"Ingrese su opcion: ";
	cin>>op;
	cout<<endl;
	
if (op == 1){
	
    cout<<"Cuadrado: \n\n\n";
    cout<<"  ********************     "<<endl;
    cout<<"  *                  *     "<<endl;
    cout<<"  *                  *     "<<endl;
    cout<<"  *                  *     "<<endl;
    cout<<"  *                  *     "<<endl;
    cout<<"  *                  *     "<<endl;
    cout<<"  *                  *     "<<endl;
    cout<<"  *                  *     "<<endl;
    cout<<"  ********************     "<<endl;
    
	}
else if (op == 2)
    {
    	    cout<<"Rectangulo: \n\n\n";
    cout<<"  **************************************    "<<endl;
    cout<<"  *                                    *    "<<endl;
    cout<<"  *                                    *    "<<endl;
    cout<<"  *                                    *    "<<endl;
    cout<<"  *                                    *    "<<endl;
    cout<<"  *                                    *    "<<endl;
    cout<<"  *                                    *    "<<endl;
    cout<<"  *                                    *    "<<endl;
    cout<<"  *                                    *    "<<endl;
	cout<<"  *                                    *    "<<endl;
	cout<<"  **************************************    "<<endl;
	   
    }
	
else if(op == 3)
{

	cout<<"                           **                "<<endl;
	cout<<"                          *  *               "<<endl;
	cout<<"                         *    *              "<<endl;
	cout<<"                        *      *             "<<endl;
	cout<<"                       *        *            "<<endl;
	cout<<"                      *          *           "<<endl;
	cout<<"                     *            *          "<<endl;
	cout<<"                    *              *         "<<endl;
	cout<<"                   *                *        "<<endl;
	cout<<"                  *                  *       "<<endl;
	cout<<"                 *                    *      "<<endl;
	cout<<"                *                      *     "<<endl;
	cout<<"               *                        *    "<<endl;
	cout<<"              ****************************   "<<endl;
	
	
}

else {
	
	cout<<"                           **                "<<endl;
	cout<<"                          *  *               "<<endl;
	cout<<"                         *    *              "<<endl;
	cout<<"                        *      *             "<<endl;
	cout<<"                       *        *            "<<endl;
	cout<<"                      *          *           "<<endl;
	cout<<"                     *            *          "<<endl;
	cout<<"                    *              *         "<<endl;
	cout<<"                   *                *        "<<endl;
	cout<<"                  *                  *       "<<endl;
	cout<<"                 *                    *      "<<endl;
	cout<<"                *                      *     "<<endl;
	cout<<"               *                        *    "<<endl;
	cout<<"              *                          *   "<<endl;
	cout<<"               *                        *    "<<endl;
	cout<<"                *                      *     "<<endl;
	cout<<"                 *                    *      "<<endl;
	cout<<"                  *                  *       "<<endl;
	cout<<"                   *                *        "<<endl;
	cout<<"                    *              *         "<<endl;
	cout<<"                     *            *          "<<endl;
	cout<<"                      *          *           "<<endl;
	cout<<"                       *        *            "<<endl;
	cout<<"                        *      *             "<<endl;
	cout<<"                         *    *              "<<endl;
	cout<<"                          *  *               "<<endl;
	cout<<"                           **                "<<endl;
	
}

}

void getMoverpunto(){
	
	
	
}


void getCajero(){
	
	//numero 20 aca falta cabecera y case                             simula un cajero automatico
 int saldo=3000;
 int op, monto;
 do{
  printf ("Cajero automatico\n");
  printf ("1- Consultar saldo inicial\n");
  printf ("2- Retirar efectivo\n");
  printf ("3- SALIR\n");
  cout<<"Ingrese su opcion: ";
  scanf ("%d", &op);
  switch (op){
   case 1:
    printf ("Su saldo inicial es de:%d\n",saldo);
    break;
   case 2:
    printf ("Ingrese monto a retirar\n");
    scanf ("%d", &monto);
    saldo=saldo-monto;
    //printf ("Su nuevo saldo es de:%d\n",saldo);
    break;
  }  
 }
 while (op!=3);
	
}


void getHipotenusa(){       //numero 21     encuentra la hipotenusa
	
float c1,c2,hipo=0;
 
  cout << "Digite cateto 1: ";
  cin >> c1;
  cout << "Digite cateto 2: ";
  cin >> c2;
 
  hipo = sqrt(pow(c1,2)+pow(c2,2));
 
  cout << "La hipotenusa es " << hipo << endl;
  cout<<endl;
	
}

void getPN(){
	
	float n;
cout<<" INVESTIGAR UN NUMERO";
cout<<"\n\r -----------------";
cout<<"\n\r Ingrese un numero para evaluar :";
cin>>n;
if(n>1) cout<<"\n\r El numero es Positivo ";
if (n<1) cout<<"\n\r El numero es Negativo";
if(n==0)  cout<<"el numero es 0";

getch();
}
void getforma(){
	
int op;
	cout<<"     Elige la forma que mas deseas."<<endl;
	cout<<" [1] Cruz."<<endl;
	cout<<" [2] cilueta de reloj de arena ."<<endl;
	
	cout<<"Ingrese su opcion: ";
	cin>>op;
	cout<<endl;
	
if (op == 1){
	
    cout<<"Cuadrado: \n\n\n";
    cout<<"  *********************     "<<endl;
    cout<<"  *         *         *     "<<endl;
    cout<<"  *         *         *     "<<endl;
    cout<<"  *         *         *     "<<endl;
    cout<<"  *********************     "<<endl;
    cout<<"  *         *         *     "<<endl;
    cout<<"  *         *         *     "<<endl;
    cout<<"  *         *         *     "<<endl;
    cout<<"  *********************     "<<endl;
    
	}
else if (op == 2)
    {
    	    cout<<"Rectangulo: \n\n\n";
    cout<<"  ***************   "<<endl;
    cout<<"  *             *    "<<endl;
    cout<<"  *           *    "<<endl;
    cout<<"  *         *    "<<endl;
    cout<<"  *         *    "<<endl;
    cout<<"  *          *    "<<endl;
    cout<<"  *             *    "<<endl;
    cout<<"  *               *    "<<endl;
    cout<<"  *                 *    "<<endl;
	cout<<"  *                 *    "<<endl;
	cout<<"  ********************   "<<endl;
	   
    }
	


}
	



void getCalcularbase(){
int base = 0;
int altura = 0;
int tipo = 0;
int area = 0;


    cout <<"Calculo de area de figuras geometricas\n" <<endl;
    cout <<"Triangulo-1\nCuadrado-2\n" <<endl;
    cout <<"Escribe el numero del tipo de figura de la que quierres saber su area: \n" <<endl;
    cin >>tipo;


    if (tipo == 2)

        cout <<"La formula para el area del cuadrado es base*altura" <<endl;
        cout <<"LLena los parametros;" <<endl;
        cout <<"base: " <<endl;
        cin >>base;
        cout <<"Altura: " <<endl;
        cin >>altura;
        area = base*altura;
        cout <<"El area del cuadrado es: \n";
        cout <<area;


    if (tipo == 1)
        cout <<"La formula para el area del triangulo es base*altura/2"<<endl;
        cout <<"LLena los parametros;" <<endl;
        cout <<"base: " <<endl;
        cin >>base;
        cout <<"Altura: " <<endl;
        cin >>altura;
        area = base*altura/2;
        cout <<"El area del triangulo es: ";
        cout <<area;
	
}

void getKM(){
	
float milla;
float km;
float r;
int x;
	


	
cout<<"Conversiones de Kilometros a milla y viceversa"<<endl;
cout<<"[1] Kilometros a millas"<<endl;
cout<<"[2] Millas a kilometros"<<endl;
cout<<"Elige una opcion: ";
cin>>x;

if (x == 1){
	
    cout<<"Ingrese la cantidad en Kilometros: ";
    cin>>km;
    r = km * 0.62137;
    cout<<"El valor en millas es: "<<r;
	}
else{
	 
	cout<<"Ingrese la cantidad en millas: ";
	cin>>milla;
	r = milla / 0.62137;
	cout<<"El valor en Kilometros es: "<<r;
	   
    }
}





	
















