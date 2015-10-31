#ifndef WINDOWS_EXCEPTION_H
#define WINDOWS_EXCEPTION_H

#ifndef _WINNT_
#ifndef _MINWINBASE_

#define STATUS_WAIT_0				((DWORD)0x00000000L)
#define STATUS_ABANDONED_WAIT_0			((DWORD)0x00000080L)
#define STATUS_USER_APC				((DWORD)0x000000C0L)
#define STATUS_TIMEOUT				((DWORD)0x00000102L)
#define STATUS_PENDING				((DWORD)0x00000103L)
#define DBG_EXCEPTION_HANDLED			((DWORD)0x00010001L)
#define DBG_CONTINUE				((DWORD)0x00010002L)
#define STATUS_SEGMENT_NOTIFICATION		((DWORD)0x40000005L)
#define STATUS_FATAL_APP_EXIT			((DWORD)0x40000015L)
#define DBG_TERMINATE_THREAD			((DWORD)0x40010003L)
#define DBG_TERMINATE_PROCESS			((DWORD)0x40010004L)
#define DBG_CONTROL_C				((DWORD)0x40010005L)
#define DBG_PRINTEXCEPTION_C			((DWORD)0x40010006L)
#define DBG_RIPEXCEPTION			((DWORD)0x40010007L)
#define DBG_CONTROL_BREAK			((DWORD)0x40010008L)
#define DBG_COMMAND_EXCEPTION			((DWORD)0x40010009L)
#define STATUS_GUARD_PAGE_VIOLATION		((DWORD)0x80000001L)
#define STATUS_DATATYPE_MISALIGNMENT		((DWORD)0x80000002L)
#define STATUS_BREAKPOINT			((DWORD)0x80000003L)
#define STATUS_SINGLE_STEP			((DWORD)0x80000004L)
#define STATUS_LONGJUMP				((DWORD)0x80000026L)
#define STATUS_UNWIND_CONSOLIDATE		((DWORD)0x80000029L)
#define DBG_EXCEPTION_NOT_HANDLED		((DWORD)0x80010001L)
#define STATUS_ACCESS_VIOLATION			((DWORD)0xC0000005L)
#define STATUS_IN_PAGE_ERROR			((DWORD)0xC0000006L)
#define STATUS_INVALID_HANDLE			((DWORD)0xC0000008L)
#define STATUS_INVALID_PARAMETER		((DWORD)0xC000000DL)
#define STATUS_NO_MEMORY			((DWORD)0xC0000017L)
#define STATUS_ILLEGAL_INSTRUCTION		((DWORD)0xC000001DL)
#define STATUS_NONCONTINUABLE_EXCEPTION		((DWORD)0xC0000025L)
#define STATUS_INVALID_DISPOSITION		((DWORD)0xC0000026L)
#define STATUS_ARRAY_BOUNDS_EXCEEDED		((DWORD)0xC000008CL)
#define STATUS_FLOAT_DENORMAL_OPERAND		((DWORD)0xC000008DL)
#define STATUS_FLOAT_DIVIDE_BY_ZERO		((DWORD)0xC000008EL)
#define STATUS_FLOAT_INEXACT_RESULT		((DWORD)0xC000008FL)
#define STATUS_FLOAT_INVALID_OPERATION		((DWORD)0xC0000090L)
#define STATUS_FLOAT_OVERFLOW			((DWORD)0xC0000091L)
#define STATUS_FLOAT_STACK_CHECK		((DWORD)0xC0000092L)
#define STATUS_FLOAT_UNDERFLOW			((DWORD)0xC0000093L)
#define STATUS_INTEGER_DIVIDE_BY_ZERO		((DWORD)0xC0000094L)
#define STATUS_INTEGER_OVERFLOW			((DWORD)0xC0000095L)
#define STATUS_PRIVILEGED_INSTRUCTION		((DWORD)0xC0000096L)
#define STATUS_STACK_OVERFLOW			((DWORD)0xC00000FDL)
#define STATUS_DLL_NOT_FOUND			((DWORD)0xC0000135L)
#define STATUS_ORDINAL_NOT_FOUND		((DWORD)0xC0000138L)
#define STATUS_ENTRYPOINT_NOT_FOUND		((DWORD)0xC0000139L)
#define STATUS_CONTROL_C_EXIT			((DWORD)0xC000013AL)
#define STATUS_DLL_INIT_FAILED			((DWORD)0xC0000142L)
#define STATUS_FLOAT_MULTIPLE_FAULTS		((DWORD)0xC00002B4L)
#define STATUS_FLOAT_MULTIPLE_TRAPS		((DWORD)0xC00002B5L)
#define STATUS_REG_NAT_CONSUMPTION		((DWORD)0xC00002C9L)
#define STATUS_HEAP_CORRUPTION			((DWORD)0xC0000374L)
#define STATUS_STACK_BUFFER_OVERRUN		((DWORD)0xC0000409L)
#define STATUS_INVALID_CRUNTIME_PARAMETER	((DWORD)0xC0000417L)
#define STATUS_ASSERTION_FAILURE		((DWORD)0xC0000420L)
#define STATUS_SXS_EARLY_DEACTIVATION		((DWORD)0xC015000FL)
#define STATUS_SXS_INVALID_DEACTIVATION		((DWORD)0xC0150010L)


