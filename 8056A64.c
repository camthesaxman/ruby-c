_BYTE *__fastcall sub_8056A64(unsigned __int8 a1, int a2, int a3)
{
  int v3; // r9@1
  int v4; // r8@1
  int v5; // r6@1
  int v6; // r7@1
  _BYTE *v7; // r4@1
  int v8; // r5@1
  _BYTE *result; // r0@4

  v3 = a2;
  v4 = a3;
  v5 = a1;
  v6 = *v202E834;
  v7 = *(_BYTE **)(v202E834 + 4);
  v8 = 0;
  if ( *v202E834 <= 0 )
  {
_08056AAC:
    result = 0;
  }
  else
  {
    while ( *v7 != v5 || (sub_8056ABC(v5, v3, v4, v7) & 0xFF) != 1 )
    {
      ++v8;
      v7 += 12;
      if ( v8 >= v6 )
        goto _08056AAC;
    }
    result = v7;
  }
  return result;
}
