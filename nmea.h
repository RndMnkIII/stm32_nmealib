/*
 *
 * NMEA library
 * URL: http://nmea.sourceforge.net
 * Author: Tim (xtimor@gmail.com)
 * Licence: http://www.gnu.org/licenses/lgpl.html
 * $Id: nmea.h 17 2008-03-11 11:56:11Z xtimor $
 *
 */

#ifndef __NMEA_H__
#define __NMEA_H__
#ifdef  __cplusplus

//Esta funcion es necesario definirla ya que no se encuentra en la libreria
//estandar del compilador
extern "C" {
#endif
int _gettimeofday(struct timeval *tv, struct timezone *tz)
{
  return 0;
}
#ifdef  __cplusplus
}
#endif

#include "./nmea/config.h"
#include "./nmea/units.h"
#include "./nmea/gmath.h"
#include "./nmea/info.h"
#include "./nmea/sentence.h"
#include "./nmea/generate.h"
#include "./nmea/generator.h"
#include "./nmea/parse.h"
#include "./nmea/parser.h"
#include "./nmea/context.h"

#endif /* __NMEA_H__ */