#define STILL_ACTIVE				STATUS_PENDING
#define EXCEPTION_ACCESS_VIOLATION		STATUS_ACCESS_VIOLATION
#define EXCEPTION_DATATYPE_MISALIGNMENT		STATUS_DATATYPE_MISALIGNMENT
#define EXCEPTION_BREAKPOINT			STATUS_BREAKPOINT
#define EXCEPTION_SINGLE_STEP			STATUS_SINGLE_STEP
#define EXCEPTION_ARRAY_BOUNDS_EXCEEDED		STATUS_ARRAY_BOUNDS_EXCEEDED
#define EXCEPTION_FLT_DENORMAL_OPERAND		STATUS_FLOAT_DENORMAL_OPERAND
#define EXCEPTION_FLT_DIVIDE_BY_ZERO		STATUS_FLOAT_DIVIDE_BY_ZERO
#define EXCEPTION_FLT_INEXACT_RESULT		STATUS_FLOAT_INEXACT_RESULT
#define EXCEPTION_FLT_INVALID_OPERATION		STATUS_FLOAT_INVALID_OPERATION
#define EXCEPTION_FLT_OVERFLOW			STATUS_FLOAT_OVERFLOW
#define EXCEPTION_FLT_STACK_CHECK		STATUS_FLOAT_STACK_CHECK
#define EXCEPTION_FLT_UNDERFLOW			STATUS_FLOAT_UNDERFLOW
#define EXCEPTION_INT_DIVIDE_BY_ZERO		STATUS_INTEGER_DIVIDE_BY_ZERO
#define EXCEPTION_INT_OVERFLOW			STATUS_INTEGER_OVERFLOW
#define EXCEPTION_PRIV_INSTRUCTION		STATUS_PRIVILEGED_INSTRUCTION
#define EXCEPTION_IN_PAGE_ERROR			STATUS_IN_PAGE_ERROR
#define EXCEPTION_ILLEGAL_INSTRUCTION		STATUS_ILLEGAL_INSTRUCTION
#define EXCEPTION_NONCONTINUABLE_EXCEPTION	STATUS_NONCONTINUABLE_EXCEPTION
#define EXCEPTION_STACK_OVERFLOW		STATUS_STACK_OVERFLOW
#define EXCEPTION_INVALID_DISPOSITION		STATUS_INVALID_DISPOSITION
#define EXCEPTION_GUARD_PAGE			STATUS_GUARD_PAGE_VIOLATION
#define EXCEPTION_INVALID_HANDLE		STATUS_INVALID_HANDLE
#define EXCEPTION_POSSIBLE_DEADLOCK		STATUS_POSSIBLE_DEADLOCK
#define CONTROL_C_EXIT				STATUS_CONTROL_C_EXIT


