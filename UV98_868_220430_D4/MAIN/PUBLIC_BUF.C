#include "STC8A8K64D4.H"
#include "PUBLIC_BUF.H"


 
 
unsigned char SN_RX_BUFFER[350]=0;	// Decoded KISS data, excluding C0 00 ..C0, length &lt; 128
 
unsigned char KISS_DATA[1024];	// Decoded KISS data, excluding C0 00 ..C0, length &lt; 128
unsigned char KISS_LEN;			// Decoded KISS data length
unsigned char KISS_START; // used for checking the HLDC checksum when multiple

 
uchar ASC_TEMP[300];		// Temporary text data
 
uint   TIME_1S;
 
uchar GPS_LINK;	   // Is GPS connected?

uchar A20_OUT_EN;
