signed int __fastcall sub_805D5EC(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  char v4; // r1@1
  signed int result; // r0@3
  int v6; // [sp+0h] [bp-10h]@1

  v2 = a1;
  v3 = a2;
  memcpy(&v6, &gUnknown_083752A0, 2);
  v4 = sub_805CD60(v2, 1u);
  if ( !v4 )
    v4 = *((_BYTE *)&v6 + (Random() & 1));
  FieldObjectSetDirection(v2, v4);
  result = 1;
  *(_WORD *)(v3 + 48) = 1;
  return result;
}
