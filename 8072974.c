int __fastcall DisplayYesNoMenu(unsigned __int8 a1, unsigned __int8 a2, int a3)
{
  int v3; // r8@1
  int v4; // r6@1
  int v5; // r5@1
  char v6; // r0@1
  int v8; // [sp+10h] [bp-4h]@0

  v3 = a3;
  v4 = a1;
  v5 = a2;
  MenuDrawTextWindow(a1, a2);
  InitYesNoMenu(v4, v5);
  v6 = 0;
  if ( v3 )
    v6 = -1;
  byte_30006B7 = v6;
  return v8;
}
