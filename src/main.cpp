#include <mbed.h>

//Declaración de funciones:

void inicializar_pines() 
{
//Inicializamos solo los pines de salida porque los demas estan inicializados como inputs
	LPC_GPIO0->FIODIR0=11110100;
	LPC_GPIO0->FIODIR1=00000011;
	LPC_GPIO1->FIODIRL=0100011000010011;
	LPC_GPIO1->FIODIRH=0000000000000011;
	LPC_GPIO2->FIODIRL=0000000111111111;
	LPC_GPIO4->FIODIR3=0011;  
}

u_int16_t recogida_valor() //Recogemos el numero con el que inicializamos
{
u_int16_t bits;
	
//		bits|(LPC_GPIO0->FIOPIN()<<



}
int buscaprimos(int inicio) //Funcion que se encarga de buscar los valores de los primos y devolverlos
{
int i;
int j;
	for(inicio;inicio<65535;i++)
    {
    	for(i=2;i<inicio;i++)
    	{
        	if((inicio%i)==0)
        	j++;
      	}

    if(j<1)
    return inicio;
    }
}

void BCD(int numero)  //Muestra en BCD
{
	//Teniendo en cuenta que un display tiene el siguiente formato:
	//	   A	
	//    ___
	// F |	 | B
	//	 |̣_G_| 
	//	 |	 |
	// E |___|	C	
	//
	//	   D

	if(numero==0)
	{
		LPC_GPIO2->FIOSET|=(1<<1); //A
		LPC_GPIO2->FIOSET|=(1<<2); //B
		LPC_GPIO2->FIOSET|=(1<<3); //C
		LPC_GPIO2->FIOSET|=(1<<4); //D
		LPC_GPIO2->FIOSET|=(1<<5); //E
		LPC_GPIO2->FIOSET|=(1<<6); //F
	}
	
	if(numero==1)
	{
		LPC_GPIO2->FIOSET|=(1<<2); //B
		LPC_GPIO2->FIOSET|=(1<<3); //C
	}

	if(numero==2)
	{
		LPC_GPIO2->FIOSET|=(1<<1); //A
		LPC_GPIO2->FIOSET|=(1<<2); //B
		LPC_GPIO2->FIOSET|=(1<<4); //D
		LPC_GPIO2->FIOSET|=(1<<5); //E
		LPC_GPIO2->FIOSET|=(1<<7); //G
		
	}

	if(numero==3)
	{
		LPC_GPIO2->FIOSET|=(1<<1); //A
		LPC_GPIO2->FIOSET|=(1<<2); //B
		LPC_GPIO2->FIOSET|=(1<<3); //C
		LPC_GPIO2->FIOSET|=(1<<4); //D
		LPC_GPIO2->FIOSET|=(1<<7); //G	
	}

	if(numero==4)
	{
		LPC_GPIO2->FIOSET|=(1<<2); //B
		LPC_GPIO2->FIOSET|=(1<<3); //C
		LPC_GPIO2->FIOSET|=(1<<6); //F
		LPC_GPIO2->FIOSET|=(1<<7); //G
	}

	if(numero==5)
	{
		LPC_GPIO2->FIOSET|=(1<<1); //A
		LPC_GPIO2->FIOSET|=(1<<3); //C
		LPC_GPIO2->FIOSET|=(1<<4); //D
		LPC_GPIO2->FIOSET|=(1<<6); //F
		LPC_GPIO2->FIOSET|=(1<<7); //G	
	}

	if(numero==6)
	{
		LPC_GPIO2->FIOSET|=(1<<1); //A
		LPC_GPIO2->FIOSET|=(1<<3); //C
		LPC_GPIO2->FIOSET|=(1<<4); //D
		LPC_GPIO2->FIOSET|=(1<<5); //E
		LPC_GPIO2->FIOSET|=(1<<6); //F
		LPC_GPIO2->FIOSET|=(1<<7); //G	
	}
	if(numero==7)
	{
		LPC_GPIO2->FIOSET|=(1<<1); //A
		LPC_GPIO2->FIOSET|=(1<<2); //B
		LPC_GPIO2->FIOSET|=(1<<3); //C
		LPC_GPIO2->FIOSET|=(1<<7); //G	
	}
	if(numero==8)
	{
		LPC_GPIO2->FIOSET|=(1<<1); //A
		LPC_GPIO2->FIOSET|=(1<<2); //B
		LPC_GPIO2->FIOSET|=(1<<3); //C
		LPC_GPIO2->FIOSET|=(1<<4); //D
		LPC_GPIO2->FIOSET|=(1<<5); //E
		LPC_GPIO2->FIOSET|=(1<<6); //F
		LPC_GPIO2->FIOSET|=(1<<7); //G	
	}
	if(numero==9)
	{
		LPC_GPIO2->FIOSET|=(1<<1); //A
		LPC_GPIO2->FIOSET|=(1<<2); //B
		LPC_GPIO2->FIOSET|=(1<<3); //C
		LPC_GPIO2->FIOSET|=(1<<4); //D
		LPC_GPIO2->FIOSET|=(1<<6); //F
		LPC_GPIO2->FIOSET|=(1<<7); //G	
	}
}

//Mostrar binario
int main() {
int numero;
  inicializar_pines;
  numero=recogida_valor;
  
  while(1) {
	
	
    
  }
}