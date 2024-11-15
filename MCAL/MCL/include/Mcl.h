/**
*     @file           Mcl.h
*
*     @version 1.0.4
*
*     @brief   AUTOSAR Mcl - MCL driver header file.
*     @details MCL driver header file, containing the Autosar API specification and other variables
*              and functions that are exported by the MCL driver.
*
*     @addtogroup MCL_MODULE
*     @{
*/
/*==================================================================================================
*     Project             : AUTOSAR 4.3 MCAL
*     Platform            : ARM
*     Peripheral          : eDMA
*     Dependencies        : none
*
*     Autosar Version     :  4.3.1
*     Autosar Revision    : ASR_REL_4_3_REV_0001
*     Autosar ConfVariant :
*     SWVersion           : 1.0.4
*     BuildVersion        : S32K1XX_MCAL_1_0_4_RTM_ASR_REL_4_3_REV_0001_04-Apr-22
*
*     (c) Copyright 2006-2016 Freescale Semiconductor, Inc. 
*       Copyright 2017-2022 NXP
*     All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
==================================================================================================*/

#ifndef MCL_H
#define MCL_H

#ifdef __cplusplus
extern "C"
{
#endif

/**
* @page misra_violations MISRA-C:2004 violations
*
*/


/*==================================================================================================
*                                          INCLUDE FILES
*  1) system and project includes
*  2) needed interfaces from external units
*  3) internal and external interfaces from this unit
==================================================================================================*/

#include "CDD_Mcl.h"

/*==================================================================================================
*                                SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define MCL_VENDOR_ID_H                      43

#define MCL_AR_RELEASE_MAJOR_VERSION_H       4
#define MCL_AR_RELEASE_MINOR_VERSION_H       3
#define MCL_AR_RELEASE_REVISION_VERSION_H    1
#define MCL_SW_MAJOR_VERSION_H               1
#define MCL_SW_MINOR_VERSION_H               0
#define MCL_SW_PATCH_VERSION_H               4
/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
#if (MCL_VENDOR_ID_H != MCL_VENDOR_ID)
    #error "Mcl.h and CDD_Mcl.h have different vendor ids"
#endif
/* Check if current file and CDD_Mcl header file are of the same Autosar version */
#if (( MCL_AR_RELEASE_MAJOR_VERSION_H != MCL_AR_RELEASE_MAJOR_VERSION) || \
     ( MCL_AR_RELEASE_MINOR_VERSION_H != MCL_AR_RELEASE_MINOR_VERSION) || \
     ( MCL_AR_RELEASE_REVISION_VERSION_H !=  MCL_AR_RELEASE_REVISION_VERSION) \
    )
     #error "AutoSar Version Numbers of Mcl.h and CDD_Mcl.h are different"
#endif
/* Check if current file and CDD_Mcl header file are of the same software version */
#if ((MCL_SW_MAJOR_VERSION_H != MCL_SW_MAJOR_VERSION) || \
     (MCL_SW_MINOR_VERSION_H != MCL_SW_MINOR_VERSION) || \
     (MCL_SW_PATCH_VERSION_H != MCL_SW_PATCH_VERSION) \
    )
     #error "Software Version Numbers of Mcl.h and CDD_Mcl.h are different"
#endif
/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                        DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/


/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                      FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

#endif  /* MCL_H */
/** @} */

