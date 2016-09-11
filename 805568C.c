void *__fastcall sub_805568C(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  void *result; // r0@3
  unsigned int v4; // r1@4
  unsigned int v5; // r0@4
  int v6; // [sp+0h] [bp-10h]@4
  unsigned int v7; // [sp+4h] [bp-Ch]@4

  v1 = a1;
  v2 = *(_BYTE *)(a1 + 2);
  if ( v2 && v2 != 2 )
  {
    result = 0;
  }
  else
  {
    v4 = *(_DWORD *)(v1 + 8);
    v6 = *(_DWORD *)(v1 + 4);
    v7 = v4;
    v6 = v6 & 0xFFFF0000 | (gUnknown_0821664C[2 * *(_BYTE *)(v1 + 3)] + (unsigned __int16)v6) & 0xFFFF;
    v6 = (unsigned __int16)v6 | ((gUnknown_0821664C[2 * *(_BYTE *)(v1 + 3) + 1] + (v6 >> 16)) << 16);
    v7 = v4 & 0xFFFFFF00;
    v5 = sub_8055B9C((signed __int16)v6, v6 >> 16) << 24;
    if ( v5 >> 24 == 4 )
    {
      result = (void *)sub_80682A8(&v6, *(_BYTE *)(v1 + 12), *(_BYTE *)(v1 + 3));
    }
    else if ( *(_BYTE *)(v1 + 1) && (unsigned __int8)byte_3000580[v5 >> 24] == 128 )
    {
      if ( sub_8083BF4(v5 >> 24) )
        result = &gUnknown_081A4487;
      else
        result = &gUnknown_081A4479;
    }
    else
    {
      result = &gUnknown_081A4495;
    }
  }
  return result;
}
