int __fastcall FindInvisibleMapObjectByPosition(int a1, unsigned __int16 a2, unsigned __int16 a3, unsigned __int8 a4)
{
  int v4; // r7@1
  int v5; // r6@1
  int v6; // r5@1
  int v7; // r0@1
  int v8; // r4@1
  unsigned int v9; // r3@1
  unsigned int v10; // r2@1
  int v11; // r1@2
  int result; // r0@6

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = *(_DWORD *)(a1 + 4);
  v8 = *(_DWORD *)(v7 + 16);
  v9 = *(_BYTE *)(v7 + 3);
  v10 = 0;
  if ( v9 <= 0 )
  {
_08068E92:
    result = 0;
  }
  else
  {
    while ( 1 )
    {
      v11 = 12 * v10 + v8;
      if ( *(_WORD *)v11 == v4 && *(_WORD *)(v11 + 2) == v5 && (*(_BYTE *)(v11 + 4) == v6 || !*(_BYTE *)(v11 + 4)) )
        break;
      v10 = (v10 + 1) & 0xFF;
      if ( v10 >= v9 )
        goto _08068E92;
    }
    result = 12 * v10 + v8;
  }
  return result;
}
