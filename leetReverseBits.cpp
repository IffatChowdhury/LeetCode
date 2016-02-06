/*
Reverse bits of a given 32 bits unsigned integer.
*/

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0, temp;
		int rotation = 31;
		uint32_t mask2 = 0X80000000;
		uint32_t mask1 = 0X00000001;
		for(int i = 0; i < 16; i++){
			temp = n & mask1;
			temp = temp << rotation;
			result = result | temp;
			mask1 = mask1 << 1;
			temp = n & mask2;
			temp = temp >> rotation;
			result = result | temp;
			mask2 = mask2 >> 1;
			rotation = rotation - 2;
			}
		return result;
    }
};
