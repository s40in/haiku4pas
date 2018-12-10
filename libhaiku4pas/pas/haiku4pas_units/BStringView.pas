unit BStringView;


interface

uses HaikuObj, ctypes;




function BStringView_Create_1(RectFrame: TCppObject; name, text: PChar): TCppObject; cdecl; external CppLibName name 'BStringView_Create_1';
function BStringView_Create_2(RectFrame: TCppObject; name, text: PChar; flags: cuint32): TCppObject; cdecl; external CppLibName name 'BStringView_Create_2';

procedure BStringView_Free(stringview:TCppObject); cdecl; external CppLibName name 'BStringView_Free';
procedure BStringView_Show(stringview:TCppObject); cdecl; external CppLibName name 'BStringView_Show';

procedure BStringView_SetText(stringview:TCppObject; text:PChar); cdecl; external CppLibName name 'BStringView_SetText';
function BStringView_Text(): PChar; cdecl; external CppLibName name 'BStringView_Text';


implementation

//

end.
