int sub_802B5B8()
{
  unsigned int v0; // r4@1
  void *v1; // r0@3
  int v2; // r5@7
  int v3; // r1@13
  int v4; // r0@14
  unsigned int v5; // r1@20
  unsigned __int16 v6; // r0@23
  signed int v7; // r1@27
  unsigned int v8; // r6@27
  int v9; // r4@27
  char *v10; // r1@34
  unsigned int v11; // r0@34
  int v12; // r0@37
  int v13; // r1@39
  unsigned __int16 v14; // r0@39
  int v15; // r1@39
  unsigned int v16; // r0@39
  unsigned int v17; // r6@39
  unsigned int i; // r4@39
  int v19; // r0@46
  int v21; // [sp+10h] [bp-4h]@0

  v0 = 0;
  if ( !v2024A64 )
  {
    v2024A60 = v2024C07;
    v2024C08 = v2024C07 ^ 1;
    if ( v20239F8 & 8 )
    {
      dp01_build_cmdbuf_x0D_a(0, 5);
      dp01_battle_side_mark_buffer_for_execution(v2024A60);
      v1 = &gUnknown_081D9F35;
_0802B94C:
      v2024C10 = v1;
      return v21;
    }
    if ( v20239F8 & 0x200 )
    {
      dp01_build_cmdbuf_x0D_a(0, 4);
      dp01_battle_side_mark_buffer_for_execution(v2024A60);
      v1 = &gUnknown_081D9F00;
      goto _0802B94C;
    }
    if ( v2024C04 == 5 )
      v2 = 1275 * v2016089 / 100 & 0xFF;
    else
      v2 = *((_BYTE *)&gBaseStats + 28 * *(_WORD *)(88 * v2024C08 + 0x2024A80) + 8);
    if ( v2024C04 > 5u )
    {
      if ( (unsigned int)v2024C04 - 6 <= 6 )
      {
        switch ( v2024C04 )
        {
          case 6u:
            v3 = *(_BYTE *)(88 * v2024C08 + 0x2024AA1);
            if ( v3 == 11 )
              goto _0802B760;
            v4 = *(_BYTE *)(88 * v2024C08 + 0x2024AA2);
            if ( v4 == 11 || v3 == 6 || v4 == 6 )
              goto _0802B760;
            goto _0802B72E;
          case 7u:
            v0 = 10;
            if ( (sav1_map_get_light_level() & 0xFF) == 5 )
              v0 = 35;
            break;
          case 8u:
            v5 = *(_BYTE *)(88 * v2024C08 + 0x2024AAA);
            if ( v5 > 0x27 )
              goto _0802B72E;
            v0 = (40 - v5) & 0xFF;
            if ( v0 <= 9 )
              goto _0802B72E;
            break;
          case 0xBu:
          case 0xCu:
_0802B72E:
            v0 = 10;
            break;
          case 9u:
            v6 = SpeciesToNationalPokedexNum(*(_WORD *)(88 * v2024C08 + 0x2024A80));
            v0 = 10;
            if ( sub_8090D90(v6, 1) << 24 )
_0802B760:
              v0 = 30;
            break;
          case 0xAu:
            v0 = ((unsigned __int8)byte_30042F3 + 10) & 0xFF;
            if ( v0 > 0x28 )
              v0 = 40;
            break;
          default:
            break;
        }
      }
    }
    else
    {
      v0 = gBallCatchBonuses[v2024C04 - 2];
    }
    v7 = 3 * *(_WORD *)(88 * v2024C08 + 0x2024AAC);
    v8 = (signed int)(v2 * v0) / 10 * (v7 - 2 * *(_WORD *)(88 * v2024C08 + 0x2024AA8)) / v7;
    v9 = *(_DWORD *)(88 * v2024C08 + 0x2024ACC);
    if ( v9 & 0x27 )
      v8 *= 2;
    if ( v9 & 0x58 )
      v8 = 15 * v8 / 0xA;
    if ( v2024C04 != 5 )
    {
      if ( v2024C04 == 1 )
      {
        byte_30042E5 |= 2u;
      }
      else
      {
        v10 = &byte_30042E0[v2024C04 + 52];
        v11 = (unsigned __int8)*v10;
        if ( v11 <= 0xFE )
          *v10 = v11 + 1;
      }
    }
    if ( v8 <= 0xFE )
    {
      v14 = Sqrt(0xFF0000 / v8, v13);
      v16 = 0xFFFF0u / (unsigned __int16)Sqrt(v14, v15);
      v17 = v16;
      for ( i = 0; i <= 3 && (unsigned __int16)Random(v16) < v17; i = (i + 1) & 0xFF )
        v16 = (i + 1) << 24;
      if ( v2024C04 == 1 )
        i = 4;
      dp01_build_cmdbuf_x0D_a(0, i);
      dp01_battle_side_mark_buffer_for_execution(v2024A60);
      if ( i != 4 )
      {
        v2024D23 = i;
        v1 = &gUnknown_081D9F0A;
        goto _0802B94C;
      }
      v2024C10 = &gUnknown_081D9EC2;
      v19 = SetMonData((char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v2024C08 + 0x2024A6A), 38, 33704964);
      if ( (calc_player_party_count(v19) & 0xFF) != 6 )
        goto _0802B938;
    }
    else
    {
      dp01_build_cmdbuf_x0D_a(0, 4);
      dp01_battle_side_mark_buffer_for_execution(v2024A60);
      v2024C10 = &gUnknown_081D9EC2;
      v12 = SetMonData((char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v2024C08 + 0x2024A6A), 38, 33704964);
      if ( (calc_player_party_count(v12) & 0xFF) != 6 )
      {
_0802B938:
        v2024D23 = 1;
        return v21;
      }
    }
    v2024D23 = 0;
  }
  return v21;
}