#define MAXIMUM_WAIT_OBJECTS			64
#define MAXIMUM_SUSPEND_COUNT			MAXCHAR
#define EXCEPTION_MAXIMUM_PARAMETERS		15


#define _MM_HINT_T0	1
#define _MM_HINT_T1	2
#define _MM_HINT_T2	3
#define _MM_HINT_NTA	0

#define PF_TEMPORAL_LEVEL_1		_MM_HINT_T0
#define PF_TEMPORAL_LEVEL_2		_MM_HINT_T1
#define PF_TEMPORAL_LEVEL_3		_MM_HINT_T2
#define PF_NON_TEMPORAL_LEVEL_ALL	_MM_HINT_NTA


#define EXCEPTION_NONCONTINUABLE	0x1
#define EXCEPTION_UNWINDING		0x2
#define EXCEPTION_EXIT_UNWIND		0x4
#define EXCEPTION_STACK_INVALID		0x8
#define EXCEPTION_NESTED_CALL		0x10
#define EXCEPTION_TARGET_UNWIND		0x20
#define EXCEPTION_COLLIDED_UNWIND	0x40

#define EXCEPTION_UNWIND	(EXCEPTION_UNWINDING | EXCEPTION_EXIT_UNWIND | EXCEPTION_TARGET_UNWIND | EXCEPTION_COLLIDED_UNWIND)

#define IS_UNWINDING(Flag)	((Flag & EXCEPTION_UNWIND) != 0)
#define IS_DISPATCHING(Flag)	((Flag & EXCEPTION_UNWIND) == 0)
#define IS_TARGET_UNWIND(Flag)	(Flag & EXCEPTION_TARGET_UNWIND)


#define CONTEXT_i386			0x00010000L
#define CONTEXT_i486			0x00010000L
#define WOW64_CONTEXT_i386		0x00010000L
#define WOW64_CONTEXT_i486		0x00010000L
#define CONTEXT_IA64			0x00080000L
#define CONTEXT_AMD64			0x00100000L
#define CONTEXT_ARM			0x00200000L


#define CONTEXT_SERVICE_ACTIVE		0x10000000L
#define CONTEXT_EXCEPTION_REQUEST	0x40000000L
#define CONTEXT_EXCEPTION_REPORTING	0x80000000L

#define WOW64_CONTEXT_CONTROL			(WOW64_CONTEXT_i386 | 0x00000001L)
#define WOW64_CONTEXT_INTEGER			(WOW64_CONTEXT_i386 | 0x00000002L)
#define WOW64_CONTEXT_SEGMENTS			(WOW64_CONTEXT_i386 | 0x00000004L)
#define WOW64_CONTEXT_FLOATING_POINT		(WOW64_CONTEXT_i386 | 0x00000008L)
#define WOW64_CONTEXT_DEBUG_REGISTERS		(WOW64_CONTEXT_i386 | 0x00000010L)
#define WOW64_CONTEXT_EXTENDED_REGISTERS	(WOW64_CONTEXT_i386 | 0x00000020L)

#define WOW64_CONTEXT_FULL	(WOW64_CONTEXT_CONTROL | WOW64_CONTEXT_INTEGER | WOW64_CONTEXT_SEGMENTS)
#define WOW64_CONTEXT_ALL	(WOW64_CONTEXT_CONTROL | WOW64_CONTEXT_INTEGER | WOW64_CONTEXT_SEGMENTS | WOW64_CONTEXT_FLOATING_POINT | WOW64_CONTEXT_DEBUG_REGISTERS | WOW64_CONTEXT_EXTENDED_REGISTERS)

#define WOW64_CONTEXT_XSTATE	(WOW64_CONTEXT_i386 | 0x00000040L)

#define WOW64_CONTEXT_EXCEPTION_ACTIVE		0x08000000
#define WOW64_CONTEXT_SERVICE_ACTIVE		0x10000000
#define WOW64_CONTEXT_EXCEPTION_REQUEST		0x40000000
#define WOW64_CONTEXT_EXCEPTION_REPORTING	0x80000000

