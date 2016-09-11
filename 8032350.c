int __fastcall sub_8032350(int a1, int a2)
{
  unsigned int v2; // r0@1
  unsigned int v3; // r4@1
  unsigned int v4; // r5@1
  unsigned int v5; // r0@2
  unsigned int v6; // r4@3
  void *v7; // r0@6
  unsigned int v8; // r4@9
  int v9; // r4@11
  int v10; // r2@11
  signed int v11; // r1@11
  int v13; // [sp+10h] [bp-4h]@0

  v2 = a1 << 24;
  v3 = v2 >> 24;
  v4 = v2 >> 24;
  if ( !(a2 << 24) )
  {
    v5 = sub_8076BE0(v2) << 24;
    if ( v5 )
    {
      v6 = 0;
    }
    else
    {
      v5 = battle_get_per_side_status(v3) << 24;
      v6 = v5 >> 24;
    }
    if ( sub_8076BE0(v5) << 24 )
    {
      v7 = &gSubstituteDollTilemap;
    }
    else
    {
      if ( !(battle_side_get_owner(v4) << 24) )
      {
        v8 = v6;
        LZDecompressVram((int)&gSubstituteDollTilemap, gUnknown_081FAF4C[v8]);
_080323BA:
        v9 = gUnknown_081FAF4C[v8];
        v10 = v9 + 2048;
        v11 = 2;
        do
        {
          v40000D4 = v9;
          v40000D8 = v10;
          v40000DC = -2080374272;
          v10 += 2048;
          --v11;
        }
        while ( v11 >= 0 );
        LoadCompressedPalette(&gSubstituteDollPal, 16 * v4 + 256, 32);
        return v13;
      }
      v7 = &gSubstituteDollGfx;
    }
    v8 = v6;
    LZDecompressVram((int)v7, gUnknown_081FAF4C[v8]);
    goto _080323BA;
  }
  if ( !(sub_8076BE0(v2) << 24) )
  {
    if ( battle_side_get_owner(v3) << 24 )
      sub_8031794((int)&unk_30045C0 + 100 * *(_WORD *)(2 * v3 + 0x2024A6A), v3);
    else
      sub_80318FC((int)&unk_3004360 + 100 * *(_WORD *)(2 * v4 + 0x2024A6A), v4);
  }
  return v13;
}
