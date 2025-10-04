#include <iostream>
#include <string>

using namespace std;
int main(){
    //Pregunta 1.1
    int num1 = 1;
    float numero_decimal = 20.5;
    char caracter = 'S';

    cout<<"Sus variable de tipo entero es: "<<num1<<endl;
    cout<<"Su variable decimal es :"<<numero_decimal<<endl;
    cout<<"Su variable de tipo caracter es: "<<caracter<<endl;
    
    //Respuesta pregunta 1.2
    /**
     * int solo representa numeros enteros y es recomendable usar cuando
     * necesitamos contar cosas, edades o cantidades
     * 
     * flaot representa numeros decimales y es recomendable usar cuando
     * tengamos que colocar precios o medidas
     * 
     * char es para presentar un solo caracter lo recomendable es usarlo
     * para letras o simbolos
    */
    
    //PREGUNTA 2.1 
    int n1;
    int n2;
    
    cout<<"Por favor escribe un numero entero: ";
    cin>> n1;
    cout<<"Por favor ingresa otro numero entero: ";
    cin>>n2;
    
    int suma = n1 + n2;
    int resta = n1 - n2;
    int multiplicacion = n1*n2;
    int division = n1/n2;                           
    int modulo = n1%n2;
    
    cout<<"Suma: "<<suma<<"\n";
    cout<<"Resta: "<<resta<<"\n";
    cout<<"Multiplicacion: "<<multiplicacion<<"\n";
    cout<<"Division: "<<division<<"\n";
    cout<<"Modulo: "<<modulo<<"\n";
    
    //Pregunta 2.2 
    /**
     * La diferencia entre los operadores es que == verifica si dos valores
     * son iguales
     * Y != verifica si dos valores son diferentes
    */
    
    //Ejemplo de usa
    int h = 5;
    int g= 3;
    
    if (h == g) {
        cout<<"a y b son iguales"<<endl;
    }
    if (h != g){
        cout<<"a y b son diferentes"<<endl;
    }
    
    //Pregunta 2.3
    /**
     * El operador logico && se usa solo cuando queremos comprobar 
     * que si o si es valido por asi decirlo
     * El operador logico || lo usamos cuando al menos un valor es verdadero
     * El operador ! lo usamos cuando queremos invertir el valor de verdad de
     * una condicion
     */
     
     //Pregunta 3.1 
     
     int edad;
cout << "Ingrese su edad: ";
cin >> edad;

if (edad >= 18) {
    cout << "Usted es mayor de edad." << endl;
} else {
    cout << "Usted es menor de edad." << endl;

}
}