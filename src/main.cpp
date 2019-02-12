#include <Keyboard.h>

#include "main.h"

void write(char key) {
  Keyboard.write(key);
  delay(DELAY_MS);
};

void setup() {
  // initialize all pins as INPUT_PULLUP
  for (uint8_t i = 0; i <= MAPPING_COUNT; i++) {
    // maybe there is no need to skip this
    if (i == 17) {
      continue;
    }

    pinMode(i, INPUT_PULLUP);
  }

  // initialize USB connection
  Keyboard.begin();
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
        switches[stateIndex] = state;
        write(mapping.key);
      }
    } else {
      // handle as a push-button switch
      if (state == LOW) {
        write(mapping.key);
      }
    }
  }
}
