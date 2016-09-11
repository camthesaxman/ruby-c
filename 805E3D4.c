signed int __fastcall sub_805E3D4(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r1@1

  v2 = a1;
  v3 = a2;
  v4 = gUnknown_0836DC09[*(_BYTE *)(a1 + 6)];
  if ( *(_BYTE *)(a1 + 33) )
    v4 = GetOppositeDirection(v4) & 0xFF;
  FieldObjectSetDirection(v2, v4);
  *(_WORD *)(v3 + 48) = 2;
  return 1;
}
