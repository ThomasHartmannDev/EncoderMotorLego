/*
PROGRAMAÇÃO FEITA POR : THOMAS HARTMANN

Quaisquer erro de portugues deve ser relevado, esta programação è apenas um exemplo para explicar como funciona o 
encoder.

O encoder nada mais è doque leitura de pulso dos motores, com essa leitura è possivel conseguir muito mais precisão
do que usando delay(tempo), não são em todos os motores que o mesmo funciona.
a programação foi feita em base ao MOTOR DA LEGO KIT DE ROBOTICA.

Leia o README para entender a ligação eletrica.
*/




#include <Encoder.h> // No repositorio tem o a biblioteca para instalar
Encoder MotorDir(2, 3);     //Pinagem do interrupitor do MotoDir 
Encoder MotorEsq(20, 19);   //Pinagem do interrupitor do MotoDir 

// Os valores devem ser setados em LONG para não gerar erro caso alcance valores muito altos.
long Pulsos_Dir = 0; 
long Pulsos_Esq = 0;

const int pulsolimite = 6020; // Pulso positivo (motor girando para frente)
const int pulsolimiten = -6020;// Pulso Negativo (motor girando para trás)

//portas do motor
// motor
const int B_mais_pwm =7; 
const int B_menos    =6;
const int A_mais_pwm =5;
const int A_menos    =4;

void setup() {
  // put your setup code here, to run once:

  pinMode(B_menos, OUTPUT);
  pinMode(A_menos, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
Serial.print("Dir:");
Serial.print(Pulsos_Dir);
Serial.println("  ");
Serial.print("Esq:");
Serial.print(Pulsos_Esq);
Serial.println("  ");
Pulsos_Dir = MotorDir.read();
Pulsos_Esq = MotorEsq.read();
  motor_avancar(140);
  while(Pulsos_Dir <= pulsolimite && Pulsos_Esq <= pulsolimite ){
  motor_parar();

}
/*
Exemplo de cima è como funciona para fazer os motores girar e parar quando chegar no falor determinado
na variavel "pulsolimite". O mesmo tambem pode ser substituido por valores numericos. 
EX : while(Pulsos_Dir <= 100 && Pulsos_Esq <= 100 ){ [...]

Uma Boa dica è sempre zerar o Encoder para novas ações.
lembre que se usar a logica de cima para ir para frente e para trás em caso de curvas um lado
deve ser maior que, eo outro lado menor que.

Um motor quando roda para tras ele gera valor negativo.
Um motor quando roda para frente ele gera valor positivo.

logo um robo de esteira um motor ira girar para tras e outro para frente consequentemente 
ira gerar um valor positivo e outro negativo.
*/
}


