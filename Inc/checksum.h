
#ifndef CHECKSUM_H_
#define CHECKSUM_H_

#include <stdint.h>
#include <stdbool.h>

bool IsChecksumm16bCorrect(uint8_t *msg, uint16_t length);
void AddChecksumm16b(uint8_t *msg, uint16_t length);

bool IsChecksumm8bCorrect(uint8_t *msg, uint16_t length);
void AddChecksumm8b(uint8_t *msg, uint16_t length);


#endif /* CHECKSUM_H_ */
