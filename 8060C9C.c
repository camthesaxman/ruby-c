int __fastcall an_look_any(int a1, int a2, char a3)
{
  int v3; // r4@1
  int v4; // r5@1
  char v5; // r0@1
  int v7; // [sp+8h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  FieldObjectSetDirection(a1, a3);
  npc_coords_shift_still(v3);
  v5 = get_go_image_anim_num(*(_BYTE *)(v3 + 24) & 0xF);
  sub_805FE64(v3, v4, v5);
  *(_BYTE *)(v4 + 44) |= 0x40u;
  *(_WORD *)(v4 + 50) = 1;
  return v7;
}
