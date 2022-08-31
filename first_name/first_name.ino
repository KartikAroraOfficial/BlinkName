#define DOT_TIME 300          // also the time for space between the symbols - 1 unit
#define DASH_TIME 900         // also the space between letters - 3 units
#define WORD_SPACE 2100       // space between two words - 7 units
#define SAME_LETTER_TIME 300  // 1 unit
#define DIFF_LETTER_TIME 900  // 3 units


/*
 * Name- Kartik Arora
 * Roll No. 2110994835
 */


// reference to the morse code rules:- https://www.codebug.org.uk/learn/step/541/morse-code-timing-rules/


// reference to the morse code index image:- https://upload.wikimedia.org/wikipedia/commons/thumb/b/b5/International_Morse_Code.svg/1200px-International_Morse_Code.svg.png
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{

  // displays KARTIK
  dispK();
  delay(DIFF_LETTER_TIME);
  dispA();
  delay(DIFF_LETTER_TIME);
  dispR();
  delay(DIFF_LETTER_TIME);
  dispT();
  delay(DIFF_LETTER_TIME);
  dispI();
  delay(DIFF_LETTER_TIME);
  dispK();
  delay(DIFF_LETTER_TIME);
  
}






void blinkDit()             // we call dots DIT in MORSE CODE
{
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(DOT_TIME);                      
  digitalWrite(LED_BUILTIN, LOW);
}

void blinkDah()             // we call dashes DAH in MORSE CODE
{
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(DASH_TIME);                      
  digitalWrite(LED_BUILTIN, LOW);
  
}

void dispK()                // displays K
{
  blinkDah();
  delay(SAME_LETTER_TIME);
  blinkDit();
  delay(SAME_LETTER_TIME);
  blinkDah();
}

void dispA()                // displays A
{
  blinkDit();
  delay(SAME_LETTER_TIME);
  blinkDah();
}

void dispR()                // displays R
{
  blinkDit();
  delay(SAME_LETTER_TIME);
  blinkDah();
  delay(SAME_LETTER_TIME);
  blinkDit();
  
}

void dispT()                // displays T
{
  blinkDah();
}

void dispI()                // displays I
{
 blinkDit();
 delay(SAME_LETTER_TIME);
 blinkDit();
}

void dispO()                // displays O
{
  blinkDah();
  delay(SAME_LETTER_TIME);
  blinkDah();
  delay(SAME_LETTER_TIME);
  blinkDah();
}
