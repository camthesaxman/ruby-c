_BYTE *__fastcall sub_80BC190(_BYTE *a1, unsigned __int8 a2)
{
  _BYTE *v2; // r5@1
  int v3; // r4@1
  unsigned __int8 v4; // r0@1

  v2 = a1;
  v3 = 160 * a2 + 33714494;
  v4 = sub_80BB8A8(v3);
  *(_BYTE *)StringCopyN((int)v2, v3, v4) = -1;
  return StringAppend(v2, &gUnknown_0840F965);
}
