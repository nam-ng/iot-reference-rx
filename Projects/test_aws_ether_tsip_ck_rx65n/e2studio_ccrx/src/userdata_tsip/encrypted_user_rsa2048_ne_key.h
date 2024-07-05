/**********************************************************************************************************************
 * DISCLAIMER
 * This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products. No
 * other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all
 * applicable laws, including copyright laws.
 * THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING
 * THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED. TO THE MAXIMUM
 * EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES
 * SHALL BE LIABLE FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO
 * THIS SOFTWARE, EVEN IF RENESAS OR ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
 * Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability of
 * this software. By using this software, you agree to the additional terms and conditions found by accessing the
 * following link:
 * http://www.renesas.com/disclaimer
 *
 * Copyright (C) 2021,2022 Renesas Electronics Corporation. All rights reserved.
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * File Name    : encrypted_user_rsa2048_ne_key.h
 * Version      : 1.00
 * Device(s)    : RA,RE,RX,RZ,Synergy Family
 * Description  : Key data generated by the Security Key Management Tool v1.04
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * History : DD.MM.YYYY Version  Description
 *         : 31.12.2021 1.00     First Release
 *********************************************************************************************************************/

/**********************************************************************************************************************
 Includes   <System Includes> , "Project Includes"
 *********************************************************************************************************************/
#include <stdint.h>

#ifndef ENCRYPTED_USER_RSA2048_NE_KEY_H_
#define ENCRYPTED_USER_RSA2048_NE_KEY_H_

/**********************************************************************************************************************
 Macro definitions
 *********************************************************************************************************************/
/** Encrypted key byte size **/
#define ENCRYPTED_USER_RSA2048_NE_KEY_SIZE (288)

/**********************************************************************************************************************
 Global Typedef definitions
 *********************************************************************************************************************/
/** User key datas */
typedef struct encrypted_user_rsa2048_ne_key
{
    uint32_t    keytype;
    uint32_t    shared_key_number;
    uint8_t     wufpk[32];
    uint8_t     initial_vector[16];
    uint8_t     encrypted_user_key[ENCRYPTED_USER_RSA2048_NE_KEY_SIZE];
    uint8_t     crc[4];
} encrypted_user_rsa2048_ne_key_t;

/**********************************************************************************************************************
 External global variables
 *********************************************************************************************************************/
extern const encrypted_user_rsa2048_ne_key_t g_encrypted_user_rsa2048_ne_key;

/**********************************************************************************************************************
 Exported global functions
 *********************************************************************************************************************/

#endif /* ENCRYPTED_USER_RSA2048_NE_KEY_H_ */