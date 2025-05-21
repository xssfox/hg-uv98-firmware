#include "STC8A8K64D4.H"
#include "STC_EEPROM.H"

#include "UART1.H"
#include "UART2.H"
#include "DELAY.H"

#include "CRC16.H"
#include "APRS_RF.H"
#include "io.H"
#include "KISS_DECODE.H"

#include "CMX865A_SPI.H"
#include "PUBLIC_BUF.H"
#include "tostring.H"


/********* APRS codec***********/
// sbit FX604_M1=P4^5;
// sbit FX604_M0=P2^7;
// sbit PTT = P2^6;
// sbit FX604_DET=P2^4;
// sbit FX604_RX=P2^3;
// sbit FX604_TX=P2^2;

bit aprs_flag;	 // Check if flag=7E is set
bit old_input;	 // Pin inversion status
bit input_rev;	 // Whether the level is inverted


void Delay_417us();					 // Codec Timing
void DELAY_833US();	  // Use as a timer, delay 833us

unsigned char APRS_STATUS;			// APRS decoding status, =03 normal, other indications are unexpected disconnection, constant sound, noise, data synchronization abnormality and other errors
unsigned char one_count;	 		// Codec, count of consecutive 1s
unsigned char HDLC_DATA;			// APRS decoding gets 1 byte

uchar  DATA_7E;	// 0 = front and back flags, 1 = data 7E



/*****************************************/
void DELAY_TX_833US();	  // Use TIME1 as timer, delay 833us


sbit FX604_RX  = P1 ^ 6;



