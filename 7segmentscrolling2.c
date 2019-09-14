/*
 * LEDSCROLL7219.c
 *
 * Created: 7/3/2019 9:58:00 PM
 * Author : rajesh
 */ 
#define F_CPU 16000000U
#include<util/delay.h>
//#include<avr/p>
#include <avr/io.h>
#define MOSI 5
#define SCK 7
#define SS 4
//#define F_CPU 12000000U
void Spi_Init(void);
void spi_tr(unsigned char cmd,unsigned char data);
static int ar[40]={0x20,0x50,0x88,0x88,0xf8,0x88,0x88,0x00,0x10,0x28,0x44,0x44,0x7c,0x44,0x44,0x00,0x08,0x14,0x22,0x22,0x3e,0x22,0x22,0x00,0x04,0x0a,0x11,0x11,0x1f,0x11,0x11,0x00,0x20,0x05,0x99,0x99,0x8f,0x99,0x99,0x00};
	char t8,t1,t2,t3,t4,t5,t6,t7,i;
//int ar1[8]={0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08};
int main(void)
{
Spi_Init();
#if 0	
spi_tr(0x0f,0x00);
spi_tr(0x0f,0x01);
spi_tr(0x0a,0x00);
spi_tr(0x0b,0x0f);
spi_tr(0x09,0x00);
spi_tr(0x0c,0x01);
#endif
 spi_tr(0x0C,0x01);
  PORTB |=(1<<SS)|(1<<PORTB0);
  
 spi_tr(0x0A,0x0F);
  PORTB |=(1<<SS)|(1<<PORTB0);
 spi_tr(0x0B,0x07);
  PORTB |=(1<<SS)|(1<<PORTB0);
 spi_tr(0x09,0x00);
  PORTB |=(1<<SS)|(1<<PORTB0);
 //spi_tr(0xFF,0x00);
 
//spi_tr(0x90,0x00);
//spi_tr(0xc0,0x80);

	/*int i,a,b,c,d,e,f,g,h;

	a=b=c=d=e=f=g=h=0;
	//spi_tr(0x09,0b00000010);
	spi_tr(0x0a,0xf);
	spi_tr(0x0b,0xf);
	for(i=0;i<9;i++)
	{
		spi_tr(ar1[i],ar[0]);
		_delay_ms(100);
	}
	spi_tr(0x0c,0x01);
	
		spi_tr(ar1[7],ar[a]);
		spi_tr(ar1[6],ar[b]);
		spi_tr(ar1[5],ar[c]);
		spi_tr(ar1[4],ar[d]);
		spi_tr(ar1[3],ar[e]);
		spi_tr(ar1[2],ar[f]);
		spi_tr(ar1[1],ar[g]);
		spi_tr(ar1[0],ar[h]);
		a++;
		
		if(a==10)
		{
			a=0;
			b++;
		}
		if(b==10)
		{
			a=b=0;
			c++;
		}
		if(c==10)
		{
			a=b=c=0;
			d++;
		}
		if(d==10)
		{
			a=b=c=d=0;
			e++;
		}
		if(e==10)
		{
			a=b=c=d=e=0;
			f++;
		}
		if(f==10)
		{
			a=b=c=d=e=f=0;
			g++;
		}
		if(g==10)
		{
			a=b=c=d=e=f=g=0;
			h++;
		}
		if(h==10)
		{
			a=b=c=d=e=f=g=h=0;
		}
		_delay_ms(3000);
		*/
	
	
    /* Replace with your application code */
    while (1) 
    {
		//spi_tr(0x0c,0x00);
		
		
		for(i=0;i<32;i++)
		{
			 spi_tr(0x01,ar[0]);
			
			 PORTB |=(1<<SS);
			 // spi_tr(0x01,0x70);
			 spi_tr(0x02,ar[1]);
			 
			 PORTB |=(1<<SS);
			 spi_tr(0x03,ar[2]);
			 
			 PORTB |=(1<<SS);
			 spi_tr(0x04,ar[3]);
			
			 PORTB |=(1<<SS);
			 spi_tr(0x05,ar[4]);
			
			 PORTB |=(1<<SS);
			 spi_tr(0x06,ar[5]);
			 
			 PORTB |=(1<<SS);
			 spi_tr(0x07,ar[6]);
			
			 PORTB |=(1<<SS);
			 spi_tr(0x08,ar[7]);
			 _delay_ms(50);
			 PORTB |=(1<<SS);
			 spi_tr(0x01,ar[8]);
			 
			 PORTB |=(1<<SS);
			 // spi_tr(0x01,0x70);
			 spi_tr(0x02,ar[9]);
			 
			 PORTB |=(1<<SS);
			 spi_tr(0x03,ar[10]);
			 
			 PORTB |=(1<<SS);
			 spi_tr(0x04,ar[11]);
			 
			 PORTB |=(1<<SS);
			 spi_tr(0x05,ar[12]);
			 
			 PORTB |=(1<<SS);
			 spi_tr(0x06,ar[13]);
			 
			 PORTB |=(1<<SS);
			 spi_tr(0x07,ar[14]);
			 
			 PORTB |=(1<<SS);
			 spi_tr(0x08,ar[15]);
			 
			 PORTB |=(1<<SS);
			 
			 _delay_ms(50);
			 spi_tr(0x01,ar[16]);
			 
			 PORTB |=(1<<SS);
			 // spi_tr(0x01,0x70);
			 spi_tr(0x02,ar[17]);
			 
			 PORTB |=(1<<SS);
			 spi_tr(0x03,ar[18]);
			 
			 PORTB |=(1<<SS);
			 spi_tr(0x04,ar[19]);
			 
			 PORTB |=(1<<SS);
			 spi_tr(0x05,ar[20]);
			 
			 PORTB |=(1<<SS);
			 spi_tr(0x06,ar[21]);
			 
			 PORTB |=(1<<SS);
			 spi_tr(0x07,ar[22]);
			 
			 PORTB |=(1<<SS);
			 spi_tr(0x08,ar[23]);
			 _delay_ms(50);
			 PORTB |=(1<<SS);
			 spi_tr(0x01,ar[24]);
			 
			 PORTB |=(1<<SS);
			 // spi_tr(0x01,0x70);
			 spi_tr(0x02,ar[25]);
			 
			 PORTB |=(1<<SS);
			 spi_tr(0x03,ar[26]);
			 
			 PORTB |=(1<<SS);
			 spi_tr(0x04,ar[27]);
			 
			 PORTB |=(1<<SS);
			 spi_tr(0x05,ar[28]);
			 
			 PORTB |=(1<<SS);
			 spi_tr(0x06,ar[29]);
			 
			 PORTB |=(1<<SS);
			 spi_tr(0x07,ar[30]);
			 
			 PORTB |=(1<<SS);
			 spi_tr(0x08,ar[31]);
			 
			 PORTB |=(1<<SS);
			_delay_ms(50);
			if(i==35)
			{
			t1=ar[0];
			t2=ar[1];
			t3=ar[2];
			t4=ar[3];
			t5=ar[4];
			t6=ar[5];
			t7=ar[6];
			t8=ar[7];
			
			ar[0]=t1>>1;
			ar[1]=t2>>1;
			ar[2]=t3>>1;
			ar[3]=t4>>1;
			ar[4]=t5>>1;
			ar[5]=t6>>1;
			ar[6]=t7>>1;
			ar[7]=t8>>1;	
				
			}
			//_delay_ms(50);
			
		}
		
		
		 
		 #if 0
		
		 spi_tr(0x01,0x00);
		 spi_tr(0X00,0X01);
		 PORTB |=(1<<SS)|(1<<PORTB0);
		 // spi_tr(0x01,0x70);
		 spi_tr(0x02,0x00);
		 spi_tr(0X00,0X01);
		 PORTB |=(1<<SS)|(1<<PORTB0);
		 spi_tr(0x03,0x00);
		 spi_tr(0X00,0X01);
		 PORTB |=(1<<SS)|(1<<PORTB0);
		 spi_tr(0x04,0x00);
		 spi_tr(0X00,0X01);
		 PORTB |=(1<<SS)|(1<<PORTB0);
		 spi_tr(0x05,0x00);
		 spi_tr(0X00,0X01);
		 PORTB |=(1<<SS)|(1<<PORTB0);
		 spi_tr(0x06,0x00);
		 spi_tr(0X00,0X01);
		 PORTB |=(1<<SS)|(1<<PORTB0);
		 spi_tr(0x07,0x00);
		 spi_tr(0X00,0X01);
		 PORTB |=(1<<SS)|(1<<PORTB0);
		 spi_tr(0x08,0x00);
		 spi_tr(0X00,0X01);
		  PORTB |=(1<<SS)|(1<<PORTB0);
		 //spi_tr(0X00,0X00);
		 // spi_tr(0X00,0X00);
		  spi_tr(0x01,0x70);
		   PORTB |=(1<<SS);
		  spi_tr(0x02,0x00);
		   PORTB |=(1<<SS);
		   
		  spi_tr(0x03,0x00);
		  PORTB |=(1<<SS);
		  spi_tr(0x04,0x00);
		  PORTB |=(1<<SS);
		   spi_tr(0x05,0x00);
		   PORTB |=(1<<SS);
		   spi_tr(0x06,0x00);
		   PORTB |=(1<<SS);
		    spi_tr(0x07,0x00);
		    PORTB |=(1<<SS);
		    spi_tr(0x08,0x00);
		    PORTB |=(1<<SS);
		 
		 _delay_ms(500);
			 spi_tr(0x01,0x00);
			 PORTB |=(1<<SS);
			 spi_tr(0x02,0x70);
			 PORTB |=(1<<SS);
			 
			 spi_tr(0x03,0x00);
			 PORTB |=(1<<SS);
			 spi_tr(0x04,0x00);
			 PORTB |=(1<<SS);
			 spi_tr(0x05,0x00);
			 PORTB |=(1<<SS);
			 spi_tr(0x06,0x00);
			 PORTB |=(1<<SS);
			 spi_tr(0x07,0x00);
			 PORTB |=(1<<SS);
			 spi_tr(0x08,0x00);
			 PORTB |=(1<<SS);
			 
			 _delay_ms(500);
			
		   //spi_tr(0X00,0X00);
		  spi_tr(0x01,0x00);
		  PORTB |=(1<<SS);
		  spi_tr(0x02,0x00);
		  PORTB |=(1<<SS);
		  
		  spi_tr(0x03,0x00);
		  PORTB |=(1<<SS);
		  spi_tr(0x04,0x00);
		  PORTB |=(1<<SS);
		  spi_tr(0x05,0x00);
		  PORTB |=(1<<SS);
		  spi_tr(0x06,0x00);
		  PORTB |=(1<<SS);
		  spi_tr(0x07,0x00);
		  PORTB |=(1<<SS);
		  spi_tr(0x08,0x00);
		  PORTB |=(1<<SS);
		 spi_tr(0x01,0x70);
		 spi_tr(0X00,0X01);
		 PORTB |=(1<<SS)|(1<<PORTB0); 
		 // spi_tr(0x01,0x70);
		 spi_tr(0x02,0x00);
		 spi_tr(0X00,0X01);
		 PORTB |=(1<<SS)|(1<<PORTB0);
		 spi_tr(0x03,0x00);
		 spi_tr(0X00,0X01);
		 PORTB |=(1<<SS)|(1<<PORTB0);
		 spi_tr(0x04,0x00);
		 spi_tr(0X00,0X01);
		 PORTB |=(1<<SS)|(1<<PORTB0);
		 spi_tr(0x05,0x00);
		 spi_tr(0X00,0X01);
		 PORTB |=(1<<SS)|(1<<PORTB0);
		 spi_tr(0x06,0x00);
		 spi_tr(0X00,0X01);
		 PORTB |=(1<<SS)|(1<<PORTB0);
		 spi_tr(0x07,0x00);
		 spi_tr(0X00,0X01);
		 PORTB |=(1<<SS)|(1<<PORTB0);
		 spi_tr(0x08,0x00);
		 spi_tr(0X00,0X01);
		 PORTB |=(1<<SS)|(1<<PORTB0);
		  spi_tr(0x01,0x70);
		  spi_tr(0X00,0X01);
		  PORTB |=(1<<SS)|(1<<PORTB0); 
		 // spi_tr(0x01,0x70);
		  spi_tr(0x02,0x00);
		  spi_tr(0X00,0X01);
		  PORTB |=(1<<SS)|(1<<PORTB0);
		  spi_tr(0x03,0x00);
		  spi_tr(0X00,0X01);
		  PORTB |=(1<<SS)|(1<<PORTB0);
		  spi_tr(0x04,0x00);
		  spi_tr(0X00,0X01);
		  PORTB |=(1<<SS)|(1<<PORTB0);
		  spi_tr(0x05,0x00);
		  spi_tr(0X00,0X01);
		  PORTB |=(1<<SS)|(1<<PORTB0);
		  spi_tr(0x06,0x00);
		  spi_tr(0X00,0X01);
		  PORTB |=(1<<SS)|(1<<PORTB0);
		  spi_tr(0x07,0x00);
		  spi_tr(0X00,0X01);
		  PORTB |=(1<<SS)|(1<<PORTB0);
		  spi_tr(0x08,0x00);
		  spi_tr(0X00,0X01);
		  PORTB |=(1<<SS)|(1<<PORTB0);
		  _delay_ms(500);
		  
		 
		   spi_tr(0x01,0x00);
		    spi_tr(0X00,0X01);
		    PORTB |=(1<<SS)|(1<<PORTB0);
		   spi_tr(0x02,0x70);
		    spi_tr(0X00,0X01);
		    PORTB |=(1<<SS)|(1<<PORTB0);
		   spi_tr(0x03,0x00);
		    spi_tr(0X00,0X01);
		    PORTB |=(1<<SS)|(1<<PORTB0);
		   spi_tr(0x04,0x00);
		    spi_tr(0X00,0X01);
		    PORTB |=(1<<SS)|(1<<PORTB0);
		   spi_tr(0x05,0x00);
		    spi_tr(0X00,0X01);
		    PORTB |=(1<<SS|(1<<PORTB0));
		   spi_tr(0x06,0x00);
		    spi_tr(0X00,0X01);
		    PORTB |=(1<<SS|(1<<PORTB0));
		   spi_tr(0x07,0x00);
		    spi_tr(0X00,0X01);
		    PORTB |=(1<<SS|(1<<PORTB0));
		   spi_tr(0x08,0x00);
		    spi_tr(0X00,0X01);
		    PORTB |=(1<<SS|(1<<PORTB0));
		  _delay_ms(500);
		   
		  spi_tr(0x01,0x00);
		   spi_tr(0X00,0X01);
		   PORTB |=(1<<SS|(1<<PORTB0));
		  spi_tr(0x02,0x00);
		   spi_tr(0X00,0X01);
		   PORTB |=(1<<SS|(1<<PORTB0));
		  spi_tr(0x03,0x70);
		   spi_tr(0X00,0X01);
		   PORTB |=(1<<SS|(1<<PORTB0));
		  spi_tr(0x04,0x00);
		   spi_tr(0X00,0X01);
		   PORTB |=(1<<SS|(1<<PORTB0));
		  spi_tr(0x05,0x00);
		   spi_tr(0X00,0X01);
		   PORTB |=(1<<SS|(1<<PORTB0));
		  spi_tr(0x06,0x00);
		  spi_tr(0X00,0X01);
		  PORTB |=(1<<SS|(1<<PORTB0));
		  spi_tr(0x07,0x00);
		   spi_tr(0X00,0X01);
		   PORTB |=(1<<SS|(1<<PORTB0));
		  spi_tr(0x08,0x00);
		   spi_tr(0X00,0X01);
		   PORTB |=(1<<SS|(1<<PORTB0));
		  
		  _delay_ms(500);
		  
		  spi_tr(0x01,0x00);
		   spi_tr(0X00,0X01);
		   PORTB |=(1<<SS)|(1<<PORTB0);
		  spi_tr(0x02,0x00);
		   spi_tr(0X00,0X01);
		   PORTB |=(1<<SS)|(1<<PORTB0);
		  spi_tr(0x03,0x00);
		   spi_tr(0X00,0X01);
		   PORTB |=(1<<SS)|(1<<PORTB0);
		  spi_tr(0x04,0x70);
		   spi_tr(0X00,0X01);
		   PORTB |=(1<<SS)|(1<<PORTB0);
		  spi_tr(0x05,0x00);
		  spi_tr(0X00,0X01);
		  PORTB |=(1<<SS)|(1<<PORTB0);
		  
		  spi_tr(0x06,0x00);
		  spi_tr(0X00,0X01);
		  PORTB |=(1<<SS)|(1<<PORTB0);
		  spi_tr(0x07,0x00);
		  spi_tr(0X00,0X01);
		  PORTB |=(1<<SS)|(1<<PORTB0);
		  spi_tr(0x08,0x00);
		  spi_tr(0X00,0X01);
		  PORTB |=(1<<SS)|(1<<PORTB0);
		  _delay_ms(500);
		  
		  spi_tr(0x01,0x00);
		  spi_tr(0X00,0X01);
		  PORTB |=(1<<SS)|(1<<PORTB0);

		  spi_tr(0x02,0x00);
		  spi_tr(0X00,0X01);
		  PORTB |=(1<<SS)|(1<<PORTB0);
		  spi_tr(0x03,0x00);
		  spi_tr(0X00,0X01);
		  PORTB |=(1<<SS)|(1<<PORTB0);
		  spi_tr(0x04,0x00);
		  spi_tr(0X00,0X01);
		  PORTB |=(1<<SS)|(1<<PORTB0);
		  spi_tr(0x05,0x70);
		  spi_tr(0X00,0X01);
		  PORTB |=(1<<SS)|(1<<PORTB0);
		  spi_tr(0x06,0x00);
		  spi_tr(0X00,0X01);
		  PORTB |=(1<<SS)|(1<<PORTB0);
		  spi_tr(0x07,0x00);
		  spi_tr(0X00,0X01);
		  PORTB |=(1<<SS)|(1<<PORTB0);
		  spi_tr(0x08,0x00);
		  spi_tr(0X00,0X01);
		  PORTB |=(1<<SS)|(1<<PORTB0);
		  
		  
		   _delay_ms(500);
		   
		   spi_tr(0x01,0x00);
		   spi_tr(0X00,0X01);
		   PORTB |=(1<<SS)|(1<<PORTB0);
		   spi_tr(0x02,0x00);
		   spi_tr(0X00,0X01);
		   PORTB |=(1<<SS)|(1<<PORTB0);
		   spi_tr(0x03,0x00);
		   spi_tr(0X00,0X01);
		   PORTB |=(1<<SS)|(1<<PORTB0);
		   spi_tr(0x04,0x00);
		   spi_tr(0X00,0X01);
		   PORTB |=(1<<SS)|(1<<PORTB0);
		   spi_tr(0x05,0x00);
		   spi_tr(0X00,0X01);
		   PORTB |=(1<<SS)|(1<<PORTB0);
		   spi_tr(0x06,0x70);
		   spi_tr(0X00,0X01);
		   PORTB |=(1<<SS)|(1<<PORTB0);
		   spi_tr(0x07,0x00);
		   spi_tr(0X00,0X01);
		   PORTB |=(1<<SS)|(1<<PORTB0);
		   spi_tr(0x08,0x00);
		  spi_tr(0X00,0X01);
		  PORTB |=(1<<SS)|(1<<PORTB0);
		    _delay_ms(500);
		    
		    spi_tr(0x01,0x00);
			spi_tr(0X00,0X01);
			PORTB |=(1<<SS|(1<<PORTB0));
		    spi_tr(0x02,0x00);
			spi_tr(0X00,0X01);
			PORTB |=(1<<SS|(1<<PORTB0));
		    spi_tr(0x03,0x00);
			spi_tr(0X00,0X01);
			PORTB |=(1<<SS|(1<<PORTB0));
		    spi_tr(0x04,0x00);
			spi_tr(0X00,0X01);
			PORTB |=(1<<SS|(1<<PORTB0));
		    spi_tr(0x05,0x00);
			spi_tr(0X00,0X01);
			PORTB |=(1<<SS|(1<<PORTB0));
		    spi_tr(0x06,0x00);
			spi_tr(0X00,0X01);
			PORTB |=(1<<SS|(1<<PORTB0));
		    spi_tr(0x07,0x70);
			spi_tr(0X00,0X01);
			PORTB |=(1<<SS|(1<<PORTB0));
		    spi_tr(0x08,0x00);
			spi_tr(0X00,0X01);
			PORTB |=(1<<SS|(1<<PORTB0));
			
			 _delay_ms(500);
			 
			 spi_tr(0x01,0x00);
			 spi_tr(0X00,0X01);
			 PORTB |=(1<<SS|(1<<PORTB0));
			 spi_tr(0x02,0x00);
			 spi_tr(0X00,0X01);
			 PORTB |=(1<<SS|(1<<PORTB0));
			 spi_tr(0x03,0x00);
			 spi_tr(0X00,0X01);
			 PORTB |=(1<<SS|(1<<PORTB0));
			 spi_tr(0x04,0x00);
			 spi_tr(0X00,0X01);
			 PORTB |=(1<<SS|(1<<PORTB0));
			 spi_tr(0x05,0x00);
			 spi_tr(0X00,0X01);
			 PORTB |=(1<<SS|(1<<PORTB0));
			 spi_tr(0x06,0x00);
			 spi_tr(0X00,0X01);
			 PORTB |=(1<<SS|(1<<PORTB0));
			 spi_tr(0x07,0x00);
			 spi_tr(0X00,0X01);
			 PORTB |=(1<<SS|(1<<PORTB0));
			 spi_tr(0x08,0x70);
			 spi_tr(0X00,0X01);
			 PORTB |=(1<<SS|(1<<PORTB0));
			
			 _delay_ms(500);
		  
		  
		  
		  
		  
		  #endif
		//spi_tr(0x01,0x01);
		
		//spi_tr(0xF0,0x00);
		
		
    }
}

void Spi_Init()
{
	DDRB=(1<<MOSI)|(1<<SCK)|(1<<SS)|(1<<PORTB0);
	SPCR=(1<<SPE)|(1<<MSTR)|(1<<SPR0);
	
	
}

void spi_tr(unsigned char cmd,unsigned char data)
{
	
	PORTB &=~(1<<SS|(1<<PORTB0)); 
	        //enable transmission
	SPDR=cmd;                 // start transmission
	while(!(SPSR&(1<<SPIF))); // wait for complete transmission
	//PORTB |=(1<<SS); 
	//PORTB &=~(1<<SS);   
	SPDR=data;
	               // start trasmission
	while(!(SPSR&(1<<SPIF)));
	 // wait for transmission
	// PORTB |=(1<<SS);         // disable transmission
	PORTA=0X55;
	
}