#define       SIZE_OF_80387_REGISTERS	80
#define WOW64_SIZE_OF_80387_REGISTERS	80

#define       MAXIMUM_SUPPORTED_EXTENSION	512
#define WOW64_MAXIMUM_SUPPORTED_EXTENSION	512

#define ARM_MAX_BREAKPOINTS	8
#define ARM_MAX_WATCHPOINTS	1

typedef struct _M128A {
	ULONGLONG Low;
	LONGLONG High;
} M128A, *PM128A;

typedef struct _XSAVE_FORMAT32 {
	WORD   ControlWord;
	WORD   StatusWord;
	BYTE  TagWord;
	BYTE  Reserved1;
	WORD   ErrorOpcode;
	DWORD ErrorOffset;
	WORD   ErrorSelector;
	WORD   Reserved2;
	DWORD DataOffset;
	WORD   DataSelector;
	WORD   Reserved3;
	DWORD MxCsr;
	DWORD MxCsr_Mask;
	M128A FloatRegisters[8];
	M128A XmmRegisters[8];
	BYTE  Reserved4[224];
} XSAVE_FORMAT32, *PXSAVE_FORMAT32;

typedef struct _XSAVE_FORMAT64 {
	WORD   ControlWord;
	WORD   StatusWord;
	BYTE  TagWord;
	BYTE  Reserved1;
	WORD   ErrorOpcode;
	DWORD ErrorOffset;
	WORD   ErrorSelector;
	WORD   Reserved2;
	DWORD DataOffset;
	WORD   DataSelector;
	WORD   Reserved3;
	DWORD MxCsr;
	DWORD MxCsr_Mask;
	M128A FloatRegisters[8];
	M128A XmmRegisters[16];
	BYTE  Reserved4[96];
} XSAVE_FORMAT64, *PXSAVE_FORMAT64;

typedef XSAVE_FORMAT32 XMM_SAVE_AREA32, *PXMM_SAVE_AREA32;
typedef XSAVE_FORMAT64 XMM_SAVE_AREA64, *PXMM_SAVE_AREA64;

typedef struct _XSAVE_AREA_HEADER {
	DWORD64 Mask;
	DWORD64 Reserved[7];
} XSAVE_AREA_HEADER, *PXSAVE_AREA_HEADER;

typedef struct _XSAVE_AREA32 {
	XSAVE_FORMAT32 LegacyState;
	XSAVE_AREA_HEADER Header;
} XSAVE_AREA32, *PXSAVE_AREA32;

typedef struct _XSAVE_AREA64 {
	XSAVE_FORMAT64 LegacyState;
	XSAVE_AREA_HEADER Header;
} XSAVE_AREA64, *PXSAVE_AREA64;

typedef struct _XSTATE_CONTEXT32 {
	DWORD64 Mask;
	DWORD Length;
	DWORD Reserved1;
	PXSAVE_AREA64 Area;
	DWORD Reserved2;
	PVOID Buffer;
	DWORD Reserved3;
} XSTATE_CONTEXT32, *PXSTATE_CONTEXT32;

typedef struct _XSTATE_CONTEXT64 {
	DWORD64 Mask;
	DWORD Length;
	DWORD Reserved1;
	PXSAVE_AREA64 Area;
	PVOID Buffer;
} XSTATE_CONTEXT64, *PXSTATE_CONTEXT64;

typedef struct _SCOPE_TABLE {
	DWORD Count;
	struct {
		DWORD BeginAddress;
		DWORD EndAddress;
		DWORD HandlerAddress;
		DWORD JumpTarget;
	} ScopeRecord[1];
} SCOPE_TABLE, *PSCOPE_TABLE;

typedef SCOPE_TABLE SCOPE_TABLE_AMD64;
typedef PSCOPE_TABLE PSCOPE_TABLE_AMD64;

typedef SCOPE_TABLE SCOPE_TABLE_ARM;
typedef PSCOPE_TABLE PSCOPE_TABLE_ARM;

