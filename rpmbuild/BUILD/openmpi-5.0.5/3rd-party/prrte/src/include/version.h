/*
 * Copyright (c) 2004-2005 The Trustees of Indiana University and Indiana
 *                         University Research and Technology
 *                         Corporation.  All rights reserved.
 * Copyright (c) 2004-2005 The University of Tennessee and The University
 *                         of Tennessee Research Foundation.  All rights
 *                         reserved.
 * Copyright (c) 2004-2005 High Performance Computing Center Stuttgart,
 *                         University of Stuttgart.  All rights reserved.
 * Copyright (c) 2004-2005 The Regents of the University of California.
 *                         All rights reserved.
 * Copyright (c) 2011-2020 Cisco Systems, Inc.  All rights reserved
 * Copyright (c) 2019      Intel, Inc.  All rights reserved.
 * Copyright (c) 2022      Nanook Consulting.  All rights reserved.
 * $COPYRIGHT$
 *
 * Additional copyrights may follow
 *
 * $HEADER$
 *
 * This file should be included by any file that needs full
 * version information for the PRTE project
 */

#ifndef PRTE_VERSIONS_H
#define PRTE_VERSIONS_H

#define PRTE_MAJOR_VERSION 3
#define PRTE_MINOR_VERSION 0
#define PRTE_GREEK_VERSION "rc1"
#define PRTE_WANT_REPO_REV @PRTE_WANT_REPO_REV@
#define PRTE_REPO_REV "2024-09-01"
#ifdef PRTE_VERSION
/* If we included version.h, we want the real version, not the
   stripped (no-r number) verstion */
#undef PRTE_VERSION
#endif
#define PRTE_VERSION "3.0.6rc1"

#endif
