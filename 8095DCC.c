signed int __fastcall sub_8095DCC(int a1, char a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v4; // r8@1
  signed int v5; // r7@1
  signed int v6; // r2@3
  signed int v7; // r2@6
  signed int v8; // r0@6
  signed int v9; // r1@6
  signed int v10; // r6@6
  signed int v11; // r4@8
  signed int v13; // r2@14
  signed int v14; // r0@14
  signed int v15; // r1@14
  signed int v16; // r6@14
  signed int v17; // r5@16
  unsigned int *v18; // r4@16
  _BYTE *v19; // r2@16

  v4 = a1;
  v5 = a3;
  if ( a4 && a4 != 2 )
    v6 = 0xFFFF;
  else
    v6 = 1;
  if ( ((a4 - 2) & 0xFFu) <= 1 )
  {
    v7 = v6 << 16;
    v8 = ((v7 >> 16) + a2) << 16;
    v9 = (signed __int16)(HIWORD(v7) + a2);
    v10 = v7;
    if ( v9 >= 0 && v9 <= v5 )
    {
      while ( 1 )
      {
        v11 = v8 >> 16;
        if ( GetBoxMonData((unsigned int *)(80 * (v8 >> 16) + v4), 11, (_BYTE *)v7) )
          break;
        v8 = (v11 + (v10 >> 16)) << 16;
        v7 = (signed __int16)(v11 + HIWORD(v10));
        if ( v7 < 0 || v7 > v5 )
          return -1;
      }
      return v11;
    }
    return -1;
  }
  v13 = v6 << 16;
  v14 = ((v13 >> 16) + a2) << 16;
  v15 = (signed __int16)(HIWORD(v13) + a2);
  v16 = v13;
  if ( v15 < 0 || v15 > v5 )
    return -1;
  while ( 1 )
  {
    v17 = v14 >> 16;
    v18 = (unsigned int *)(v4 + 80 * (v14 >> 16));
    if ( GetBoxMonData(v18, 11, (_BYTE *)v13) )
    {
      if ( !GetBoxMonData(v18, 45, v19) )
        break;
    }
    v14 = (v17 + (v16 >> 16)) << 16;
    v13 = (signed __int16)(v17 + HIWORD(v16));
    if ( v13 < 0 || v13 > v5 )
      return -1;
  }
  return v17;
}
