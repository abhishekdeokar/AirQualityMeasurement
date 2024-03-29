/*
 * Copyright (c) 2016, NXP Semiconductor
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of NXP Semiconductor nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */
/* DO NOT USE INCLUDE GUARDS - BREAKS LIST GENERATION     */

//                 LABEL          CHANNEL  PIN  /* FUNCTION */
#ifdef __LPC11U37H__
ISR_CALLBACK_ENTRY(ISR_GPIO_INT0, 0, 43)
#endif
#if defined(FRDM_K82F)
ISR_CALLBACK_ENTRY(ISR_INT_PORTC, 0, 10) /* PTC10  */
#endif
#if defined(FRDM_K64F)
ISR_CALLBACK_ENTRY(ISR_INT_PORTA, 0, 2) /* PTA2  */
#endif
#if defined(RAPID_IOT)
ISR_CALLBACK_ENTRY(ISR_INT_PORTA, 0, 28) /* PTA28  */
#endif
#if defined(FRDM_KL27Z)
ISR_CALLBACK_ENTRY(ISR_INT_PORTE, 0, 24) /* PTE24  */
#endif
#if defined(FRDM_KL43Z)
ISR_CALLBACK_ENTRY(ISR_INT_PORTA, 0, 5) /* PTA5  */
#endif
#if defined(FRDM_K22F)
ISR_CALLBACK_ENTRY(ISR_INT_PORTB, 0, 18) /* PTB18  */
#endif
#if defined(FRDM_KL02Z)
ISR_CALLBACK_ENTRY(ISR_INT_PORTA, 0, 12) /* PTA12  */
#endif
#if defined(FRDM_KW41Z)
ISR_CALLBACK_ENTRY(ISR_INT_PORTC, 0, 17) /* PTC17  */
#endif

/* DO NOT USE INCLUDE GUARDS - BREAKS LIST GENERATION     */
