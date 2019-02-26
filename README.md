# Encoder com motor da lego (NXT, EV3 Kit de robotica da lego)
Tutorial basico de como utilizar o encoder de forma pratica com motoro de lego, uma shield(drive) para motores e arduino.
Tendo em mente que você tem conhecimento para fazer a ligação do motor e da shield no arduino vamos pratir do conseito basico do encoder.
---
# Ligando o motor LEGO no Arduino
Os motores LEGO do NXT e EV3 possuem 6 fios em seu conector que tem as seguintes funções:

- Preto: Positivo/Negativo do Motor (Ligar na Ponte-H)
- Branco: Positivo/Negativo do Motor (Ligar na Ponte-H)
- Vermelho: GND do Encoder (Conectar em todo GND do circuito)
- Verde: Alimentação do Encoder (Alimentação 5V do Encoder)
- Amarelo: Saída 1 do Encoder (Ligar em uma porta de interrupção no Arduino)
- Azul: Saída 2 do Encoder (Ligar em uma porta de interrupção no Arduino)
![alt text](https://i.imgur.com/GspO2Eo.gif)


- Você deve encontras os fios Amarelo e Azul do seu motor e conectalas em umas das portas de interrupção do arduino, não é necessario o uso das duas saidas caso for utilizar apenas uma use o fio **Amarelo**, o recomendado é de se utilizar os 2 fios para uma melhor precisão, caso não haja espaço na placa use apenas 1 fio.
---
# Quais são e o que são portas de interrupção do arduino ? 

No Arduino, assim como em qualquer outro microcontrolador, pode-se utilizar interrupções para priorizar ou não tarefas afim de realiza-las no momento em que a interrupção for detectada. 

As portas de interrupção ou também conhecidas como __interrupts__ param a execução do código para realizar uma tarefa que pode ter sido detectada por uma ação externa (um botão pressionado, um sensor lido...) ou por detecções em software (temporizadores ou sinais na própria programação). Ao final da tarefa detectada pela interrupção, o código continua normalmente. 

No caso de leitura de pulsos nos encoders devemos usar portas de interrupção para que a leitura seja feita na mudança de estado do encoder e não atrasando todo o processamento do microcontrolador. Em muitos casos, o microcontrolador é responsável por mais de uma tarefa além da leitura dos encoders e por conta disso é indispensável a utilização do uso de portas de interrupção.

**Quais são as portas de interrupção ??**

As principais placas utilizadas são a Arduino UNO e Arduino MEGA (ou equivalente, como exemplo as placas da ROBOCORE).
- Arduino UNO  :  Portas digitais 2 e 3 
- Arduino MEGA :  Portas digitais 2, 3, 18, 19, 20, 21 

Maiores informações de portas de interrupção e quais são elas, consulte em:
https://www.arduino.cc/en/Reference/AttachInterrupt

---
# Instale a biblioteca do encoder.
Depois de fazer toda ligação do circuito, instale primeiro a biblioteca "Encoder.h" no seu Arduino.

**📘 Link da Biblioteca:** 
https://github.com/PaulStoffregen/Encoder

**📔 Como instalar uma biblioteca no Arduino:** 
https://www.robocore.net/tutoriais/adicionando-bibliotecas-na-ide-arduino.html
