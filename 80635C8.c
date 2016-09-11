int __fastcall npc_update_obj_anim_flag(int a1, int a2)
{
  char v2; // r3@1
  int v4; // [sp+0h] [bp-4h]@0

  v2 = *(_BYTE *)(a2 + 62) & 0xFB;
  *(_BYTE *)(a2 + 62) = v2;
  if ( *(_BYTE *)(a1 + 1) & 0x60 )
    *(_BYTE *)(a2 + 62) = v2 | 4;
  return v4;
}
