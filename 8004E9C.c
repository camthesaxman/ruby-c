int __fastcall ConvertInternationalString(int a1, char a2)
{
  int v2; // r4@1
  unsigned __int8 v3; // r0@2
  int v4; // r3@2
  int v5; // r2@2
  unsigned int i; // r0@2
  int v8; // [sp+4h] [bp-4h]@0

  v2 = a1;
  if ( a2 == 1 )
  {
    SkipExtCtrlCodes();
    v3 = StringLength(v2);
    v4 = (v3 + 1) & 0xFF;
    *(_BYTE *)(v2 + v3) = -4;
    v5 = (v4 + 1) & 0xFF;
    *(_BYTE *)(v2 + v4) = 22;
    *(_BYTE *)(v2 + v5) = -1;
    for ( i = ((v5 + 1) << 24) - 0x1000000; i >> 24 != 255; i = ((i >> 24) - 1) << 24 )
      *(_BYTE *)((i >> 24) + v2 + 2) = *(_BYTE *)((i >> 24) + v2);
    *(_BYTE *)v2 = -4;
    *(_BYTE *)(v2 + 1) = 21;
  }
  return v8;
}
