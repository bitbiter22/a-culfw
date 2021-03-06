/* 
 * Copyright by B.Hempel
 * License: GPL v2
 */

#ifndef _RF_RECEIVE_HMS_H
#define _RF_RECEIVE_HMS_H

#include <stdio.h>
#include <util/parity.h>
#include "board.h"
#include "rf_receive_bucket.h"
#include "fband.h"

#ifdef HAS_HMS
#define TYPE_HMS     'H'

#define STATE_HMS     4

/*
 * Analyse HMS packet.
 * Parameter:
 *  b        = the received bucket
 *  datatype = the datatype
 *  obuf     = the object buffer
 *  oby      = the oby count
 * The datatype are set to TYPE_HMS, if packet is correct.
 */
void analyze_hms(bucket_t *b, uint8_t *datatype, uint8_t *obuf, uint8_t *oby);

#endif
#endif

