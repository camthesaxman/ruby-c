signed int __fastcall sub_805F3F0(int a1, int a2, unsigned __int8 a3)
{
  _BYTE *v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1
  unsigned __int8 v6; // r0@1

  v3 = (_BYTE *)a1;
  v4 = a2;
  v5 = state_to_direction(gUnknown_0836DC09[*(_BYTE *)(a1 + 6)], *(_BYTE *)(a1 + 33), a3);
  v6 = GetFaceDirectionAnimId(v5);
  FieldObjectSetRegularAnim(v3, v4, v6);
  *v3 |= 2u;
  *(_WORD *)(v4 + 48) = 2;
  return 1;
}
