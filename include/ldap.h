#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File Name:  ldap.h                                        */
/*                                                                   */
/*  Descriptive Name:  ldap header file                              */
/*                                                                   */
/*  Description:  Defines variables, structures, and function        */
/*                prototypes for ldap.                               */
/*                                                                   */
/* 5769-SS1 (C) COPYRIGHT IBM CORP. 1997,1998                        */
/* ALL RIGHTS RESERVED.                                              */
/* US GOVERNMENT USERS RESTRICTED RIGHTS -                           */
/* USE, DUPLICATION OR DISCLOSURE RESTRICTED                         */
/* BY GSA ADP SCHEDULE CONTRACT WITH IBM CORP.                       */
/*                                                                   */
/* LICENSED MATERIALS-PROPERTY OF IBM                                */
/*                                                                   */
/* Copyright (c) 1990 Regents of the University of Michigan.         */
/* All rights reserved.                                              */
/*                                                                   */
/* Redistribution and use in source and binary forms are permitted   */
/* provided that this notice is preserved and that due credit is     */
/* given to the University of Michigan at Ann Arbor. The name of the */
/* University may not be used to endorse or promote products         */
/* derived from this software without specific prior written         */
/* permission.  This software is provided ``as is'' without express  */
/* or implied warranty.                                              */
/*                                                                   */
/*  Header Files Included :  lber.h                                  */
/*                                                                   */
/*  Function Prototype List:                                         */
/*                                                                   */
/*    - ldap_abandon            : cancel uncompleted ldap operation  */
/*    - ldap_add                : ldap add entry                     */
/*    - ldap_add_s              : ldap add entry (synchronously)     */
/*    - ldap_bind               : initiate ldap bind operation       */
/*    - ldap_bind_s             : initiate ldap bind (synchronously) */
/*    - ldap_compare            : compare entry attribute value      */
/*    - ldap_compare_s          : compare entry attribute value      */
/*    - ldap_count_attributes   : return # of attributes of an entry */
/*    - ldap_count_entries      : Count # of entries in ldap result  */
/*    - ldap_count_values       : # returned by ldap_get_values      */
/*    - ldap_count_values_len   : # returned by ldap_get_values_len  */
/*    - ldap_app_ssl_start_np   : start using dig cert mgr       @A1A*/
/*    - ldap_delete             : delete entry                       */
/*    - ldap_delete_s           : delete entry (sync)                */
/*    - ldap_err2string         : retrieve error message string      */
/*    - ldap_explode_dn         : Breaks up a distinguished name     */
/*    - ldap_first_attribute    : Returns first attribute of an entry*/
/*    - ldap_first_entry        : Get first entry in a result chain  */
/*    - ldap_free_urldesc       : frees url description structure    */
/*    - ldap_get_dn             : Get distinguised name of an entry  */
/*    - ldap_get_errno          : retrieve ldap error information    */
/*    - ldap_get_option         : Get current ldap session option    */
/*    - ldap_get_values         : get set of attribute values        */
/*    - ldap_get_values_len     : retrieve set of binary attributes  */
/*    - ldap_init               : initialize ldap session            */
/*    - ldap_is_ldap_url        : checks string for ldap url         */
/*    - ldap_memfree            : free ldap API function memory      */
/*    - ldap_modify             : modify an entry                    */
/*    - ldap_modify_s           : modify an entry (synchronously)    */
/*    - ldap_modrdn             : change the name of an entry        */
/*    - ldap_modrdn_s           : change name of an entry (sync)     */
/*    - ldap_mods_free          : free array of modify structures    */
/*    - ldap_msgfree            : free ldap result message           */
/*    - ldap_next_attribute     : return next attribute of an entry  */
/*    - ldap_next_entry         : Get next entry in a result chain   */
/*    - ldap_open               : initialize ldap session            */
/*    - ldap_perror             : print error message                */
/*    - ldap_result             : retrieve result of an asynchronous */
/*                                ldap operation                     */
/*    - ldap_result2error       : retrieve error code                */
/*    - ldap_search             : initiate ldap search               */
/*    - ldap_search_s           : initiate synchronous ldap search   */
/*    - ldap_search_st          : initiate a timed ldap search       */
/*    - ldap_set_option         : Set current ldap session option    */
/*    - ldap_set_rebind_proc    : set client rebind procedure        */
/*    - ldap_simple_bind        : initiate ldap bind operation       */
/*    - ldap_simple_bind_s      : initiate ldap bind (synchronously) */
/*    - ldap_ssl_start          : start secure connection to server  */
/*    - ldap_unbind             : close an ldap session              */
/*    - ldap_unbind_s           : close an ldap session              */
/*    - ldap_url_parse          : parses an ldap url                 */
/*    - ldap_url_search         : search ldap directory based on     */
/*                                contents of ldap url               */
/*    - ldap_url_search_s       : synchronous ldap search            */
/*    - ldap_url_search_st      : timed synchronous ldap search      */
/*    - ldap_value_free         : frees ldap_get_values memory       */
/*    - ldap_value_free_len     : frees ldap_get_values_len memory   */
/*                                                                   */
/*  Change Activity:                                                 */
/*                                                                   */
/*  CFD List :                                                       */
/*                                                                   */
/*  FLAG REASON       LEVEL DATE    PGMR      CHANGE DESCRIPTION     */
/*  ---- ------------ ----- ------- --------- ---------------------- */
/*  $A0= D9543.1      4D30  070997  ROCH      New Include            */
/*  $A1=              4D40  081098  CAR       dcm support            */
/*  $A2= P3690175     4P40  012799  CAR       add additional error   */
/*                                            codes                  */
/*  End CFD List.                                                    */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef _LDAP_H
#define _LDAP_H

