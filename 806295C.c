int __fastcall sub_806295C(int a1, int a2, char a3)
{
  int v3; // r5@1
  int v4; // r6@1
  unsigned __int8 v5; // r4@1
  char v6; // r0@1
  int v8; // [sp+Ch] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  FieldObjectSetDirection(a1, a3);
  npc_coords_shift_still(v3);
  v6 = sub_805FDD8(v5);
  sub_805FE64(v3, v4, v6);
  *(_BYTE *)(v4 + 44) |= 0x40u;
  *(_WORD *)(v4 + 50) = 1;
  return v8;
}