typedef struct _FLOATING_SAVE_AREA {
	DWORD   ControlWord;
	DWORD   StatusWord;
	DWORD   TagWord;
	DWORD   ErrorOffset;
	DWORD   ErrorSelector;
	DWORD   DataOffset;
	DWORD   DataSelector;
	BYTE    RegisterArea[SIZE_OF_80387_REGISTERS];
	DWORD   Spare0;
} FLOATING_SAVE_AREA, *PFLOATING_SAVE_AREA;

typedef struct _WOW64_FLOATING_SAVE_AREA {
	DWORD   ControlWord;
	DWORD   StatusWord;
	DWORD   TagWord;
	DWORD   ErrorOffset;
	DWORD   ErrorSelector;
	DWORD   DataOffset;
	DWORD   DataSelector;
	BYTE    RegisterArea[WOW64_SIZE_OF_80387_REGISTERS];
	DWORD   Cr0NpxState;
} WOW64_FLOATING_SAVE_AREA, *PWOW64_FLOATING_SAVE_AREA;


typedef struct _CONTEXT_TYPE_i386 {
	DWORD ContextFlags;

	DWORD   Dr0;
	DWORD   Dr1;
	DWORD   Dr2;
	DWORD   Dr3;
	DWORD   Dr6;
	DWORD   Dr7;

	FLOATING_SAVE_AREA FloatSave;

	DWORD   SegGs;
	DWORD   SegFs;
	DWORD   SegEs;
	DWORD   SegDs;

	DWORD   Edi;
	DWORD   Esi;
	DWORD   Ebx;
	DWORD   Edx;
	DWORD   Ecx;
	DWORD   Eax;

	DWORD   Ebp;
	DWORD   Eip;
	DWORD   SegCs;
	DWORD   EFlags;
	DWORD   Esp;
	DWORD   SegSs;

	BYTE    ExtendedRegisters[MAXIMUM_SUPPORTED_EXTENSION];

} CONTEXT_TYPE_i386, *PCONTEXT_TYPE_i386;

typedef struct _WOW64_CONTEXT_TYPE {
	DWORD ContextFlags;

	DWORD   Dr0;
	DWORD   Dr1;
	DWORD   Dr2;
	DWORD   Dr3;
	DWORD   Dr6;
	DWORD   Dr7;

	WOW64_FLOATING_SAVE_AREA FloatSave;

	DWORD   SegGs;
	DWORD   SegFs;
	DWORD   SegEs;
	DWORD   SegDs;

	DWORD   Edi;
	DWORD   Esi;
	DWORD   Ebx;
	DWORD   Edx;
	DWORD   Ecx;
	DWORD   Eax;

	DWORD   Ebp;
	DWORD   Eip;
	DWORD   SegCs;
	DWORD   EFlags;
	DWORD   Esp;
	DWORD   SegSs;

	BYTE    ExtendedRegisters[WOW64_MAXIMUM_SUPPORTED_EXTENSION];

} WOW64_CONTEXT_TYPE, *PWOW64_CONTEXT_TYPE;

typedef WOW64_CONTEXT_TYPE CONTEXT_TYPE_WOW64;

