#include "morse.h"

/*
 * Name- Kartik Arora
 * Roll No. 2110994835
 * 
 * */

// reference to the morse code rules:- https://www.codebug.org.uk/learn/step/541/morse-code-timing-rules/

// reference to the morse code index image:- https://upload.wikimedia.org/wikipedia/commons/thumb/b/b5/International_Morse_Code.svg/1200px-International_Morse_Code.svg.png


void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}


void loop()
{
  char ch;
  bool done = false;
  while (!done)
  {
    if (Serial.available())
    {
      ch = Serial.read();
      done = dispChar(ch);
    }
  }

  Serial.println("The name was displayed successfully!");
  Serial.println("Do you want to enter another name? (y/n) " );
  do
  {
    ch = Serial.read();
  }while(ch == '.');
   
  if (ch != 'y')
  {
    Serial.println("Program came to an end.");
    while(true) {}
  }
}
