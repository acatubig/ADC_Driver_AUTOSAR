/**
*   @file    Lin_GeneralTypes.h
*   @implements Lin_GeneralTypes.h_Artifact
*   @version 1.0.4
*
*   @brief   AUTOSAR Base - General Types.
*   @details API header for all types and constants that are shared among the AUTOSAR LIN modules
*            Lin, LinIf and LinTrcv.
*            This file contains sample code only. It is not part of the production code deliverables
*   @addtogroup BASE_COMPONENT
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.3 MCAL
*   Platform             : ARM
*   Peripheral           : S32K1XX
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


#ifndef LIN_GENERAL_TYPES_H
#define LIN_GENERAL_TYPES_H

#ifdef __cplusplus
extern "C"{
#endif
/**
* @page misra_violations MISRA-C:2004 violations
*
* @section [global]
* Violates MISRA 2004 Required Rule 5.1, Identifiers (internal and external) shall not rely
* on the significance of more than 31 characters. The used compilers use more than 31 chars for
* identifiers.
*/
/**
* @file           Lin_GeneralTypes.h
*/
/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/


/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/**
@{
* @brief Parameters that shall be published within the modules header file.
*       The integration of incompatible files shall be avoided.
*/
#define LIN_GENERALTYPES_AR_RELEASE_MAJOR_VERSION      4
#define LIN_GENERALTYPES_AR_RELEASE_MINOR_VERSION      3

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/**
* @brief          Checksum models for the LIN Frame.
* @details        This type is used to specify the Checksum model to be
*                 used for the LIN Frame.
* @implements     Lin_FrameCsModelType_enumeration
*/
typedef enum
    {
    LIN_ENHANCED_CS,    /**< @brief Enhanced checksum model.*/
    LIN_CLASSIC_CS      /**< @brief Classic checksum model.*/
    } Lin_FrameCsModelType;

/**
* @brief          Frame response types.
* @details        This type is used to specify whether the frame
*                 processor is required to transmit the response
*                 part of the LIN frame.
* @implements     Lin_FrameResponseType_enumeration
*/

typedef enum
    {
    LIN_MASTER_RESPONSE,    /**< @brief Response is generated from
                                        this (master) node.*/
    LIN_SLAVE_RESPONSE,     /**< @brief Response is generated from a
                                        remote slave node.*/
    LIN_SLAVE_TO_SLAVE      /**< @brief Response is generated from one
                                        slave to another slave.*/
                            /**< @brief For the master the response
                                        will be anonymous, it does not
                                        have to receive the response.*/
    } Lin_FrameResponseType;

/**
* @brief          LIN Frame and Channel states operation.
* @details        LIN operation states for a LIN channel or frame, as returned
*                 by the API service Lin_GetStatus().
*                 part of the LIN frame.
* @implements     Lin_StatusType_enumeration
*/
typedef enum
    {
    LIN_NOT_OK = 0,     /**< @brief Development or production error
                                    occurred.*/
    LIN_TX_OK,          /**< @brief Successful transmission.*/
    LIN_TX_BUSY,        /**< @brief Ongoing transmission (Header or
                                    Response).*/
    LIN_TX_HEADER_ERROR,/**< @brief Erroneous header transmission such
                                    as:
                                     - Mismatch between sent and read
                                       back data
                                     - Identifier parity error
                                     - Physical bus error.*/
    LIN_TX_ERROR,       /**< @brief Erroneous transmission such as:
                                     - Mismatch between sent and read
                                       back data
                                     - Physical bus error.*/
    LIN_RX_OK,          /**< @brief Reception of correct response.*/
    LIN_RX_BUSY,        /**< @brief Ongoing reception:
                                    at least one response byte has
                                    been received, but the checksum
                                    byte has not been received.*/
    LIN_RX_ERROR,       /**< @brief Erroneous reception such as:
                                     - Framing error
                                     - Overrun error
                                     - Checksum error
                                     - Short response.*/
    LIN_RX_NO_RESPONSE, /**< @brief No response byte has been received
                                    so far.*/
                        /**< @brief This is a mess !!
                                   Frame status is mixed with channel
                                   status but i kept it here only
                                   because of LIN168.*/
    LIN_OPERATIONAL,    /**< @brief Normal operation;
                                     - The related LIN channel is ready
                                       to transmit next header
                                     - No data from previous frame
                                       available (e.g. after
                                       initialization).*/
    LIN_CH_SLEEP        /**< @brief Sleep mode operation;
                                     - In this mode wake-up detection
                                       from slave nodes is enabled.*/
    } Lin_StatusType;

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
* @brief          Data length of a LIN Frame.
* @details        This type is used to specify the number of SDU
*                 data bytes to copy.
* @implements     Lin_FrameDlType_typedef
*/
typedef uint8 Lin_FrameDlType;

/**
* @brief          The LIN identifier (0..0x3F) with its parity bits.
* @details        Represents all valid protected Identifier used by
*                 Lin_SendHeader().
* @implements     Lin_FramePidType_typedef
*/
typedef uint8 Lin_FramePidType;

/**
* @brief          The LIN identifier (0..0x3F) with its parity bits.
* @details        This Type is used to provide PID, checksum model,
*                 data length and SDU pointer from the LIN Interface
*                 to the LIN driver.
* @implements     Lin_PduType_struct
*/
typedef struct
    {
    Lin_FramePidType      Pid;     /**< @brief LIN frame identifier.*/
    Lin_FrameCsModelType  Cs;      /**< @brief Checksum model type.*/
    Lin_FrameResponseType Drc;     /**< @brief Response type.*/
    Lin_FrameDlType       Dl;      /**< @brief Data length.*/
    uint8*                SduPtr;  /**< @brief Pointer to Sdu.*/
    } Lin_PduType;
/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* LIN_GENERAL_TYPES_H */

/** @} */