typedef struct _CONTEXT_TYPE_IA64 {
	DWORD ContextFlags;
	DWORD Fill1[3];

	ULONGLONG DbI0;
	ULONGLONG DbI1;
	ULONGLONG DbI2;
	ULONGLONG DbI3;
	ULONGLONG DbI4;
	ULONGLONG DbI5;
	ULONGLONG DbI6;
	ULONGLONG DbI7;

	ULONGLONG DbD0;
	ULONGLONG DbD1;
	ULONGLONG DbD2;
	ULONGLONG DbD3;
	ULONGLONG DbD4;
	ULONGLONG DbD5;
	ULONGLONG DbD6;
	ULONGLONG DbD7;

	FLOAT128 FltS0;
	FLOAT128 FltS1;
	FLOAT128 FltS2;
	FLOAT128 FltS3;
	FLOAT128 FltT0;
	FLOAT128 FltT1;
	FLOAT128 FltT2;
	FLOAT128 FltT3;
	FLOAT128 FltT4;
	FLOAT128 FltT5;
	FLOAT128 FltT6;
	FLOAT128 FltT7;
	FLOAT128 FltT8;
	FLOAT128 FltT9;

	FLOAT128 FltS4;
	FLOAT128 FltS5;
	FLOAT128 FltS6;
	FLOAT128 FltS7;
	FLOAT128 FltS8;
	FLOAT128 FltS9;
	FLOAT128 FltS10;
	FLOAT128 FltS11;
	FLOAT128 FltS12;
	FLOAT128 FltS13;
	FLOAT128 FltS14;
	FLOAT128 FltS15;
	FLOAT128 FltS16;
	FLOAT128 FltS17;
	FLOAT128 FltS18;
	FLOAT128 FltS19;

	FLOAT128 FltF32;
	FLOAT128 FltF33;
	FLOAT128 FltF34;
	FLOAT128 FltF35;
	FLOAT128 FltF36;
	FLOAT128 FltF37;
	FLOAT128 FltF38;
	FLOAT128 FltF39;

	FLOAT128 FltF40;
	FLOAT128 FltF41;
	FLOAT128 FltF42;
	FLOAT128 FltF43;
	FLOAT128 FltF44;
	FLOAT128 FltF45;
	FLOAT128 FltF46;
	FLOAT128 FltF47;
	FLOAT128 FltF48;
	FLOAT128 FltF49;

	FLOAT128 FltF50;
	FLOAT128 FltF51;
	FLOAT128 FltF52;
	FLOAT128 FltF53;
	FLOAT128 FltF54;
	FLOAT128 FltF55;
	FLOAT128 FltF56;
	FLOAT128 FltF57;
	FLOAT128 FltF58;
	FLOAT128 FltF59;

	FLOAT128 FltF60;
	FLOAT128 FltF61;
	FLOAT128 FltF62;
	FLOAT128 FltF63;
	FLOAT128 FltF64;
	FLOAT128 FltF65;
	FLOAT128 FltF66;
	FLOAT128 FltF67;
	FLOAT128 FltF68;
	FLOAT128 FltF69;

	FLOAT128 FltF70;
	FLOAT128 FltF71;
	FLOAT128 FltF72;
	FLOAT128 FltF73;
	FLOAT128 FltF74;
	FLOAT128 FltF75;
	FLOAT128 FltF76;
	FLOAT128 FltF77;
	FLOAT128 FltF78;
	FLOAT128 FltF79;

	FLOAT128 FltF80;
	FLOAT128 FltF81;
	FLOAT128 FltF82;
	FLOAT128 FltF83;
	FLOAT128 FltF84;
	FLOAT128 FltF85;
	FLOAT128 FltF86;
	FLOAT128 FltF87;
	FLOAT128 FltF88;
	FLOAT128 FltF89;

	FLOAT128 FltF90;
	FLOAT128 FltF91;
	FLOAT128 FltF92;
	FLOAT128 FltF93;
	FLOAT128 FltF94;
	FLOAT128 FltF95;
	FLOAT128 FltF96;
	FLOAT128 FltF97;
	FLOAT128 FltF98;
	FLOAT128 FltF99;

	FLOAT128 FltF100;
	FLOAT128 FltF101;
	FLOAT128 FltF102;
	FLOAT128 FltF103;
	FLOAT128 FltF104;
	FLOAT128 FltF105;
	FLOAT128 FltF106;
	FLOAT128 FltF107;
	FLOAT128 FltF108;
	FLOAT128 FltF109;

	FLOAT128 FltF110;
	FLOAT128 FltF111;
	FLOAT128 FltF112;
	FLOAT128 FltF113;
	FLOAT128 FltF114;
	FLOAT128 FltF115;
	FLOAT128 FltF116;
	FLOAT128 FltF117;
	FLOAT128 FltF118;
	FLOAT128 FltF119;

	FLOAT128 FltF120;
	FLOAT128 FltF121;
	FLOAT128 FltF122;
	FLOAT128 FltF123;
	FLOAT128 FltF124;
	FLOAT128 FltF125;
	FLOAT128 FltF126;
	FLOAT128 FltF127;

	ULONGLONG StFPSR;

	ULONGLONG IntGp;
	ULONGLONG IntT0;
	ULONGLONG IntT1;
	ULONGLONG IntS0;
	ULONGLONG IntS1;
	ULONGLONG IntS2;
	ULONGLONG IntS3;
	ULONGLONG IntV0;
	ULONGLONG IntT2;
	ULONGLONG IntT3;
	ULONGLONG IntT4;
	ULONGLONG IntSp;
	ULONGLONG IntTeb;
	ULONGLONG IntT5;
	ULONGLONG IntT6;
	ULONGLONG IntT7;
	ULONGLONG IntT8;
	ULONGLONG IntT9;
	ULONGLONG IntT10;
	ULONGLONG IntT11;
	ULONGLONG IntT12;
	ULONGLONG IntT13;
	ULONGLONG IntT14;
	ULONGLONG IntT15;
	ULONGLONG IntT16;
	ULONGLONG IntT17;
	ULONGLONG IntT18;
	ULONGLONG IntT19;
	ULONGLONG IntT20;
	ULONGLONG IntT21;
	ULONGLONG IntT22;

	ULONGLONG IntNats;

	ULONGLONG Preds;

	ULONGLONG BrRp;
	ULONGLONG BrS0;
	ULONGLONG BrS1;
	ULONGLONG BrS2;
	ULONGLONG BrS3;
	ULONGLONG BrS4;
	ULONGLONG BrT0;
	ULONGLONG BrT1;

	ULONGLONG ApUNAT;
	ULONGLONG ApLC;
	ULONGLONG ApEC;
	ULONGLONG ApCCV;
	ULONGLONG ApDCR;

	ULONGLONG RsPFS;
	ULONGLONG RsBSP;
	ULONGLONG RsBSPSTORE;
	ULONGLONG RsRSC;
	ULONGLONG RsRNAT;

	ULONGLONG StIPSR;
	ULONGLONG StIIP;
	ULONGLONG StIFS;

	ULONGLONG StFCR;
	ULONGLONG Eflag;
	ULONGLONG SegCSD;
	ULONGLONG SegSSD;
	ULONGLONG Cflag;
	ULONGLONG StFSR;
	ULONGLONG StFIR;
	ULONGLONG StFDR;

	ULONGLONG UNUSEDPACK;

} CONTEXT_TYPE_IA64, *PCONTEXT_TYPE_IA64;


