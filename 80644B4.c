int __fastcall npc_sync_anim_pause_bits(int a1)
{
  char *v1; // r1@2
  char *v2; // r2@2
  int v4; // [sp+8h] [bp-4h]@0

  if ( (*(_WORD *)a1 & 0x101) == 257 )
  {
    *(_BYTE *)(a1 + 1) &= 0xFEu;
    v1 = &gSprites[68 * *(_BYTE *)(a1 + 4) + 44];
    *v1 = *v1 & 0xBF | (*(_BYTE *)(a1 + 2) >> 7 << 6);
    v2 = &gSprites[68 * *(_BYTE *)(a1 + 4) + 44];
    *v2 = *v2 & 0x7F | ((*(_BYTE *)(a1 + 3) & 1) << 7);
  }
  return v4;
}
