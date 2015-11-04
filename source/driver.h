

#ifndef __DHT22_H__
#define __DHT22_H__

// 40 bits of data read from sensor. stored in 2 forms for easy access.
union R40B{
	uint64_t monolith; // 40bits of contiguous data
	uint8_t  chunk[8]; // only chunk 2-8 will ever contain valid data
};


#endif //__DHT22_H__