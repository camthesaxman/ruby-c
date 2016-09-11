int atk48_playstatchangeanimation()
{
  int v0; // r7@1
  unsigned int v1; // r8@1
  unsigned int v2; // r4@1
  char v3; // r1@1
  signed int v4; // r3@1
  int v5; // r0@2
  signed int v6; // r1@2
  unsigned int v7; // r5@5
  int v8; // r0@8
  signed int v9; // ST00_4@9
  char v10; // r0@9
  int v11; // r0@10
  signed __int16 v12; // r0@22
  int v13; // r0@23
  signed int v14; // r1@23
  unsigned int v15; // r2@26
  int v16; // r0@37
  int *v17; // r1@37
  signed int v19; // [sp+0h] [bp-24h]@40
  int v20; // [sp+20h] [bp-4h]@0

  v0 = 0;
  LOWORD(v1) = 0;
  v2024A60 = sub_8015150(*(_BYTE *)(v2024C10 + 1));
  v2 = *(_BYTE *)(v2024C10 + 2);
  v3 = *(_BYTE *)(v2024C10 + 3);
  v4 = 0;
  if ( *(_BYTE *)(v2024C10 + 3) & 1 )
  {
    v5 = v3 & 2;
    v6 = 21;
    if ( v5 )
      v6 = 45;
    if ( *(_BYTE *)(v2024C10 + 2) )
    {
      v7 = v6 << 16;
      do
      {
        if ( v2 & 1 )
        {
          if ( *(_BYTE *)(v2024C10 + 3) & 8 )
          {
            v8 = v0 + 88 * v2024A60;
            goto _080216C4;
          }
          v9 = v4;
          v10 = battle_get_per_side_status(v2024A60);
          v4 = v9;
          if ( !*(_BYTE *)(12 * (v10 & 1) + 0x2024C82) )
          {
            v11 = *(_BYTE *)(88 * v2024A60 + 0x2024AA0);
            if ( v11 != 29 && v11 != 73 && (v11 != 51 || v0 != 6) && (v11 != 52 || v0 != 1) )
            {
              v8 = v0 + 88 * v2024A60;
_080216C4:
              if ( (signed int)*(_BYTE *)(v8 + 33704600) > 0 )
              {
                v1 = v7 >> 16;
                ++v4;
              }
              goto _080216D6;
            }
          }
        }
_080216D6:
        v2 >>= 1;
        v7 += 0x10000;
        ++v0;
      }
      while ( v2 );
    }
    if ( v4 > 1 )
    {
      LOWORD(v1) = 57;
      if ( *(_BYTE *)(v2024C10 + 3) & 2 )
      {
        v12 = 58;
_08021770:
        LOWORD(v1) = v12;
        goto _08021772;
      }
    }
  }
  else
  {
    v13 = v3 & 2;
    v14 = 14;
    if ( v13 )
      v14 = 38;
    if ( *(_BYTE *)(v2024C10 + 2) )
    {
      v15 = v14 << 16;
      do
      {
        if ( v2 & 1 && (signed int)*(_BYTE *)(v0 + 88 * v2024A60 + 33704600) <= 11 )
        {
          v1 = v15 >> 16;
          ++v4;
        }
        v2 >>= 1;
        v15 += 0x10000;
        ++v0;
      }
      while ( v2 );
    }
    if ( v4 > 1 )
    {
      LOWORD(v1) = 55;
      if ( *(_BYTE *)(v2024C10 + 3) & 2 )
      {
        v12 = 56;
        goto _08021770;
      }
    }
  }
_08021772:
  if ( *(_BYTE *)(v2024C10 + 3) & 4 && v4 <= 1 )
  {
    v16 = v2024C10 + 4;
    v17 = (int *)33704976;
  }
  else
  {
    if ( !v4 || v20160DC )
    {
      v17 = (int *)33704976;
    }
    else
    {
      v19 = v4;
      dp01_build_cmdbuf_x34_a_bb_aka_battle_anim(0, 1, v1);
      dp01_battle_side_mark_buffer_for_execution(v2024A60);
      if ( *(_BYTE *)(v2024C10 + 3) & 4 && v19 > 1 )
        v20160DC = 1;
      v17 = (int *)33704976;
    }
    v16 = *v17 + 4;
  }
  *v17 = v16;
  return v20;
}
