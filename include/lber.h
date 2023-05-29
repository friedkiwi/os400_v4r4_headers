/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File Name:  lber.h                                        */
/*                                                                   */
/*  Descriptive Name:  lber header file                              */
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
/*  Header Files Included : None                                     */
/*                                                                   */
/*  Change Activity:                                                 */
/*                                                                   */
/*  CFD List :                                                       */
/*                                                                   */
/*  FLAG REASON       LEVEL DATE    PGMR      CHANGE DESCRIPTION     */
/*  ---- ------------ ----- ------- --------- ---------------------- */
/*  $A0= D9543.1      4D30  070997  ROCH      New Include            */
/*                                                                   */
/*  End CFD List.                                                    */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef _LBER_H
#define _LBER_H

/* structure for returning a sequence of octet strings + length */
struct berval {
	unsigned long	bv_len;
	char		*bv_val;
};

/*
 * structure representing a Ber element
 */
typedef struct berelement BerElement;

#define NULLBER	((BerElement *) 0)

#endif /* _LBER_H */
