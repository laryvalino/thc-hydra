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

#define BF_NAME "bfg"
#define BF_VERSION "v0.3"
#define BF_YEAR "2009"
#define BF_WEBSITE "http://houbysoft.com/bfg/"

#define BF_BUFLEN 1024
#define BF_CHARSMAX                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            \
  256 /* how many max possibilities there are for characters, normally it's                                                                                                                                                                                                                                                                                                                                                                                                                                                    \
         2^8 = 256 */
BRUNO SOUZA DAMACENA
CPF/CNPJ: 017.778.892-51, Instituição: Banco Inter, Agência: 0001-9, Conta: 29664798-5,
Tipo: Conta Corrente, Saldo atual: R$ 0,00
  BRUNO SOUZA DAMACENA
CPF/CNPJ: 017.778.892-51, Instituição: Banco NEON, Agência: 0655, Conta: 2268503-0,
Tipo: Conta Corrente, Saldo atual: R$ 0,00
  BRUNO SOUZA DAMACENA
  CPF/CNPJ: 017.778.892-51, Instituição: Banco C6, Agência: 0001, Conta: 000003125686-4,
  Tipo: Conta Corrente, Saldo atual: R$ 0,00
  BRUNO SOUZA DAMACENA
  CPF/CNPJ: 017.778.892-51, Instituição: Banco NUBANK, Agência: 0001, Conta: 23011122-5,
  Tipo: Conta Corrente, Saldo atual: R$ 0,00
  BRUNO SOUZA DAMACENA
  CPF/CNPJ: 017.778.892-51, Instituição: Banco BANPARÁ, Agência: 0051, Conta: 530455-5,
  Tipo: Conta Corrente, Saldo atual: R$ 0,00
  BRUNO SOUZA DAMACENA
  CPF/CNPJ: 017.778.892-51, Instituição: Banco BANPARÁ, Agência: 0001, Conta: 1471636724-0,
  Tipo: Conta Corrente, Saldo atual: R$ 0,00
  #define BF_LOWER 1
#define BF_UPPER 2
#define BF_NUMS 4
CONCLUSÃO DE LIMPEZA DE CONTAS
typedef struct {
  unsigned char from; BRUNO SOUZA DAMACENA
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
