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
#define NOTE_Bb3 223
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
#define NOTE_Bb4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_Db5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_Eb5 622
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

#define WHOLE noteLength
#define HALF noteLength/2
#define QUARTER noteLength/4
#define EIGHTH noteLength/8
#define SIXTEENTH noteLength/16
#define THIRTYSECOND noteLength/32
#define DOTTED_QUARTER 90/bpm*1000
#define DOTTED_EIGHTH 45/bpm*1000
#define DOTTED_SIXTEENTH 22.5/bpm*1000
#define TRIPLET_EIGHTH 20/bpm*1000
#define TRIPLET_SIXTEENTH 10/bpm*1000

int pin = 2;
float bpm = 112;
float noteLength = (240/bpm)*1000;

void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
	playNote(NOTE_G4, EIGHTH);
	playNote(NOTE_Bb4, EIGHTH);
	playNote(NOTE_C5, EIGHTH);
	playNote(NOTE_G4, EIGHTH);
	playNote(NOTE_Bb4, EIGHTH);
	playNote(NOTE_C5, SIXTEENTH);
	playNote(NOTE_CS5, EIGHTH);
	playNote(NOTE_D5, SIXTEENTH);
	playNote(NOTE_FS5, EIGHTH);

	playNote(NOTE_G4, EIGHTH);
	playNote(NOTE_Bb4, EIGHTH);
	playNote(NOTE_C5, EIGHTH);
	playNote(NOTE_G4, EIGHTH);
	playNote(NOTE_Bb4, EIGHTH);
	playNote(NOTE_CS5, SIXTEENTH);
	playNote(NOTE_D5, EIGHTH);
	playNote(NOTE_F5, SIXTEENTH);
	playNote(NOTE_A5, EIGHTH);

	playNote(NOTE_G4, EIGHTH);
	playNote(NOTE_Bb4, EIGHTH);
	playNote(NOTE_C5, EIGHTH);
	playNote(NOTE_G4, EIGHTH);
	playNote(NOTE_Bb4, EIGHTH);
	playNote(NOTE_C5, SIXTEENTH);
	playNote(NOTE_CS5, EIGHTH);
	playNote(NOTE_D5, SIXTEENTH);
	playNote(NOTE_FS5, EIGHTH);

	playNote(NOTE_G4, EIGHTH);
	playNote(NOTE_Bb4, EIGHTH);
	playNote(NOTE_C5, EIGHTH);
	playNote(NOTE_G4, EIGHTH);
	playNote(NOTE_F4, SIXTEENTH);
	playNote(NOTE_FS4, EIGHTH);
	playNote(NOTE_G4, SIXTEENTH);
	playNote(NOTE_G4, EIGHTH);
	delay(EIGHTH);

	playNote(NOTE_G4, EIGHTH);
	playNote(NOTE_Bb4, EIGHTH);
	playNote(NOTE_C5, EIGHTH);
	playNote(NOTE_G4, EIGHTH);
	playNote(NOTE_Bb4, EIGHTH);
	playNote(NOTE_C5, SIXTEENTH);
	playNote(NOTE_CS5, EIGHTH);
	playNote(NOTE_D5, SIXTEENTH);
	playNote(NOTE_FS5, EIGHTH);

	playNote(NOTE_G4, EIGHTH);
	playNote(NOTE_Bb4, EIGHTH);
	playNote(NOTE_C5, EIGHTH);
	playNote(NOTE_G4, EIGHTH);
	playNote(NOTE_Bb4, EIGHTH);
	playNote(NOTE_CS5, SIXTEENTH);
	playNote(NOTE_D5, EIGHTH);
	playNote(NOTE_F5, SIXTEENTH);
	playNote(NOTE_A5, EIGHTH);

	playNote(NOTE_G4, EIGHTH);
	playNote(NOTE_Bb4, EIGHTH);
	playNote(NOTE_C5, EIGHTH);
	playNote(NOTE_G4, EIGHTH);
	playNote(NOTE_Bb4, EIGHTH);
	playNote(NOTE_C5, SIXTEENTH);
	playNote(NOTE_CS5, EIGHTH);
	playNote(NOTE_D5, SIXTEENTH);
	playNote(NOTE_FS5, EIGHTH);

	playNote(NOTE_G4, EIGHTH);
	playNote(NOTE_Bb4, EIGHTH);
	playNote(NOTE_C5, EIGHTH);
	playNote(NOTE_Eb5, EIGHTH);
	playNote(NOTE_D5, SIXTEENTH);
	playNote(NOTE_Eb5, EIGHTH);
	playNote(NOTE_D5, SIXTEENTH);
	playNote(NOTE_FS5, QUARTER);

	playNote(NOTE_G5, QUARTER);
	delay(QUARTER);
	delay(SIXTEENTH);
	playNote(NOTE_Db5, DOTTED_EIGHTH);
	playNote(NOTE_C5, SIXTEENTH);
	playNote(NOTE_Bb4, SIXTEENTH);
	playNote(NOTE_G4, EIGHTH);

	playNote(NOTE_G4, SIXTEENTH);
	playNote(NOTE_Db5, SIXTEENTH);
	playNote(NOTE_C5, SIXTEENTH);
	playNote(NOTE_Bb4, SIXTEENTH);
	playNote(NOTE_C5, SIXTEENTH);
	playNote(NOTE_Db5, SIXTEENTH);
	playNote(NOTE_E4, SIXTEENTH);
	playNote(NOTE_G4, SIXTEENTH);
	playNote(NOTE_Bb4, SIXTEENTH);
	playNote(NOTE_G4, SIXTEENTH);
	playNote(NOTE_F4, SIXTEENTH);
	playNote(NOTE_G5, SIXTEENTH);
	playNote(NOTE_G5, SIXTEENTH);
	playNote(NOTE_F5, THIRTYSECOND);
	playNote(NOTE_G5, THIRTYSECOND);
	playNote(NOTE_Db5, SIXTEENTH);
	playNote(NOTE_C5, SIXTEENTH);
	playNote(NOTE_Bb4, SIXTEENTH);

	playNote(NOTE_Bb4, QUARTER);
	playNote(NOTE_C5, QUARTER);
	playNote(NOTE_D5, QUARTER);
	playNote(NOTE_Eb5, QUARTER);

	playNote(NOTE_D5, EIGHTH);
	playNote(NOTE_G4, EIGHTH);
	playNote(NOTE_G5, EIGHTH);
	playNote(NOTE_G4, EIGHTH);
	playNote(NOTE_FS5, SIXTEENTH);
	playNote(NOTE_Eb5, EIGHTH);
	playNote(NOTE_D5, SIXTEENTH);
	playNote(NOTE_D5, SIXTEENTH);
	playNote(NOTE_Eb5, SIXTEENTH);
	playNote(NOTE_D5, SIXTEENTH);
	playNote(NOTE_Eb5, SIXTEENTH);

	playNote(NOTE_D5, EIGHTH);
	playNote(NOTE_Bb4, EIGHTH);
	playNote(NOTE_G4, EIGHTH);
	playNote(NOTE_D4, EIGHTH);
	playNote(NOTE_Bb4, EIGHTH);
	playNote(NOTE_G4, SIXTEENTH);
	playNote(NOTE_A4, SIXTEENTH);
	playNote(NOTE_A4, SIXTEENTH);
	playNote(NOTE_Eb5, SIXTEENTH);
	playNote(NOTE_D5, SIXTEENTH);
	playNote(NOTE_Eb5, SIXTEENTH);

	playNote(NOTE_D5, SIXTEENTH);
	playNote(NOTE_D5, SIXTEENTH);
	playNote(NOTE_Bb4, EIGHTH);
	playNote(NOTE_G4, EIGHTH);
	playNote(NOTE_D4, EIGHTH);
	playNote(NOTE_Bb4, EIGHTH);
	playNote(NOTE_C5, SIXTEENTH);
	playNote(NOTE_A4, SIXTEENTH);
	playNote(NOTE_A4, SIXTEENTH);
	playNote(NOTE_Eb5, SIXTEENTH);
	playNote(NOTE_D5, SIXTEENTH);
	playNote(NOTE_Eb5, SIXTEENTH);

	playNote(NOTE_D5, EIGHTH);
	playNote(NOTE_G5, EIGHTH);
	playNote(NOTE_C5, EIGHTH);
	playNote(NOTE_Bb4, EIGHTH);
	playNote(NOTE_C5, SIXTEENTH);
	playNote(NOTE_Bb4, EIGHTH);
	playNote(NOTE_C5, SIXTEENTH);
	playNote(NOTE_C5, EIGHTH);
	playNote(NOTE_Bb4, SIXTEENTH);
	playNote(NOTE_C5, SIXTEENTH);

	playNote(NOTE_Db5, SIXTEENTH);
	playNote(NOTE_C5, SIXTEENTH);
	playNote(NOTE_Bb4, EIGHTH);
	playNote(NOTE_G4, EIGHTH);
	playNote(NOTE_D4, EIGHTH);
	playNote(NOTE_F4, SIXTEENTH);
	playNote(NOTE_FS4, EIGHTH);
	playNote(NOTE_G4, SIXTEENTH);
	playNote(NOTE_G4, QUARTER);

	playNote(NOTE_Bb3, EIGHTH);
	playNote(NOTE_Bb4, SIXTEENTH);
	playNote(NOTE_A4, SIXTEENTH);
	delay(SIXTEENTH);
	playNote(NOTE_Bb4, SIXTEENTH);
	playNote(NOTE_A4, EIGHTH);
	playNote(NOTE_Bb3, EIGHTH);
	playNote(NOTE_Bb4, SIXTEENTH);
	playNote(NOTE_A4, SIXTEENTH);
	delay(SIXTEENTH);
	playNote(NOTE_Bb4, SIXTEENTH);
	playNote(NOTE_A4, EIGHTH);

	playNote(NOTE_F4, TRIPLET_SIXTEENTH);
	playNote(NOTE_G4, TRIPLET_SIXTEENTH);
	playNote(NOTE_F4, TRIPLET_SIXTEENTH);
	playNote(NOTE_D4, EIGHTH);
	playNote(NOTE_C4, SIXTEENTH);
	playNote(NOTE_Bb3, EIGHTH);
	playNote(NOTE_D4, SIXTEENTH);
	playNote(NOTE_D4, QUARTER);
	delay(QUARTER);
	
	playNote(NOTE_Bb3, EIGHTH);
	playNote(NOTE_Bb4, SIXTEENTH);
	playNote(NOTE_A4, SIXTEENTH);
	delay(SIXTEENTH);
	playNote(NOTE_Bb4, SIXTEENTH);
	playNote(NOTE_A4, EIGHTH);
	playNote(NOTE_Bb3, EIGHTH);
	playNote(NOTE_Bb4, SIXTEENTH);
	playNote(NOTE_A4, SIXTEENTH);
	delay(SIXTEENTH);
	playNote(NOTE_Bb4, SIXTEENTH);
	playNote(NOTE_A4, EIGHTH);

	playNote(NOTE_D4, EIGHTH);
	playNote(NOTE_F4, EIGHTH);
	playNote(NOTE_G4, TRIPLET_EIGHTH);
	playNote(NOTE_Bb4, TRIPLET_EIGHTH);
	playNote(NOTE_C5, TRIPLET_EIGHTH);
	playNote(NOTE_D5, HALF);

	playNote(NOTE_Bb3, EIGHTH);
	playNote(NOTE_Bb4, SIXTEENTH);
	playNote(NOTE_A4, SIXTEENTH);
	delay(SIXTEENTH);
	playNote(NOTE_Bb4, SIXTEENTH);
	playNote(NOTE_A4, EIGHTH);
	playNote(NOTE_Bb3, EIGHTH);
	playNote(NOTE_Bb4, SIXTEENTH);
	playNote(NOTE_A4, SIXTEENTH);
	delay(SIXTEENTH);
	playNote(NOTE_Bb4, SIXTEENTH);
	playNote(NOTE_A4, EIGHTH);

	playNote(NOTE_F4, TRIPLET_SIXTEENTH);
	playNote(NOTE_G4, TRIPLET_SIXTEENTH);
	playNote(NOTE_F4, TRIPLET_SIXTEENTH);
	playNote(NOTE_D4, EIGHTH);
	playNote(NOTE_C4, SIXTEENTH);
	playNote(NOTE_Bb3, EIGHTH);
	playNote(NOTE_D4, SIXTEENTH);
	playNote(NOTE_D4, QUARTER);
	delay(QUARTER);

	playNote(NOTE_Bb3, EIGHTH);
	playNote(NOTE_Bb4, SIXTEENTH);
	playNote(NOTE_A4, SIXTEENTH);
	delay(SIXTEENTH);
	playNote(NOTE_Bb4, SIXTEENTH);
	playNote(NOTE_A4, EIGHTH);
	playNote(NOTE_Bb3, EIGHTH);
	playNote(NOTE_Bb4, SIXTEENTH);
	playNote(NOTE_A4, SIXTEENTH);
	delay(SIXTEENTH);
	playNote(NOTE_Bb4, SIXTEENTH);
	playNote(NOTE_A4, EIGHTH);

	playNote(NOTE_D4, EIGHTH);
	playNote(NOTE_F4, EIGHTH);
	playNote(NOTE_G4, TRIPLET_EIGHTH);
	playNote(NOTE_Bb4, TRIPLET_EIGHTH);
	playNote(NOTE_C5, TRIPLET_EIGHTH);
	playNote(NOTE_D5, HALF);
}

void playNote(int note, float duration) {
  tone(pin, note, duration);
  delay(duration);
}