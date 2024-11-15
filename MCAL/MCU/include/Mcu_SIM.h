/**
*   @file    Mcu_SIM.h
*   @version 1.0.4
*
*   @brief   AUTOSAR Mcu - Function prototypes.
*   @details Interface available for IPW layer only.
*
*   @addtogroup MCU
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.3 MCAL
*   Platform             : ARM
*   Peripheral           : MC
*   Dependencies         : none
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


#ifndef MCU_SIM_H
#define MCU_SIM_H


#ifdef __cplusplus
extern "C"{
#endif


/**
* @page misra_violations MISRA-C:2004 violations
*
* @section Mcu_SIM_h_REF_1
* Violates MISRA 2004 Required Rule 19.15, : Repeated include files, Precautions shall be taken in
* order to prevent the contents of a header file being included twice This is not a violation since
* all header files are protected against multiple inclusions
*
* @section Mcu_SIM_h_REF_2
* Violates MISRA 2004 Advisory Rule 19.1, only preprocessor statements and comments
* before '#include' MemMap.h included after each section define in order to set the current memory
* section
*
* @section Mcu_SIM_h_REF_3
* Violates MISRA 2004 Advisory Rule 19.7, Function-like macro defined
* This violation is due to function like macros defined for register operations.
* Function like macros are used to reduce code complexity.
*
* @section Mcu_SIM_h_REF_4
* Violates MISRA 2004 Required Rule 1.4, The compiler/linker shall be checked to ensure 31 character
* significance and case sensitivity are supported for external identifiers.
* This is not a violation since all the compilers used interpret the identifiers correctly.
*
* @section [global]
* Violates MISRA 2004 Required Rule 5.1, Identifiers (internal and external) shall not rely
* on the significance of more than 31 characters. The used compilers use more than 31 chars for
* identifiers.
*/


/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Mcu_SIM_Types.h"
#include "Mcu_EnvCfg.h"


/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define MCU_SIM_VENDOR_ID                    43
/** @violates @ref Mcu_SIM_h_REF_4 The compiler/linker shall be checked. */
#define MCU_SIM_AR_RELEASE_MAJOR_VERSION     4
/** @violates @ref Mcu_SIM_h_REF_4 The compiler/linker shall be checked. */
#define MCU_SIM_AR_RELEASE_MINOR_VERSION     3
/** @violates @ref Mcu_SIM_h_REF_4 The compiler/linker shall be checked. */
#define MCU_SIM_AR_RELEASE_REVISION_VERSION  1
#define MCU_SIM_SW_MAJOR_VERSION             1
#define MCU_SIM_SW_MINOR_VERSION             0
#define MCU_SIM_SW_PATCH_VERSION             4


/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if source file and Mcu_SIM_Types header file are from the same vendor */
#if (MCU_SIM_VENDOR_ID != MCU_SIM_TYPES_VENDOR_ID)
    #error "Mcu_SIM.h and Mcu_SIM_Types.h have different vendor ids"
