/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __EXT_BZIP2_H__
#define __EXT_BZIP2_H__

#include <runtime/base/base_includes.h>
#include <runtime/ext/ext_file.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline Variant f_bzclose(CObjRef bz) {
  return f_fclose(bz);
}
Variant f_bzcompress(CStrRef source, int blocksize = 4, int workfactor = 0);
Variant f_bzdecompress(CStrRef source, int small = 0);
int f_bzerrno(CObjRef bz);
Variant f_bzerror(CObjRef bz);
String f_bzerrstr(CObjRef bz);
Variant f_bzflush(CObjRef bz);
Variant f_bzopen(CStrRef filename, CStrRef mode);
inline Variant f_bzread(CObjRef bz, int length = 1024) {
  return f_fread(bz, length);
}
inline Variant f_bzwrite(CObjRef bz, CStrRef data, int length = 0) {
  return f_fwrite(bz, data, length);
}

///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXT_BZIP2_H__
