#include <Keyboard.h>

#include "main.h"

void write(char key) {
#ifdef TRACE
  Serial.println(F("Typing key ") + key);
#endif
  Keyboard.write(key);
  delay(DELAY_MS);
};

void setup() {
#ifdef TRACE
  Serial.begin(115200);
  Serial.println(F("Starting up!"));
#endif
  // initialize all pins as INPUT_PULLUP
  for (uint8_t i = 0; i <= MAPPING_COUNT; i++) {
    // maybe there is no need to skip this
    if (i == 17) {
      continue;
    }

#ifdef TRACE
  Serial.println(F("Initializing pin ") + i);
#endif

    pinMode(i, INPUT_PULLUP);
  }

  // initialize USB connection
  Keyboard.begin();

#ifdef TRACE
  Serial.println(F("Initialized keyboard!"));
#endif
}

void loop() {
  for (uint8_t i = 0; i < MAPPING_COUNT; i++) {
    const mapping_t mapping = mappings[i];
    const bool state = digitalRead(mapping.pin);

    if (i >= SWITCH_FIRST && i <= SWITCH_LAST) {
      // handle as a toggle switch
      const uint8_t stateIndex = i - SWITCH_FIRST;
      bool priorState = switches[stateIndex];

      if (state != priorState) {
#ifdef TRACE
        Serial.println(F("Toggle switch") + mapping.pin + F(" changed state!"));
#endif
        switches[stateIndex] = state;
        write(mapping.key);
      }
    } else {
      // handle as a push-button switch
      if (state == LOW) {
#ifdef TRACE
        Serial.println(F("Push-button switch") + mapping.pin + F(" was pressed!"));
#endif
        write(mapping.key);
      }
    }
  }
}
