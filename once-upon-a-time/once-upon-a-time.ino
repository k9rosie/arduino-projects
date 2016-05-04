/*
 * Steven Peralta & Chase Pugh
 * 4/6/16
 * play's a neat little song
 */

// define notes with their frequencies
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978


// define notes with their lengths
#define WHOLE noteLength
#define HALF noteLength/2
#define QUARTER noteLength/4
#define EIGHTH noteLength/8
#define SIXTEENTH noteLength/16
#define DOTTED_EIGHTH 45/bpm*1000

int pin = 2;
int button = 3;
// natural bpm is 120
float bpm = 120;
float noteLength = (240/bpm)*1000;

void setup() {
  pinMode(pin, OUTPUT);
}

void loop() {
  // every line break constitutes a measure in the song
    playNote(NOTE_C5, HALF);
    playNote(NOTE_C6, HALF);

    playNote(NOTE_G5, WHOLE);

    playNote(NOTE_F5, HALF);
    playNote(NOTE_C6, HALF);

    playNote(NOTE_C5, WHOLE);

    playNote(NOTE_C5, HALF);
    playNote(NOTE_F5, HALF);

    playNote(NOTE_C6, HALF);
    playNote(NOTE_D6, HALF);

    playNote(NOTE_C6, HALF);
    playNote(NOTE_G5, HALF);

    playNote(NOTE_F5, WHOLE);
  
    playNote(NOTE_C5, HALF);
    playNote(NOTE_C6, HALF);

    playNote(NOTE_G5, WHOLE);

    playNote(NOTE_F5, HALF);
    playNote(NOTE_C6, HALF);

    playNote(NOTE_C5, WHOLE);

    playNote(NOTE_C5, HALF);
    playNote(NOTE_F5, HALF);

    playNote(NOTE_C6, HALF);
    playNote(NOTE_D6, HALF);

    playNote(NOTE_C6, HALF);
    playNote(NOTE_G5, HALF);
    
    playNote(NOTE_F5, HALF);
    delay(QUARTER);
    delay(EIGHTH);
    playNote(233, SIXTEENTH);
    playNote(NOTE_B3, SIXTEENTH);

    playNote(NOTE_C4, HALF);
    playNote(NOTE_C5, QUARTER);
    playNote(NOTE_A4, QUARTER);

    playNote(NOTE_G4, QUARTER);
    playNote(NOTE_F4, QUARTER);
    playNote(NOTE_E4, QUARTER);
    playNote(NOTE_F4, QUARTER);

    playNote(NOTE_G4, HALF);
    playNote(NOTE_E5, QUARTER);
    playNote(NOTE_E5, EIGHTH);
    playNote(622, SIXTEENTH);
    playNote(NOTE_D5, SIXTEENTH);

    playNote(NOTE_C5, WHOLE);

    playNote(NOTE_D4, HALF);
    playNote(NOTE_C5, QUARTER);
    playNote(NOTE_A4, QUARTER);

    playNote(NOTE_G4, QUARTER);
    playNote(NOTE_F4, QUARTER);
    playNote(NOTE_G4, QUARTER);
    playNote(NOTE_A4, QUARTER);

    playNote(NOTE_E4, HALF);
    playNote(NOTE_G4, HALF);

    playNote(NOTE_G4, QUARTER);
    playNote(NOTE_F4, QUARTER);
    playNote(NOTE_E4, QUARTER);
    playNote(NOTE_F4, QUARTER);

    playNote(NOTE_C4, HALF);
    playNote(NOTE_C5, QUARTER);
    playNote(NOTE_A4, QUARTER);

    playNote(NOTE_G4, QUARTER);
    playNote(NOTE_F4, QUARTER);
    playNote(NOTE_E4, QUARTER);
    playNote(NOTE_F4, QUARTER);

    playNote(NOTE_G4, HALF);
    playNote(NOTE_E5, QUARTER);
    playNote(NOTE_E5, EIGHTH);
    playNote(622, SIXTEENTH);
    playNote(NOTE_D5, SIXTEENTH);
    
    playNote(NOTE_C5, WHOLE);
    
    playNote(NOTE_D4, HALF);
    playNote(NOTE_C5, QUARTER);
    playNote(NOTE_A4, QUARTER);
    
    playNote(NOTE_G4, QUARTER);
    playNote(NOTE_F4, QUARTER);
    playNote(NOTE_G4, QUARTER);
    playNote(NOTE_A4, QUARTER);
    
    playNote(NOTE_E4, HALF);
    playNote(NOTE_G4, HALF);
    
    playNote(NOTE_G4, QUARTER);
    playNote(NOTE_F4, QUARTER);
    playNote(NOTE_E4, QUARTER);
    playNote(NOTE_F4, QUARTER);
    
    playNote(NOTE_C6, QUARTER);
    playNote(NOTE_F5, QUARTER);
    playNote(NOTE_G5, QUARTER);
    playNote(NOTE_F5, QUARTER);
    
    playNote(NOTE_B4, QUARTER);
    playNote(NOTE_F5, QUARTER);
    playNote(NOTE_G5, QUARTER);
    playNote(NOTE_F5, QUARTER);
    
    playNote(466, QUARTER); // not defined in the list at the top
    playNote(NOTE_F5, QUARTER);
    playNote(NOTE_G5, QUARTER);
    playNote(932, QUARTER);
    
    playNote(NOTE_A5, QUARTER);
    playNote(NOTE_G5, QUARTER);
    playNote(NOTE_F5, QUARTER);
    playNote(NOTE_C5, QUARTER);
    
    playNote(NOTE_C6, QUARTER);
    playNote(NOTE_F5, QUARTER);
    playNote(NOTE_G5, QUARTER);
    playNote(NOTE_F5, QUARTER);
    
    playNote(NOTE_B4, QUARTER);
    playNote(NOTE_F5, QUARTER);
    playNote(NOTE_G5, QUARTER);
    playNote(NOTE_F5, QUARTER);
    
    playNote(466, QUARTER);
    playNote(NOTE_F5, QUARTER);
    playNote(NOTE_G5, QUARTER);
    playNote(932, QUARTER);
    
    playNote(NOTE_A5, QUARTER);
    playNote(NOTE_G5, QUARTER);
    playNote(NOTE_F5, QUARTER);
    playNote(NOTE_C5, QUARTER);
    
    playNote(NOTE_C6, QUARTER);
    playNote(NOTE_F5, QUARTER);
    playNote(NOTE_G5, QUARTER);
    playNote(NOTE_F5, QUARTER);
    
    playNote(NOTE_B4, QUARTER);
    playNote(NOTE_F5, QUARTER);
    playNote(NOTE_G5, QUARTER);
    playNote(NOTE_F5, QUARTER);
    
    playNote(466, QUARTER);
    playNote(NOTE_F5, QUARTER);
    playNote(NOTE_G5, QUARTER);
    playNote(932, QUARTER);
    
    playNote(NOTE_A5, QUARTER);
    playNote(NOTE_G5, QUARTER);
    playNote(NOTE_F5, QUARTER);
    playNote(NOTE_C5, QUARTER);
    
    playNote(NOTE_C6, QUARTER);
    playNote(NOTE_F5, QUARTER);
    playNote(NOTE_G5, QUARTER);
    playNote(NOTE_F5, QUARTER);
    
    playNote(NOTE_B4, QUARTER);
    playNote(NOTE_F5, QUARTER);
    playNote(NOTE_G5, QUARTER);
    playNote(NOTE_F5, QUARTER);
    
    playNote(466, QUARTER);
    playNote(NOTE_F5, QUARTER);
    playNote(NOTE_G5, QUARTER);
    playNote(932, QUARTER);
    
    playNote(NOTE_A5, QUARTER);
    playNote(NOTE_G5, QUARTER);
    playNote(NOTE_F5, QUARTER);
    playNote(NOTE_C5, QUARTER);
}

/*
 * the tone() function with a delay parameter defined does not halt the program. the arduino
 * will continue to execute instructions even while the tone is playing for its duration
 * 
 * so after every time the tone() function is called, we must call delay() to wait for the tone to finish playing before the
 * arduino moves on to the next tone
 */
void playNote(int note, float duration) {
  tone(pin, note, duration); // duration will play the note for the specified number of miliseconds
  delay(duration); // delay will halt the program for the same duration as tone() to pause the arduino before we continue to the next note
}
