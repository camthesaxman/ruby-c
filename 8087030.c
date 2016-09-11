int __fastcall sub_8087030(int a1, _BYTE *a2)
{
  int v2; // r5@1
  _BYTE *v3; // r4@1
  char v4; // r0@1

  v2 = a1;
  v3 = a2;
  v4 = GetSimpleGoAnimId(2u);
  FieldObjectSetSpecialAnim(v3, v4);
  ++*(_WORD *)(v2 + 8);
  return 0;
}
