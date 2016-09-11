signed int sub_80FADE4()
{
  int v0; // r2@1
  _WORD *v1; // r3@1
  int v2; // r2@1
  __int16 v3; // r0@1
  signed int v4; // r0@2
  int v5; // r3@4
  signed int v6; // r0@4
  int v7; // r1@6
  _WORD *v8; // r0@6
  unsigned __int16 v9; // r0@8
  int v10; // r4@8
  char v11; // r0@8
  int v12; // r0@8
  int v13; // r2@11
  signed int result; // r0@11

  v0 = v20388CC;
  v1 = (_WORD *)(v20388CC + 94);
  *v1 = *(_WORD *)(v20388CC + 104) + *(_WORD *)(v20388CC + 94);
  *(_WORD *)(v0 + 92) += *(_WORD *)(v0 + 106);
  sub_80FB238(*(_WORD *)(v0 + 92), *v1);
  v2 = v20388CC;
  v3 = *(_WORD *)(v20388CC + 108) + 1;
  *(_WORD *)(v20388CC + 108) = v3;
  if ( v3 == 8 )
  {
    v4 = *(_WORD *)(v2 + 92) + 44;
    if ( v4 < 0 )
      v4 = *(_WORD *)(v2 + 92) + 51;
    v5 = ((v4 >> 3) + 1) & 0xFFFF;
    v6 = *(_WORD *)(v2 + 94) + 52;
    if ( v6 < 0 )
      v6 = *(_WORD *)(v2 + 94) + 59;
    v7 = ((v6 >> 3) + 2) & 0xFFFF;
    v8 = (_WORD *)(v2 + 102);
    if ( v5 != *(_WORD *)(v2 + 100) || v7 != *v8 )
    {
      *(_WORD *)(v2 + 100) = v5;
      *v8 = v7;
      v9 = sub_80FB2EC(v5, v7);
      v10 = v9;
      v11 = sub_80FB758(v9);
      *(_BYTE *)(v20388CC + 22) = v11;
      v12 = v20388CC;
      if ( v10 != *(_WORD *)(v20388CC + 20) )
      {
        *(_WORD *)(v20388CC + 20) = v10;
        v12 = sub_80FBFB4(v12, *(_WORD *)(v12 + 20), 16);
      }
      sub_80FBA18(v12);
    }
    v13 = v20388CC;
    *(_WORD *)(v20388CC + 108) = 0;
    *(_DWORD *)(v13 + 24) = sub_80FAD04;
    result = 3;
  }
  else
  {
    result = 2;
  }
  return result;
}
