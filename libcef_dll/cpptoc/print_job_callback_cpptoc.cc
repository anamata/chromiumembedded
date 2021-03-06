// Copyright (c) 2014 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/print_job_callback_cpptoc.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK print_job_callback_cont(
    struct _cef_print_job_callback_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefPrintJobCallbackCppToC::Get(self)->Continue();
}


// CONSTRUCTOR - Do not edit by hand.

CefPrintJobCallbackCppToC::CefPrintJobCallbackCppToC(CefPrintJobCallback* cls)
    : CefCppToC<CefPrintJobCallbackCppToC, CefPrintJobCallback,
        cef_print_job_callback_t>(cls) {
  struct_.struct_.cont = print_job_callback_cont;
}

#ifndef NDEBUG
template<> base::AtomicRefCount CefCppToC<CefPrintJobCallbackCppToC,
    CefPrintJobCallback, cef_print_job_callback_t>::DebugObjCt = 0;
#endif

