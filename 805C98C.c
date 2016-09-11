signed int __fastcall sub_805C98C(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  int v4; // r4@1
  int v6; // [sp+0h] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  memcpy(&v6, &gUnknown_08375240, 4);
  v4 = *((_BYTE *)&v6 + (Random() & 3));
  FieldObjectSetDirection(v2, v4);
  *(_WORD *)(v3 + 48) = 5;
  if ( sub_805FF20(v2, v4) << 24 )
    *(_WORD *)(v3 + 48) = 1;
  return 1;
}
