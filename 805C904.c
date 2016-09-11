signed int __fastcall sub_805C904(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  unsigned __int8 v4; // r0@1

  v2 = a1;
  v3 = a2;
  v4 = GetFaceDirectionAnimId(*(_BYTE *)(a1 + 24) & 0xF);
  FieldObjectSetRegularAnim(v2, v3, v4);
  *(_WORD *)(v3 + 48) = 2;
  return 1;
}
