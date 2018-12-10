unit BButton;


interface

uses HaikuObj, ctypes;



function BButton_Create_1(blabel: PChar; message: TCppObject): TCppObject; cdecl; external CppLibName name 'BButton_Create_1';
function BButton_Create_2(name, blabel: PChar; message: TCppObject): TCppObject; cdecl; external CppLibName name 'BButton_Create_2';
function BButton_Create_3(name, blabel: PChar; message: TCppObject; flags: cuint32): TCppObject; cdecl; external CppLibName name 'BButton_Create_3';
function BButton_Create_4(RectFrame: TCppObject; name, blabel: PChar; message: TCppObject): TCppObject; cdecl; external CppLibName name 'BButton_Create_4';
function BButton_Create_5(RectFrame: TCppObject; name, blabel: PChar; message: TCppObject; resizingMode, flags: cuint32): TCppObject; cdecl; external CppLibName name 'BButton_Create_5';

procedure BButton_Free(button:TCppObject); cdecl; external CppLibName name 'BButton_Free';


implementation

//

end.