typedef struct _CONTEXT_TYPE_AMD64 {

	DWORD64 P1Home;
	DWORD64 P2Home;
	DWORD64 P3Home;
	DWORD64 P4Home;
	DWORD64 P5Home;
	DWORD64 P6Home;

	DWORD ContextFlags;
	DWORD MxCsr;

	WORD   SegCs;
	WORD   SegDs;
	WORD   SegEs;
	WORD   SegFs;
	WORD   SegGs;
	WORD   SegSs;
	DWORD EFlags;

	DWORD64 Dr0;
	DWORD64 Dr1;
	DWORD64 Dr2;
	DWORD64 Dr3;
	DWORD64 Dr6;
	DWORD64 Dr7;

	DWORD64 Rax;
	DWORD64 Rcx;
	DWORD64 Rdx;
	DWORD64 Rbx;
	DWORD64 Rsp;
	DWORD64 Rbp;
	DWORD64 Rsi;
	DWORD64 Rdi;
	DWORD64 R8;
	DWORD64 R9;
	DWORD64 R10;
	DWORD64 R11;
	DWORD64 R12;
	DWORD64 R13;
	DWORD64 R14;
	DWORD64 R15;

	DWORD64 Rip;

	union {
		XMM_SAVE_AREA32 FltSave;
		struct {
			M128A Header[2];
			M128A Legacy[8];
			M128A Xmm0;
			M128A Xmm1;
			M128A Xmm2;
			M128A Xmm3;
			M128A Xmm4;
			M128A Xmm5;
			M128A Xmm6;
			M128A Xmm7;
			M128A Xmm8;
			M128A Xmm9;
			M128A Xmm10;
			M128A Xmm11;
			M128A Xmm12;
			M128A Xmm13;
			M128A Xmm14;
			M128A Xmm15;
		};
	};

	M128A VectorRegister[26];
	DWORD64 VectorControl;

	DWORD64 DebugControl;
	DWORD64 LastBranchToRip;
	DWORD64 LastBranchFromRip;
	DWORD64 LastExceptionToRip;
	DWORD64 LastExceptionFromRip;
} CONTEXT_TYPE_AMD64, *PCONTEXT_TYPE_AMD64;


