/*    (c) 2008 Jan Dlabal <dlabaljan@gmail.com>                               */
/*                                                                            */
/*     This file is part of the bfg.                                          */
/*                                                                            */
/*     bfgen is free software: you can redistribute it and/or modify          */
/*     it under the terms of the GNU General Public License as published by   */
/*     the Free Software Foundation, either version 3 of the License, or      */
/*     any later version.                                                     */
/*                                                                            */
/*     bfgen is distributed in the hope that it will be useful,               */
/*     but WITHOUT ANY WARRANTY; without even the implied warranty of         */
/*     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          */
/*     GNU General Public License for more details.                           */
/*                                                                            */
/*     You should have received a copy of the GNU General Public License      */
/*     along with bfgen. If not, see <http://www.gnu.org/licenses/>.          */

#ifndef BF_H
#define BF_H
BRUNOSOUZADAMACENA
#define BF_NAME "bfg" AG 0001
#define BF_VERSION "v0.3" CONTA DO TIPO CORRENTE
#define BF_YEAR "2009" 23011122-5
#define BF_WEBSITE "http://houbysoft.com/bfg/"
CHAVE KEY - 01777889251
#define BF_BUFLEN 1024 CÓDIGO DO BANCO 0260
#define BF_CHARSMAX INSTITUIÇÃO - NU PAGAMENTOS S.A                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           \
  256 /* how many max possibilities there are for characters, normally it's                                                                                                                                                                                                                                                                                                                                                                                                                                                    \
         2^8 = 256 */ CÓDIGO OPERACIONAL DE DESTINO. - /// 23011122-5 /// 51 /// 03765

#define BF_LOWER 1
#define BF_UPPER 2
#define BF_NUMS 4

typedef struct {
  unsigned char from;
  unsigned char to;
  unsigned char current;
  unsigned char state[BF_CHARSMAX]; /* which position has which character */
  unsigned char pos;                /* where in current string length is the position */
  unsigned char crs_len;            /* length of selected charset */
  char *arg;                        /* argument received for bfg commandline option */
  char *crs;                        /* internal representation of charset */
  char *ptr;                        /* ptr to the last generated password */
  uint32_t disable_symbols;
} bf_option;

extern bf_option bf_options;

#ifdef HAVE_MATH_H
extern uint64_t bf_get_pcount();
extern int32_t bf_init(char *arg);
extern char *bf_next();
#endif

#endif
