// Copyright (c) 2015 The Brick Authors.

#ifndef BRICK_REQUEST_UTIL_H_
#define BRICK_REQUEST_UTIL_H_

#include <string>
#include <map>

#include "include/cef_response.h"
#include "include/cef_urlrequest.h"

namespace request_util {
  typedef std::map<std::string, std::string> CookiesMap;
  typedef std::map<std::string, std::string> PostFormMap;

  CefRefPtr<CefPostData> PostFormToCefPost(const PostFormMap& form);
  void ParseCookie(const std::string& value, CookiesMap& destination);
  std::string ParseDownloadFilename(const std::string& url);
  CookiesMap GetCookies(const CefResponse::HeaderMap& headers);
  std::string GetErrorString(const CefURLRequest::ErrorCode code);
};  // namespace request_util


#endif  // BRICK_REQUEST_UTIL_H_
