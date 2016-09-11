signed int __fastcall sub_805E234(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r1@1
  int v6; // [sp+0h] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  memcpy(&v6, &gUnknown_083753DC, 5);
  LOBYTE(v4) = sub_805CD60(v2, 0);
  if ( !(_BYTE)v4 )
    v4 = *((_BYTE *)&v6 + (*(_BYTE *)(v2 + 24) & 0xF));
  FieldObjectSetDirection(v2, v4);
  *(_WORD *)(v3 + 48) = 0;
  return 1;
}
