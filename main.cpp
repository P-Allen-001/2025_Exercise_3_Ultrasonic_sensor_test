#include "mbed.h"
 
#include "SRF05.h"

 SRF05 srf_Left(PA_10,PB_3); // Output from PA_10 (D2) is connected to the Trigger pin of the SRF05, Input to PB_3 (D3) is connected to the SRF05 Echo_Pin. 
 SRF05 srf_Right(PA_8,PA_9); // Output from PA_8 (D7) is connected to the Trigger pin of the SRF05, Input to PA_9 (D8) is connected to the SRF05 Echo_Pin.   
  
 Serial pc(USBTX,USBRX); //tx, rx

 int main() {
     while(1) {
      printf("Left: %.1f"  , srf_Left.read() ) ;
      printf("  Right: %.1f\n", srf_Right.read());
      printf("\n");
      wait(0.05);
    
     }
 }
 
