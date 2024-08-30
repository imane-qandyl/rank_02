unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}
// swaps the positions of the high and low nibbles