int sqrt(int a) {
    int res = 0;
    int bit = 1 << 30; // The second-to-top bit is set: 1 << 30 for 32 bits
 
    // "bit" starts at the highest power of four <= the argument.
    while (bit > a)
        bit >>= 2;
 
    while (bit != 0) {
        if (a   >= res + bit) {
            a   -= res + bit;
            res = (res >> 1) + bit;
        }
        else
            res >>= 1;
        bit >>= 2;
    }
    return res;
}
