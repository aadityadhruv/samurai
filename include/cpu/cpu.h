#include <iostream>
#include <vector>
#include <string>
#include <cstdint>

namespace CPU {
  struct Flags {
    std::int8_t carry;
    std::int8_t zero;
    std::int8_t intr_d;
    std::int8_t decimal;
    std::int8_t overflow;
    std::int8_t negative;
    std::int8_t b;

  };
  class Chip {
    private:
      std::int8_t acc;
      std::int8_t x;
      std::int8_t y;
      std::int16_t pc;
      std::int8_t sp; //8 bits cause first 8 bits are always 0x01
      CPU::Flags flags;
  };
}
