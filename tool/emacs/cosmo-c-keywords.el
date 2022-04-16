(defconst cosmo-c-keywords-regex
  (let (

        (c99
         '("inline"
           "restrict"
           "_Imaginary"
           "_Bool"
           "_Pragma"
           "_Complex"))

        (c11
         '("_Atomic"
           "_Alignas"
           "_Alignof"
           "_Noreturn"
           "_Generic"
           "_Thread_local"
           "_Static_assert"
           "_Complex_I"
           "_Imaginary_I"))

        (cosmo
         '("__msabi"
           "function"
           "offsetof"
           "microarchitecture"
           "targetclones"
           "testonly"
           "forcealignargpointer"
           "textexit"
           "externinline"
           "dontinline"
           "noclone"
           "donothing"
           "printfesque"
           "flattenout"
           "mallocesque"
           "vallocesque"
           "null"
           "paramsnonnull"
           "returnspointerwithnoaliases"
           "alignas"
           "nosideeffect"
           "decltype"
           "forceinline"
           "nocallersavedregisters"
           "dontthrow"
           "nooptimize"
           "optimizesize"
           "optimizespeed"
           "alignof"
           "relegated"
           "antiquity"
           "memcpyesque"
           "libcesque"
           "artificial"
           "returnstwice"
           "returnsaligned"
           "noprune"
           "reallocesque"
           "nullterminated"
           "unreachable"
           "hidden"
           "privileged"
           "hasatleast"
           "nodebuginfo"
           "frownedupon"
           "wontreturn"
           "noasan"
           "noubsan"
           "initarray"
           "mayalias"
           "noinstrument"
           "interruptfn"
           "nocallback"
           "textstartup"
           "warnifused"
           "attributeallocsize"
           "attributeallocalign"
           "dontdiscard"
           "nointerpose"
           "compatfn"
           "returnsnonnull"
           "strftimeesque"
           "firstclass"
           "preinitarray"
           "scanfesque"
           "pureconst"
           "thatispacked"
           "strlenesque"
           "textwindows"
           "forcealign"
           "typeof"
           "textreal"
           "texthead"
           "autotype"
           "_Section"
           "_Vector_size"))

        (gnu
         '("__inline"
           "__thread"
           "__alignof"
           "__typeof"
           "__restrict"
           "__const__"
           "__label__"
           "__noinline__"
           "__noclone__"
           "__force_align_arg_pointer__"
           "__always_inline__"
           "__gnu_inline__"
           "__alignof__"
           "__asm__"
           "__attribute__"
           "__auto_type"
           "__byte__"
           "__complex__"
           "__imag__"
           "__may_alias__"
           "__noreturn__"
           "__packed__"
           "__pointer__"
           "__printf__"
           "__real__"
           "__restrict__"
           "__scanf__"
           "__strfmon__"
           "__strftime__"
           "__strong__"
           "__target__"
           "__transparent_union__"
           "__typeof__"
           "__volatile__"
           "__word__"
           "__alias__"
           "__aligned__"
           "__alloc_align__"
           "__alloc_size__"
           "__warn_if_not_aligned__"
           "__artificial__"
           "__assume_aligned__"
           "__cold__"
           "__constructor__"
           "__destructor__"
           "__copy__"
           "__deprecated__"
           "__error__"
           "__warning__"
           "__externally_visible__"
           "__flatten__"
           "__format__"
           "__gnu_format__"
           "__gnu_printf__"
           "__gnu_scanf__"
           "__format_arg__"
           "__hot__"
           "__ifunc__"
           "__interrupt__"
           "__interrupt_handler__"
           "__leaf__"
           "__no_caller_saved_registers__"
           "__malloc__"
           "__no_icf__"
           "__no_instrument_function__"
           "__no_profile_instrument_function__"
           "__no_reorder__"
           "__no_sanitize__"
           "__no_sanitize_address__"
           "__no_address_safety_analysis__"
           "__no_sanitize_thread__"
           "__leaf__"
           "__no_sanitize_undefined__"
           "__no_split_stack__"
           "__no_stack_limit__"
           "__noclone__"
           "__noipa__"
           "__nonnull__"
           "__noplt__"
           "__nothrow__"
           "__optimize__"
           "__pure__"
           "__patchable_function_entry__"
           "__returns_nonnull__"
           "__returns_twice__"
           "__section__"
           "__sentinel__"
           "__simd__"
           "__target_clones__"
           "__unused__"
           "__used__"
           "__visibility__"
           "__warn_unused_result__"
           "__params_nonnull__"
           "__weak__"
           "__vector_size__"
           "__ms_abi__"
           "__mode__"
           "__seg_fs"
           "__seg_gs"))

        (clang
         '("__optnone__"
           "__nodebug__"))

        )
    (concat "\\_<"
            (regexp-opt (append
                         c11
                         gnu
                         clang
                         cosmo))
            "\\_>")))

(provide 'cosmo-c-keywords)
