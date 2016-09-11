signed int __fastcall sub_805C9D8(int a1, int a2)
{
  _BYTE *v2; // r4@1
  int v3; // r5@1
  unsigned __int8 v4; // r0@1

  v2 = (_BYTE *)a1;
  v3 = a2;
  v4 = GetGoSpeed0AnimId((unsigned int)*(_BYTE *)(a1 + 24) >> 4);
  FieldObjectSetRegularAnim(v2, v3, v4);
  *v2 |= 2u;
  *(_WORD *)(v3 + 48) = 6;
  return 1;
}