#endif
/* Check if source file and Mcu_SIM_Types header file are of the same Autosar version */
#if ((MCU_SIM_AR_RELEASE_MAJOR_VERSION != MCU_SIM_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (MCU_SIM_AR_RELEASE_MINOR_VERSION != MCU_SIM_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (MCU_SIM_AR_RELEASE_REVISION_VERSION != MCU_SIM_TYPES_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Mcu_SIM.h and Mcu_SIM_Types.h are different"
#endif
/* Check if source file and Mcu_SIM_Types header file are of the same Software version */
#if ((MCU_SIM_SW_MAJOR_VERSION != MCU_SIM_TYPES_SW_MAJOR_VERSION) || \
     (MCU_SIM_SW_MINOR_VERSION != MCU_SIM_TYPES_SW_MINOR_VERSION) || \
     (MCU_SIM_SW_PATCH_VERSION != MCU_SIM_TYPES_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Mcu_SIM.h and Mcu_SIM_Types.h are different"
#endif

/* Check if source file and Mcu_EnvCfg header file are from the same vendor */
#if (MCU_SIM_VENDOR_ID != MCU_SCFG_VENDOR_ID)
    #error "Mcu_SIM.h and Mcu_EnvCfg.h have different vendor ids"
#endif
/* Check if source file and Mcu_EnvCfg header file are of the same Autosar version */
#if ((MCU_SIM_AR_RELEASE_MAJOR_VERSION != MCU_SCFG_AR_RELEASE_MAJOR_VERSION) || \
     (MCU_SIM_AR_RELEASE_MINOR_VERSION != MCU_SCFG_AR_RELEASE_MINOR_VERSION) || \
     (MCU_SIM_AR_RELEASE_REVISION_VERSION != MCU_SCFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Mcu_SIM.h and Mcu_EnvCfg.h are different"
#endif
/* Check if source file and Mcu_EnvCfg header file are of the same Software version */
#if ((MCU_SIM_SW_MAJOR_VERSION != MCU_SCFG_SW_MAJOR_VERSION) || \
     (MCU_SIM_SW_MINOR_VERSION != MCU_SCFG_SW_MINOR_VERSION) || \
     (MCU_SIM_SW_PATCH_VERSION != MCU_SCFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Mcu_SIM.h and Mcu_EnvCfg.h are different"
#endif

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/


/*==================================================================================================
*                                             ENUMS
==================================================================================================*/


/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/



/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/


/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define MCU_START_SEC_CODE
/**
* @violates @ref Mcu_SIM_h_REF_1 MISRA 2004 Required Rule 19.15, Repeated include file
*/
#include "Mcu_MemMap.h"

#if (defined(MCU_DISABLE_SIM_INIT) && (STD_OFF == MCU_DISABLE_SIM_INIT))
#ifdef MCU_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == MCU_ENABLE_USER_MODE_SUPPORT)
/** @violates @ref Mcu_SIM_h_REF_3 Function-like macro defined.*/
#define  Call_Mcu_SIM_Init(SIM_pConfigPtr) \
do\
{ \
        Mcal_Trusted_Call1param(Mcu_SIM_Init,(SIM_pConfigPtr)); \
}\
while(0)
#else
/** @violates @ref Mcu_SIM_h_REF_3 Function-like macro defined.*/
#define  Call_Mcu_SIM_Init(SIM_pConfigPtr) \
do\
{ \
        Mcu_SIM_Init(SIM_pConfigPtr); \
}\
while(0)
#endif
#endif
#endif

#if (MCU_INIT_CLOCK == STD_ON)

#ifdef MCU_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == MCU_ENABLE_USER_MODE_SUPPORT)
/** @violates @ref Mcu_SIM_h_REF_3 Function-like macro defined.*/
#define  Call_Mcu_SIM_ClockConfig(SIM_pClockConfigPtr) \
do\
{ \
        Mcal_Trusted_Call1param(Mcu_SIM_ClockConfig,(SIM_pClockConfigPtr)); \
}\
while(0)
#else
/** @violates @ref Mcu_SIM_h_REF_3 Function-like macro defined.*/
#define  Call_Mcu_SIM_ClockConfig(SIM_pClockConfigPtr) \
do\
{ \
        Mcu_SIM_ClockConfig(SIM_pClockConfigPtr); \
}\
while(0)
#endif
#endif

#endif /* (MCU_INIT_CLOCK == STD_ON) */

#ifdef MCU_SRAM_RETEN_CONFIG_API
#if (MCU_SRAM_RETEN_CONFIG_API == STD_ON)
#ifdef MCU_ENABLE_USER_MODE_SUPPORT
#if (STD_ON == MCU_ENABLE_USER_MODE_SUPPORT)
/** @violates @ref Mcu_SIM_h_REF_3 Function-like macro defined.*/
#define  Call_Mcu_SIM_SRAMRetentionConfig(bSRAMReten) \
do\
{ \
        Mcal_Trusted_Call1param(Mcu_SIM_SRAMRetentionConfig,(bSRAMReten)); \
}\
while(0)
#else
/** @violates @ref Mcu_SIM_h_REF_3 Function-like macro defined.*/
#define  Call_Mcu_SIM_SRAMRetentionConfig(bSRAMReten) \
do\
{ \
        Mcu_SIM_SRAMRetentionConfig(bSRAMReten); \
}\
while(0)
#endif
#endif
#endif
#endif

#if (defined(MCU_DISABLE_SIM_INIT) && (STD_OFF == MCU_DISABLE_SIM_INIT))
FUNC( void, MCU_CODE) Mcu_SIM_Init(P2CONST(Mcu_SIM_ConfigType, AUTOMATIC, MCU_APPL_CONST) pConfigPtr);
#endif

#if (MCU_INIT_CLOCK == STD_ON)
FUNC( void, MCU_CODE) Mcu_SIM_ClockConfig(P2CONST(Mcu_SIM_ClockConfigType, AUTOMATIC, MCU_APPL_CONST) pClockConfigPtr);
#endif

#ifdef MCU_SRAM_RETEN_CONFIG_API
#if (MCU_SRAM_RETEN_CONFIG_API == STD_ON)
FUNC( void, MCU_CODE ) Mcu_SIM_SRAMRetentionConfig(VAR (Mcu_SRAMRetenConfigType, AUTOMATIC) eSRAMRetenConfig);
#endif
#endif

#define MCU_STOP_SEC_CODE
/**
* @violates @ref Mcu_SIM_h_REF_1 MISRA 2004 Required Rule 19.15, Repeated include file
* @violates @ref Mcu_SIM_h_REF_2 MISRA 2004 Advisory Rule 19.1, only preprocessor statements
* and comments before '#include' MemMap.h
*/
#include "Mcu_MemMap.h"


#ifdef __cplusplus
}
#endif

#endif /* MCU_SIM_H */

/** @} */
