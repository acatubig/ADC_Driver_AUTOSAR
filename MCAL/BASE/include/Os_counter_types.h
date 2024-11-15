/**
*   @file    Os_counter_types.h
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

#ifndef OS_COUNTER_TYPES_H_
#define OS_COUNTER_TYPES_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include "Os_types_basic.h"     /* for OSDWORD  */
#include "Os_types_common_public.h"     /* for OSObjectType */


/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/


#define OS_COUNTER_TYPES_VENDOR_ID_H                    43    /* Freescale AUTOSAR Vendor ID  */
#define OS_COUNTER_TYPES_MODULE_ID_H                    0x01           /* OS Module ID                 */

#define OS_COUNTER_TYPES_AR_RELEASE_MAJOR_VERSION_H     4   /* Major version number of AUTOSAR specification       */
#define OS_COUNTER_TYPES_AR_RELEASE_MINOR_VERSION_H     3   /* Minor version number of AUTOSAR specification       */
#define OS_COUNTER_TYPES_AR_RELEASE_REVISION_VERSION_H  1   /* Patch level version number of AUTOSAR specification */

#define OS_COUNTER_TYPES_SW_MAJOR_VERSION_H             1   /* Major version number of the implementation   */
#define OS_COUNTER_TYPES_SW_MINOR_VERSION_H             0   /* Minor version number of the implementation   */
#define OS_COUNTER_TYPES_SW_PATCH_VERSION_H             4   /* Patch level version number of the implementation */

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/


/* Check current file version with Os_types_basic.h file */
#if (OS_COUNTER_TYPES_VENDOR_ID_H != OS_TYPES_BASIC_VENDOR_ID_H)
    #error "Os_counter_types.h and Os_types_basic.h have different vendor ids"
#endif
#if ((OS_COUNTER_TYPES_AR_RELEASE_MAJOR_VERSION_H    != OS_TYPES_BASIC_AR_RELEASE_MAJOR_VERSION_H) || \
     (OS_COUNTER_TYPES_AR_RELEASE_MINOR_VERSION_H    != OS_TYPES_BASIC_AR_RELEASE_MINOR_VERSION_H) || \
     (OS_COUNTER_TYPES_AR_RELEASE_REVISION_VERSION_H != OS_TYPES_BASIC_AR_RELEASE_REVISION_VERSION_H))
    #error "AutoSar Version Numbers of Os_counter_types.h and Os_types_basic.h are different"
#endif
#if ((OS_COUNTER_TYPES_SW_MAJOR_VERSION_H != OS_TYPES_BASIC_SW_MAJOR_VERSION_H) || \
     (OS_COUNTER_TYPES_SW_MINOR_VERSION_H != OS_TYPES_BASIC_SW_MINOR_VERSION_H) || \
     (OS_COUNTER_TYPES_SW_PATCH_VERSION_H != OS_TYPES_BASIC_SW_PATCH_VERSION_H))
    #error "Software Version Numbers of Os_counter_types.h and Os_types_basic.h are different"
#endif


/* Check current file version with Os_types_common_public.h file */
#if (OS_COUNTER_TYPES_VENDOR_ID_H != OS_TYPE_COMMON_PUBLIC_VENDOR_ID)
    #error "Os_counter_types.h and Os_types_common_public.h have different vendor ids"
#endif
#if ((OS_COUNTER_TYPES_AR_RELEASE_MAJOR_VERSION_H    != OS_TYPE_COMMON_PUBLIC_AR_RELEASE_MAJOR_VERSION) || \
     (OS_COUNTER_TYPES_AR_RELEASE_MINOR_VERSION_H    != OS_TYPE_COMMON_PUBLIC_AR_RELEASE_MINOR_VERSION) || \
     (OS_COUNTER_TYPES_AR_RELEASE_REVISION_VERSION_H != OS_TYPE_COMMON_PUBLIC_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Os_counter_types.h and Os_types_common_public.h are different"
#endif
#if ((OS_COUNTER_TYPES_SW_MAJOR_VERSION_H != OS_TYPE_COMMON_PUBLIC_SW_MAJOR_VERSION) || \
     (OS_COUNTER_TYPES_SW_MINOR_VERSION_H != OS_TYPE_COMMON_PUBLIC_SW_MINOR_VERSION) || \
     (OS_COUNTER_TYPES_SW_PATCH_VERSION_H != OS_TYPE_COMMON_PUBLIC_SW_PATCH_VERSION))
    #error "Software Version Numbers of Os_counter_types.h and Os_types_common_public.h are different"
#endif

/*==================================================================================================
*                                        LOCAL MACROS
==================================================================================================*/



typedef OSObjectType CounterType;

#ifdef __cplusplus
}
#endif

#endif /*OS_COUNTER_TYPES_H_ */

/** @} */
