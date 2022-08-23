// gg programador esqueçaaaaaaaaaaaaaaaaa
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <time.h>
#include <math.h>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleTitle ("calculadora do gg");

    float x, a, b, c;
    float y;
    float thing;
    float sum;
    int x1 = x;
    int y1 = y1;
equacao:
   cout << "o que deseja fazer?" << endl;
   cout << "1=somar, 2=restante, 3=multiplicacao, 4=divisao, 5=elevar, 6=numero aleatorio, 7=soma das raizes, 8=porcentagem, 9=raiz quadrada, 10=logaritmo, 11=promedio 5 numeros" << endl;
   cin >> thing;

   if(thing == 1){
    cout << "\n coloque o numero que deseja somar" << endl;
    cin >> x >> y;
    sum = x + y;
    cout << "o resultado e: " << sum;
   }

   if(thing == 2){
    cout << "\n digite os numeros para subtrair" << endl;
    cin >> x >> y;
    sum = x - y;
    cout << "o resultado e: " << sum;
   }

   if(thing == 3){
    cout << "\n digite os numeros para multiplicar" << endl;
    cin >> x >> y;
    sum = x * y;
    cout << "o resultado e: " << sum;
   }

   if(thing == 4){
    cout << "\n digite os numeros para dividir" << endl;
    cin >> x >> y;
    sum = x / y;
    cout << "o resultado e: " << sum;
   }

   if(thing == 5){
    cout << "\n digite os numeros para elevar" << endl;
    cin >> x >> y;
    sum = pow(x, y);
   }

   if (thing == 6){
    cout << "\n o resultado e" << endl;
    cin >> x1 >> y1;
    srand(time(0));
        for(int x = x; x < 1; x++){
        }
        cout << x1 + rand() %(y1 +1 - x1) << endl;
   }

   if(thing == 7){
    cout << "\n digite os numeros para somar" << endl;
    cin >> x >> y;
    sum = sqrt(x) + sqrt(y);
    cout << "o resultado e " << sum << endl;
   }

   if(thing == 8){
    cout << "\n digite o número número total e, em seguida, o número para a porcentagem" << endl;
    cin >> x >> y;
    sum = (y*100)/x;
    cout << "\n" << y << " e o " << sum << "% de " << x << endl;
   }

   if(thing == 9){
    cout << "\n digite o numero para raiz quadrada" << endl;
    cin >> x;
    sum = sqrt(x);
    cout << "o resultado e " << sum << endl;
   }

   if(thing == 10){
    cout << "\n digite o numero para logaritmo" << endl;
    cin >> x;
    sum = log(x);
    cout << "o resultado e " << sum << endl;
   }

   if(thing == 11){
    cout << "\n digite o numero para promedio" << endl;
    cin >> x >> y >> a >> b >> c;
    sum = (x + y + a + b + c) / 5;
    cout << "o promedio e " << sum << endl;
   }

   else{
    cout << "\n oxi doido isso e a opcao que eu coloquei na tela olha direito tio\n" << endl;
    goto equacao;
   }

   return 0;
   }
