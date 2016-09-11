int __fastcall npc_pal_op_B(int a1, unsigned __int8 a2)
{
  int v2; // r4@1
  int v3; // r2@1
  unsigned __int16 v4; // r0@6
  int v6; // [sp+4h] [bp-4h]@0

  v2 = a2;
  v3 = GetFieldObjectGraphicsInfo(*(_BYTE *)(a1 + 5));
  if ( *(_WORD *)(v3 + 4) != 4607 )
  {
    if ( *(_BYTE *)(v3 + 12) & 0xF )
    {
      if ( (*(_BYTE *)(v3 + 12) & 0xF) == 10 )
      {
        npc_load_two_palettes__and_record(*(_WORD *)(v3 + 2), v2);
      }
      else
      {
        v4 = npc_paltag_by_palslot(v2);
        pal_patch_for_npc(v4, v2);
      }
    }
    else
    {
      npc_load_two_palettes__no_record(*(_WORD *)(v3 + 2), v2);
    }
    sub_807D78C(v2);
  }
  return v6;
}
