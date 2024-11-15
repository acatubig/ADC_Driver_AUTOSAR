/**
*   @file    Os_counter_api.h
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

#ifndef OS_COUNTER_API_H
#define OS_COUNTER_API_H

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

#include "Os_counter_types.h"   /* for StatusType and counter specific types */



/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/


#define OS_COUNTER_API_VENDOR_ID                    43    /* Freescale AUTOSAR Vendor ID  */
#define OS_COUNTER_API_MODULE_ID                    0x01           /* OS Module ID                 */

#define OS_COUNTER_API_AR_RELEASE_MAJOR_VERSION     4   /* Major version number of AUTOSAR specification       */
#define OS_COUNTER_API_AR_RELEASE_MINOR_VERSION     3   /* Minor version number of AUTOSAR specification       */
#define OS_COUNTER_API_AR_RELEASE_REVISION_VERSION  1   /* Patch level version number of AUTOSAR specification */

#define OS_COUNTER_API_SW_MAJOR_VERSION             1   /* Major version number of the implementation   */
#define OS_COUNTER_API_SW_MINOR_VERSION             0   /* Minor version number of the implementation   */
#define OS_COUNTER_API_SW_PATCH_VERSION             4   /* Patch level version number of the implementation */

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/


/* Check current file version with Os_counter_types.h file */
#if (OS_COUNTER_API_VENDOR_ID != OS_COUNTER_TYPES_VENDOR_ID_H)
    #error "Os_counter_api.h and Os_counter_types.h have different vendor ids"
#endif
#if ((OS_COUNTER_API_AR_RELEASE_MAJOR_VERSION    != OS_COUNTER_TYPES_AR_RELEASE_MAJOR_VERSION_H) || \
     (OS_COUNTER_API_AR_RELEASE_MINOR_VERSION    != OS_COUNTER_TYPES_AR_RELEASE_MINOR_VERSION_H) || \
     (OS_COUNTER_API_AR_RELEASE_REVISION_VERSION != OS_COUNTER_TYPES_AR_RELEASE_REVISION_VERSION_H))
    #error "AutoSar Version Numbers of Os_counter_api.h and Os_counter_types.h are different"
#endif
#if ((OS_COUNTER_API_SW_MAJOR_VERSION != OS_COUNTER_TYPES_SW_MAJOR_VERSION_H) || \
     (OS_COUNTER_API_SW_MINOR_VERSION != OS_COUNTER_TYPES_SW_MINOR_VERSION_H) || \
     (OS_COUNTER_API_SW_PATCH_VERSION != OS_COUNTER_TYPES_SW_PATCH_VERSION_H))
    #error "Software Version Numbers of Os_counter_api.h and Os_counter_types.h are different"
#endif


/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/


extern StatusType GetCounterValue (CounterType ctrId, TickRefType tickRef);

extern StatusType GetElapsedValue (CounterType ctrId, TickRefType valueRef, TickRefType tickRef);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /*OS_COUNTER_API_H */

/** @} */
