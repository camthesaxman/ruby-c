signed int swiopen()
{
  signed int result; // r0@2
  unsigned __int16 v1; // r0@11
  int v2; // r4@11
  char v3; // r0@11
  int v4; // r0@11

  if ( *(_BYTE *)(v20388CC + 122) )
  {
    result = 2;
  }
  else
  {
    if ( (signed int)*(_BYTE *)(v20388CC + 123) > 0 )
      ++*(_WORD *)(v20388CC + 84);
    if ( (signed int)*(_BYTE *)(v20388CC + 123) < 0 )
      --*(_WORD *)(v20388CC + 84);
    if ( (signed int)*(_BYTE *)(v20388CC + 124) > 0 )
      ++*(_WORD *)(v20388CC + 86);
    if ( (signed int)*(_BYTE *)(v20388CC + 124) < 0 )
      --*(_WORD *)(v20388CC + 86);
    v1 = sub_80FB2EC(*(_WORD *)(v20388CC + 84), *(_WORD *)(v20388CC + 86));
    v2 = v1;
    v3 = sub_80FB758(v1);
    *(_BYTE *)(v20388CC + 22) = v3;
    v4 = v20388CC;
    if ( v2 != *(_WORD *)(v20388CC + 20) )
    {
      *(_WORD *)(v20388CC + 20) = v2;
      v4 = sub_80FBFB4(v4, *(_WORD *)(v4 + 20), 16);
    }
    sub_80FBA18(v4);
    *(_DWORD *)(v20388CC + 24) = sub_80FAB78;
    result = 3;
  }
  return result;
}
