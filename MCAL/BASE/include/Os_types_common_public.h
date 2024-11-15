/**
*   @file    Os_types_common_public.h
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

#ifndef OS_TYPES_COMMON_PUBLIC_H_
#define OS_TYPES_COMMON_PUBLIC_H_


#ifdef __cplusplus
extern "C"
{
#endif

#include "Os_types_basic.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/


#define OS_TYPE_COMMON_PUBLIC_VENDOR_ID                    43    /* Freescale AUTOSAR Vendor ID  */
#define OS_TYPE_COMMON_PUBLIC_MODULE_ID                    0x01           /* OS Module ID                 */

#define OS_TYPE_COMMON_PUBLIC_AR_RELEASE_MAJOR_VERSION     4   /* Major version number of AUTOSAR specification       */
#define OS_TYPE_COMMON_PUBLIC_AR_RELEASE_MINOR_VERSION     3   /* Minor version number of AUTOSAR specification       */
#define OS_TYPE_COMMON_PUBLIC_AR_RELEASE_REVISION_VERSION  1   /* Patch level version number of AUTOSAR specification */

#define OS_TYPE_COMMON_PUBLIC_SW_MAJOR_VERSION             1   /* Major version number of the implementation   */
#define OS_TYPE_COMMON_PUBLIC_SW_MINOR_VERSION             0   /* Minor version number of the implementation   */
#define OS_TYPE_COMMON_PUBLIC_SW_PATCH_VERSION             4   /* Patch level version number of the implementation */

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/* Check current file version with Os_types_basic.h file */
#if (OS_TYPE_COMMON_PUBLIC_VENDOR_ID != OS_TYPES_BASIC_VENDOR_ID_H)
    #error "Os_types_common_public.h and Os_types_basic.h have different vendor ids"
#endif
#if ((OS_TYPE_COMMON_PUBLIC_AR_RELEASE_MAJOR_VERSION    != OS_TYPES_BASIC_AR_RELEASE_MAJOR_VERSION_H) || \
     (OS_TYPE_COMMON_PUBLIC_AR_RELEASE_MINOR_VERSION    != OS_TYPES_BASIC_AR_RELEASE_MINOR_VERSION_H) || \
     (OS_TYPE_COMMON_PUBLIC_AR_RELEASE_REVISION_VERSION != OS_TYPES_BASIC_AR_RELEASE_REVISION_VERSION_H))
    #error "AutoSar Version Numbers of Os_types_common_public.h and Os_types_basic.h are different"
#endif
#if ((OS_TYPE_COMMON_PUBLIC_SW_MAJOR_VERSION != OS_TYPES_BASIC_SW_MAJOR_VERSION_H) || \
     (OS_TYPE_COMMON_PUBLIC_SW_MINOR_VERSION != OS_TYPES_BASIC_SW_MINOR_VERSION_H) || \
     (OS_TYPE_COMMON_PUBLIC_SW_PATCH_VERSION != OS_TYPES_BASIC_SW_PATCH_VERSION_H))
    #error "Software Version Numbers of Os_types_common_public.h and Os_types_basic.h are different"
#endif


/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

#define OSFALSE         (0U)
#define OSTRUE          (1U)

/*
 *  types required by the Autosar API
 */

typedef OSBYTE OSAPPLICATIONTYPE;
typedef OSBYTE OSAPPLICATIONMASKTYPE;

/* avoid collision with MCAL */
#ifndef STATUSTYPEDEFINED
/* prescribed by OSEK/VDX */
#define STATUSTYPEDEFINED       /* required by OSEK/VDX Binding Specification */

#define E_OK                      ( (StatusType) 0 )   /* No error, successful completion  */
typedef unsigned char StatusType;       /* OSEK: Status type             */

#endif /* !defined(STATUSTYPEDEFINED) */


typedef OSWORD OSObjectType;            /* bits [15] - Core Id, bits [14..11] - ObjType, bits [10..0] - ObjId, */

typedef OSObjectType TaskType;          /* used in task, events api ... */

typedef OSDWORD TickType;               /* Type for timers ticks - use by counter, alarm, schedule table alarm */
typedef TickType  *TickRefType;         /* OSEK: Reference to counter value - use by counter and alarm */

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /*OS_TYPES_COMMON_PUBLIC_H_ */

/** @} */

