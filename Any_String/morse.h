#ifndef MORSE_H
#define MORSE_H

#define UNIT 300
#define DOT_TIME UNIT          // also the time for space between the symbols - 1 unit
#define DASH_TIME 3*UNIT         // also the space between letters - 3 units
#define WORD_SPACE 7*UNIT      // space between two words - 7 units
#define SAME_LETTER_TIME UNIT  // 1 unit
#define DIFF_LETTER_TIME 3*UNIT  // 3 units


bool dispChar(char ch);


#endif
