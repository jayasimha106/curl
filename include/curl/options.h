#ifndef CURLINC_OPTIONS_H
#define CURLINC_OPTIONS_H
/***************************************************************************
 *                                  _   _ ____  _
 *  Project                     ___| | | |  _ \| |
 *                             / __| | | | |_) | |
 *                            | (__| |_| |  _ <| |___
 *                             \___|\___/|_| \_\_____|
 *
 * Copyright (C) 2018 - 2020, Daniel Stenberg, <daniel@haxx.se>, et al.
 *
 * This software is licensed as described in the file COPYING, which
 * you should have received as part of this distribution. The terms
 * are also available at https://curl.haxx.se/docs/copyright.html.
 *
 * You may opt to use, copy, modify, merge, publish, distribute and/or sell
 * copies of the Software, and permit persons to whom the Software is
 * furnished to do so, under the terms of the COPYING file.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif

  typedef enum {
  CURLOT_LONG,    /* long */
  CURLOT_OFF_T,   /* curl_off_t */
  CURLOT_OBJECT,  /* void * */
  CURLOT_STRING,  /* char * */
  CURLOT_SLIST,   /* struct curl_slist * */
  CURLOT_FUNCTION /* function pointer */
} curl_easytype;

struct curl_easyoption {
  const char *name;
  CURLoption id;
  curl_easytype type;
};

const struct curl_easyoption *curl_easy_option_by_name(const char *name);
const struct curl_easyoption *curl_easy_option_by_id (CURLoption id);
const struct curl_easyoption *
curl_easy_option_next(const struct curl_easyoption *prev);

#ifdef __cplusplus
} /* end of extern "C" */
#endif
#endif /* CURLINC_OPTIONS_H */

