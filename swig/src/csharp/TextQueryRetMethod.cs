/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.36
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

namespace Lemur {

using System;
using System.Runtime.InteropServices;

public class TextQueryRetMethod : RetrievalMethod {
  private HandleRef swigCPtr;

  internal TextQueryRetMethod(IntPtr cPtr, bool cMemoryOwn) : base(lemur_csharpPINVOKE.TextQueryRetMethodUpcast(cPtr), cMemoryOwn) {
    swigCPtr = new HandleRef(this, cPtr);
  }

  internal static HandleRef getCPtr(TextQueryRetMethod obj) {
    return (obj == null) ? new HandleRef(null, IntPtr.Zero) : obj.swigCPtr;
  }

  ~TextQueryRetMethod() {
    Dispose();
  }

  public override void Dispose() {
    lock(this) {
      if(swigCPtr.Handle != IntPtr.Zero && swigCMemOwn) {
        swigCMemOwn = false;
        lemur_csharpPINVOKE.delete_TextQueryRetMethod(swigCPtr);
      }
      swigCPtr = new HandleRef(null, IntPtr.Zero);
      GC.SuppressFinalize(this);
      base.Dispose();
    }
  }

  public TextQueryRetMethod(RetrievalMethod m) : this((IntPtr)RetrievalMethod.getCPtr(m), false) {}
  
}

}
