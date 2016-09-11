signed int __fastcall sub_805D18C(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  int v4; // r4@1
  int v6; // [sp+0h] [bp-18h]@1

  v2 = a1;
  v3 = a2;
  memcpy(&v6, &gUnknown_083752C0, 2);
  v4 = *((_BYTE *)&v6 + (Random() & 1));
  FieldObjectSetDirection(v2, v4);
  *(_WORD *)(v3 + 48) = 5;
  if ( sub_805FF20(v2, v4) << 24 )
    *(_WORD *)(v3 + 48) = 1;
  return 1;
}