typedef struct _NEON128 {
	ULONGLONG Low;
	LONGLONG High;
} NEON128, *PNEON128;

typedef struct _CONTEXT_TYPE_ARM {
	DWORD ContextFlags;

	DWORD R0;
	DWORD R1;
	DWORD R2;
	DWORD R3;
	DWORD R4;
	DWORD R5;
	DWORD R6;
	DWORD R7;
	DWORD R8;
	DWORD R9;
	DWORD R10;
	DWORD R11;
	DWORD R12;

	DWORD Sp;
	DWORD Lr;
	DWORD Pc;
	DWORD Cpsr;

	DWORD Fpscr;
	DWORD Padding;
	union {
		NEON128 Q[16];
		ULONGLONG D[32];
		DWORD S[32];
	};

	DWORD Bvr[ARM_MAX_BREAKPOINTS];
	DWORD Bcr[ARM_MAX_BREAKPOINTS];
	DWORD Wvr[ARM_MAX_WATCHPOINTS];
	DWORD Wcr[ARM_MAX_WATCHPOINTS];

	DWORD Padding2[2];

} CONTEXT_TYPE_ARM, *PCONTEXT_TYPE_ARM;


typedef struct _EXCEPTION_RECORD32 {
	DWORD ExceptionCode;
	DWORD ExceptionFlags;
	DWORD ExceptionRecord;
	DWORD ExceptionAddress;
	DWORD NumberParameters;
	DWORD ExceptionInformation[EXCEPTION_MAXIMUM_PARAMETERS];
} EXCEPTION_RECORD32, *PEXCEPTION_RECORD32;

typedef struct _EXCEPTION_RECORD64 {
	DWORD ExceptionCode;
	DWORD ExceptionFlags;
	DWORD64 ExceptionRecord;
	DWORD64 ExceptionAddress;
	DWORD NumberParameters;
	DWORD __unusedAlignment;
	DWORD64 ExceptionInformation[EXCEPTION_MAXIMUM_PARAMETERS];
} EXCEPTION_RECORD64, *PEXCEPTION_RECORD64;

typedef struct _EXCEPTION_POINTERS_i386 {
	PEXCEPTION_RECORD32 ExceptionRecord;
	PCONTEXT_TYPE_i386 ContextRecord;
} EXCEPTION_POINTERS_i386, *PEXCEPTION_POINTERS_i386;

typedef struct _EXCEPTION_POINTERS_ARM {
	PEXCEPTION_RECORD32 ExceptionRecord;
	PCONTEXT_TYPE_ARM ContextRecord;
} EXCEPTION_POINTERS_ARM, *PEXCEPTION_POINTERS_ARM;

typedef struct _EXCEPTION_POINTERS_IA64 {
	PEXCEPTION_RECORD64 ExceptionRecord;
	PCONTEXT_TYPE_IA64 ContextRecord;
} EXCEPTION_POINTERS_IA64, *PEXCEPTION_POINTERS_IA64;

typedef struct _EXCEPTION_POINTERS_AMD64 {
	PEXCEPTION_RECORD64 ExceptionRecord;
	PCONTEXT_TYPE_AMD64 ContextRecord;
} EXCEPTION_POINTERS_AMD64, *PEXCEPTION_POINTERS_AMD64;

#endif /* _MINWINBASE_ */
#endif /* _WINNT_ */

#endif /* WINDOWS_EXCEPTION_H */
