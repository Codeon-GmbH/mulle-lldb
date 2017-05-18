//
// this file is transformed with make-inc.sh into mulle-objc-lookup.inc
// which is then included into MulleObjCTrampolineHandler.cpp
//
// use code in mulle_objc_runtime to do the actual call
// I still use this wrapping function in lldb, because I am too lazy
// to figure out how to do this correctly (and you are probabaly too :P)
//
void   *__lldb_objc_find_implementation_for_selector( void *object,
                                                      unsigned int methodid,
                                                      void *cls_or_classid,
                                                      int is_classid,
                                                      int is_meta,
                                                      int debug)
{
   void   *mulle_objc_lldb_lookup_methodimplementation( void *obj,
                                                        unsigned int methodid,
                                                        void *cls_or_classid,
                                                        int is_classid,
                                                        int is_meta,
                                                        int debug);

    return( mulle_objc_lldb_lookup_methodimplementation( object,
                                                         methodid,
                                                         cls_or_classid,
                                                         is_classid,
                                                         is_meta,
                                                         debug));
}