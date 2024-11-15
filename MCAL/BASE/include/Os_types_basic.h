/**
*   @file    Os_types_basic.h
*   @version 1.0.4
*
*   @brief   AUTOSAR OS - Brief file description (one line).
*   @details Detailed file description (can be multiple lines).
*
*   @addtogroup [OS]
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.3 MCAL
*   Platform             : ARM
*   Peripheral           : generic
*   Dependencies         : 
*
*   Autosar Version      : 4.3.1
*   Autosar Revision     : ASR_REL_4_3_REV_0001
*   Autosar Conf.Variant :
*   SW Version           : 1.0.4
*   Build Version        : S32K1XX_MCAL_1_0_4_RTM_ASR_REL_4_3_REV_0001_04-Apr-22
*
*   (c) Copyright 2006-2016 Freescale Semiconductor, Inc. 
*       Copyright 2017-2022 NXP
*   All Rights Reserved.
==================================================================================================*/

/*==================================================================================================
==================================================================================================*/

#ifndef OS_TYPES_BASIC_H
#define OS_TYPES_BASIC_H


#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

#include    "Std_Types.h"        /**< Standard type header - from MCAL  */

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/


#define OS_TYPES_BASIC_VENDOR_ID_H                    43    /* Freescale AUTOSAR Vendor ID  */
#define OS_TYPES_BASIC_MODULE_ID_H                    0x01           /* OS Module ID                 */

#define OS_TYPES_BASIC_AR_RELEASE_MAJOR_VERSION_H     4   /* Major version number of AUTOSAR specification       */
#define OS_TYPES_BASIC_AR_RELEASE_MINOR_VERSION_H     3   /* Minor version number of AUTOSAR specification       */
#define OS_TYPES_BASIC_AR_RELEASE_REVISION_VERSION_H  1   /* Patch level version number of AUTOSAR specification */

#define OS_TYPES_BASIC_SW_MAJOR_VERSION_H             1   /* Major version number of the implementation   */
#define OS_TYPES_BASIC_SW_MINOR_VERSION_H             0   /* Minor version number of the implementation   */
#define OS_TYPES_BASIC_SW_PATCH_VERSION_H             4   /* Patch level version number of the implementation */

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if source file and Std_Types.h header file are of the same Autosar version */
    #if ((OS_TYPES_BASIC_AR_RELEASE_MAJOR_VERSION_H != STD_AR_RELEASE_MAJOR_VERSION) || \
         (OS_TYPES_BASIC_AR_RELEASE_MINOR_VERSION_H != STD_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Os_types_basic.h and Std_Types.h are different"
    #endif
#endif
/*==================================================================================================
*                                        LOCAL MACROS
==================================================================================================*/

/*
 * only the basic types
 */

typedef unsigned char OSBYTE;
typedef unsigned char *OSBYTEPTR;

typedef unsigned short OSWORD;
typedef signed short OSSHORT;

typedef unsigned short *OSWORDPTR;
typedef unsigned int OSDWORD;

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /*OS_TYPES_BASIC_H */

/** @} */
