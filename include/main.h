#define DELAY_MS 1000

typedef struct mapping_t {
  uint8_t pin;
  char key;
} mapping_t;

#define SWITCH_FIRST 9
#define SWITCH_COUNT 5
#define SWITCH_LAST SWITCH_FIRST + SWITCH_COUNT
#define MAPPING_COUNT 23

static bool switches[] = { false, false, false, false, false };
static const mapping_t mappings[] = {
  { pin: 0, key: '0' },
  { pin: 1, key: '1' },
  { pin: 2, key: '2' },
  { pin: 3, key: '3' },
  { pin: 4, key: '4' },
  { pin: 5, key: '5' },
  { pin: 6, key: '6' },
  { pin: 7, key: '7' },
  { pin: 8, key: '8' },
  { pin: 9, key: '9' },
  { pin: 10, key: 'Q' },
  { pin: 11, key: 'W' },
  { pin: 12, key: 'E' },
  { pin: 13, key: 'R' },
  { pin: A0, key: 'T' },
  { pin: A1, key: 'Y' },
  { pin: A2, key: 'U' },
  { pin: A3, key: 'I' },
  { pin: A4, key: 'O' },
  { pin: A4, key: 'P' },
  { pin: 14, key: 'A' },
  { pin: 15, key: 'S' },
  { pin: 16, key: 'D' }
};
