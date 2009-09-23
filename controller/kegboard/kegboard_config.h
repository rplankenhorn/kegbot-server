//
// Feature configuration
//

// You may enable/disable kegboard features here as desired. The deafult are
// safe.

// Check for & report 1-wire temperature sensors?
#define KB_ENABLE_ONEWIRE_THERMO   1

// Check for & report 1-wire devices on the ID bus?
#define KB_ENABLE_ONEWIRE_PRESENCE 1

// Enable a selftest pulse?
#define KB_ENABLE_SELFTEST  1

// Enable buzzer?
#define KB_ENABLE_BUZZER    1

//
// Pin configuration
//

// You may change values in this section if you know what you are doing --
// though you ordinarily shouldn't need to change these.
//
// The default digital pin allocation is:
//   2 - flowmeter 0 pulse (input)
//   3 - flowmeter 1 pulse (input)
//   4 - relay 0 control (output)
//   5 - relay 1 control (output)
//   6
//   7 - thermo onewire bus (1-wire, input/output)
//   8 - presence onewire bus (1-wire, input/output)
//   9 - alarm (output)
//   10
//   11 - buzzer (output)
//   12 - test pulse train (output)
//   13 - arduino onboard LED (if applicable)

#define KB_PIN_METER_A            2
#define KB_PIN_METER_B            3
#define KB_PIN_RELAY_A            4
#define KB_PIN_RELAY_B            5
#define KB_PIN_ONEWIRE_THERMO     7
#define KB_PIN_ONEWIRE_PRESENCE   8
#define KB_PIN_ALARM              9
#define KB_PIN_BUZZER             11
#define KB_PIN_TEST_PULSE         12

//
// Device configuration defaults
//

#define KB_DEFAULT_BOARDNAME          "kegboard"
#define KB_DEFAULT_BOARDNAME_LEN      8  // must match #chars above
#define KB_DEFAULT_UPDATE_INTERVAL    250
#define KB_DEFAULT_BAUD_RATE          115200