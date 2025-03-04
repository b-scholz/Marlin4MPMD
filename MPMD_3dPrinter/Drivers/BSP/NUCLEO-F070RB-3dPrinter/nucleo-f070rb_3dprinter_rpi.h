/** 
  ******************************************************************************
  * @file    nucleo-f070rb_3dPrinter_rpi.h
  * @author  IPC Rennes
  * @version V1.0.0
  * @date    April 13, 2016
  * @brief   Header for Raspberry Pi Mngt functions of 3D Printer BSP driver
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2016 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************  
  */ 
  
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __NUCLEO_F070RB_3DPRINTER_RPI_H
#define __NUCLEO_F070RB_3DPRINTER_RPI_H

#ifdef __cplusplus
 extern "C" {
#endif

   /* Includes ---------------------------------------------------------------*/
#include "stm32f0xx_hal.h"
   
/* Exported macros -----------------------------------------------------------*/

/* Definition for RPi resources *********************************************/
//TODO: remove RPI stuff since there's no connection pin available
/// GPIO Pin used for the Raspberry Pi ready state pin
#define BSP_RPI_READY_PIN               (GPIO_PIN_0)
/// GPIO Port used for the Raspberry Pi ready state pin
#define BSP_RPI_READY_PORT              (GPIOE)


   
/* Exported types --- --------------------------------------------------------*/

/* Exported variables  --------------------------------------------------------*/

/* Exported functions --------------------------------------------------------*/
void BSP_RPiGpioInit(void);
void BSP_RPiWaitUntilReady(void);



#ifdef __cplusplus
}
#endif

#endif /* __NUCLEO_F070RB_3DPRINTER_RPI_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
