int __fastcall npc_obj_transfer_image_anim_pause_flag(int a1, int a2)
{
  int v3; // [sp+0h] [bp-4h]@0

  if ( *(_BYTE *)(a1 + 1) & 4 )
    *(_BYTE *)(a2 + 44) |= 0x40u;
  return v3;
}
