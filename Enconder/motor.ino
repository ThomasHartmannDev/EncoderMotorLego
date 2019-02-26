/*
Funções dos motores. 
*/


void motor_avancar(byte forca)
{
  digitalWrite(B_menos,LOW);
  analogWrite(B_mais_pwm,forca);
  digitalWrite(A_menos, LOW);
  analogWrite(A_mais_pwm,forca);
  }
  //função para voltar()
void motor_voltar(byte forca)
{
  forca=255-forca;
   digitalWrite(B_menos,HIGH);
   analogWrite(B_mais_pwm,forca);
   digitalWrite(A_menos,HIGH);
   analogWrite(A_mais_pwm,forca);    
}
//função para direita()
void motor_esquerda(byte forca)
{
  byte x =255-forca;
   digitalWrite(B_menos,LOW);
   analogWrite(B_mais_pwm,x);
   digitalWrite(A_menos,HIGH);
   analogWrite(A_mais_pwm,forca);   
}
//função para esquerda()
void motor_direita(byte forca)
{
  byte x =255-forca;
   digitalWrite(B_menos,HIGH);
   analogWrite(B_mais_pwm,forca);
   digitalWrite(A_menos,LOW);
   analogWrite(A_mais_pwm,x); 
}
//função para parar()
void motor_parar()
{
   digitalWrite(B_menos,LOW);
   analogWrite(B_mais_pwm,0);
   digitalWrite(A_menos,LOW);
   analogWrite(A_mais_pwm,0);
}

