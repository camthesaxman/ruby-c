_BYTE *__fastcall unref_sub_8095C60(_BYTE *a1, _BYTE *a2, unsigned __int16 a3)
{
  _BYTE *v3; // r5@1
  int v4; // r4@1
  _BYTE *v5; // r1@1
  unsigned int i; // r5@1

  v3 = a1;
  v4 = a3;
  v5 = StringCopy(a1, a2);
  for ( i = (unsigned int)&v3[v4]; (unsigned int)v5 < i; ++v5 )
    *v5 = 0;
  *v5 = -1;
  return v5;
}