#ifdef __cplusplus
extern "C" {
#endif

#include <lber.h>

#define LDAP_VERSION2	2
#define LDAP_VERSION	LDAP_VERSION2

#define LDAP_PORT	389
#define LDAPS_PORT	636

#define LDAP_MAX_ATTR_LEN	100

/* possible result types a server can return */
#define LDAP_RES_BIND			0x61L	/* application + constructed */
#define LDAP_RES_SEARCH_ENTRY		0x64L	/* application + constructed */
#define LDAP_RES_SEARCH_RESULT		0x65L	/* application + constructed */
#define LDAP_RES_MODIFY 		0x67L	/* application + constructed */
#define LDAP_RES_ADD			0x69L	/* application + constructed */
#define LDAP_RES_DELETE 		0x6bL	/* application + constructed */
#define LDAP_RES_MODRDN 		0x6dL	/* application + constructed */
#define LDAP_RES_COMPARE		0x6fL	/* application + constructed */
#define LDAP_RES_ANY			(-1L)

/* authentication methods available */
#define LDAP_AUTH_SIMPLE	0x80L	/* context specific + primitive   */

/* search scopes */
#define LDAP_SCOPE_BASE 	0x00
#define LDAP_SCOPE_ONELEVEL	0x01
#define LDAP_SCOPE_SUBTREE	0x02

/* for modifications */
typedef struct ldapmod {
	int		mod_op;
#define LDAP_MOD_ADD		0x00
#define LDAP_MOD_DELETE 	0x01
#define LDAP_MOD_REPLACE	0x02
#define LDAP_MOD_BVALUES	0x80
	char		*mod_type;
	union {
		char		**modv_strvals;
		struct berval	**modv_bvals;
	} mod_vals;
#define mod_values	mod_vals.modv_strvals
#define mod_bvalues	mod_vals.modv_bvals
	struct ldapmod	*mod_next;
} LDAPMod;

/*
 * options that can be set/gotten
 */
#define LDAP_OPT_SIZELIMIT	0x00
#define LDAP_OPT_TIMELIMIT	0x01
#define LDAP_OPT_REFERRALS	0x00000002
#define LDAP_OPT_DEREF		0x03
#define LDAP_OPT_RESTART	0x00000004
#define LDAP_OPT_REFHOPLIMIT	0x05
#define LDAP_OPT_SSL_CIPHER	0x07
#define LDAP_OPT_SSL_TIMEOUT	0x08

/* option value for no size limit or no time limit on searches */
#define LDAP_NO_LIMIT		0

/* option values for binary options */
#define LDAP_OPT_ON		0x01
#define LDAP_OPT_OFF		0x00

/* option values for dereferencing aliases */
#define LDAP_DEREF_NEVER 	0
#define LDAP_DEREF_SEARCHING	1
#define LDAP_DEREF_FINDING 	2	
#define LDAP_DEREF_ALWAYS	3

/* default limit on nesting of referrals */
#define LDAP_DEFAULT_REFHOPLIMIT	5

/* options for SSL ciphers */
#define LDAP_SSL_RC4_MD5_EX	"03"
#define LDAP_SSL_RC2_MD5_EX	"06"
#define LDAP_SSL_RC4_SHA_US	"05"
#define LDAP_