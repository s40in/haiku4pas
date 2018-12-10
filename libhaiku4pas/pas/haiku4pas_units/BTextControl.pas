unit BTextControl;


interface

uses HaikuObj, ctypes;



function BTextControl_Create_1(tlabel, initialText: PChar; message: TCppObject): TCppObject; cdecl; external CppLibName name 'BTextControl_Create_1';
function BTextControl_Create_2(name, tlabel, initialText: PChar; message: TCppObject): TCppObject; cdecl; external CppLibName name 'BTextControl_Create_2';
function BTextControl_Create_3(name, tlabel, initialText: PChar; message: TCppObject; flags: uint32): TCppObject; cdecl; external CppLibName name 'BTextControl_Create_3';
function BTextControl_Create_4(RectFrame: TCppObject; name, tlabel, initialText: PChar; message: TCppObject): TCppObject; cdecl; external CppLibName name 'BTextControl_Create_4';
function BTextControl_Create_5(RectFrame: TCppObject; name, tlabel, initialText: PChar; message: TCppObject; resizeMask, flags: uint32): TCppObject; cdecl; external CppLibName name 'BTextControl_Create_5';

procedure BTextControl_Free(textcontrol:TCppObject); cdecl; external CppLibName name 'BTextControl_Free';
procedure BTextControl_SetText(textcontrol:TCppObject; text:PChar); cdecl; external CppLibName name 'BTextControl_SetText';
procedure BTextControl_SetEnabled(textcontrol:TCppObject; enable: cbool); cdecl; external CppLibName name 'BTextControl_SetEnabled';
procedure BTextControl_SetFlags(textcontrol:TCppObject; flags: cuint32); cdecl; external CppLibName name 'BTextControl_SetEnabled';

function BTextControl_Text(textcontrol: TCppObject): PChar; cdecl; external CppLibName name 'BTextControl_Text';
function BTextControl_TextView(textcontrol: TCppObject): TCppObject; cdecl; external CppLibName name 'BTextControl_TextView';

implementation

//

end.
