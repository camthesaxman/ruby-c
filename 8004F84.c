signed int __fastcall StringCompareWithoutExtCtrlCodes(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  signed int v4; // r6@1
  _BYTE *v5; // r4@7
  _BYTE *v6; // r0@7
  _BYTE *v7; // r5@7
  unsigned int v8; // r1@7
  unsigned int v9; // r0@7

  v2 = a1;
  v3 = a2;
  v4 = 0;
  while ( 1 )
  {
    v5 = (_BYTE *)SkipExtCtrlCode(v2);
    v6 = (_BYTE *)SkipExtCtrlCode(v3);
    v7 = v6;
    v8 = *v5;
    v9 = *v6;
    if ( v8 > v9 )
      break;
    if ( v8 < v9 )
    {
      v4 = -1;
      if ( v9 == 255 )
        v4 = 1;
    }
    if ( *v5 == 255 )
      return v4;
    v2 = (int)(v5 + 1);
    v3 = (int)(v7 + 1);
  }
  v4 = 1;
  if ( v8 == 255 )
    v4 = -1;
  return v4;
}
