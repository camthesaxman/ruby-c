int sub_8011384()
{
  int v0; // r3@5
  unsigned int v1; // r2@5
  int v2; // r3@8
  unsigned int v3; // r2@8
  signed int v4; // r2@10
  unsigned __int16 v5; // r0@20
  unsigned __int16 v6; // r0@23
  int v8; // [sp+18h] [bp-4h]@0

  if ( !v2024A64 )
  {
    v2024A60 = v2024A64;
    if ( v2024A64 < (unsigned int)v2024A68 )
    {
      do
      {
        if ( !(v20239F8 & 0x80) || battle_side_get_owner(v2024A60) << 24 )
        {
          v2 = 88 * v2024A60 + 33704576;
          v3 = 0;
          do
          {
            *(_BYTE *)(v2 + v3) = *(_BYTE *)(v3 + (v2024A60 << 9) + 4 + 33702496);
            ++v3;
          }
          while ( v3 <= 0x57 );
          *(_BYTE *)(88 * v2024A60 + 0x2024AA1) = *((_BYTE *)&gBaseStats + 28 * *(_WORD *)(88 * v2024A60 + 0x2024A80)
                                                                         + 6);
          *(_BYTE *)(88 * v2024A60 + 0x2024AA2) = *((_BYTE *)&gBaseStats + 28 * *(_WORD *)(88 * v2024A60 + 0x2024A80)
                                                                         + 7);
          *(_BYTE *)(88 * v2024A60 + 0x2024AA0) = sub_803DB14(
                                                    *(_WORD *)(88 * v2024A60 + 0x2024A80),
                                                    (unsigned int)*(_BYTE *)(88 * v2024A60 + 0x2024A97) >> 7);
          *(_WORD *)((2 * battle_side_get_owner(v2024A60) & 0x1FF) + 0x20160BC) = *(_WORD *)(88 * v2024A60 + 0x2024AA8);
          v4 = 0;
          do
            *(_BYTE *)(v4++ + 88 * v2024A60 + 33704600) = 6;
          while ( v4 <= 7 );
          *(_DWORD *)(88 * v2024A60 + 0x2024AD0) = 0;
        }
        else
        {
          v0 = 88 * v2024A60 + 33704576;
          v1 = 0;
          do
            *(_BYTE *)(v0 + v1++) = 0;
          while ( v1 <= 0x57 );
        }
        if ( !(battle_get_per_side_status(v2024A60) << 24) )
        {
          dp01_build_cmdbuf_x07_7_7_7(0);
          dp01_battle_side_mark_buffer_for_execution(v2024A60);
        }
        if ( v20239F8 & 8 )
        {
          if ( (unsigned __int8)battle_get_per_side_status(v2024A60) == 1 )
          {
            dp01_build_cmdbuf_x07_7_7_7(0);
            dp01_battle_side_mark_buffer_for_execution(v2024A60);
          }
          if ( (unsigned __int8)battle_side_get_owner(v2024A60) == 1 && !(v20239F8 & 0x902) )
          {
            v5 = SpeciesToNationalPokedexNum(*(_WORD *)(88 * v2024A60 + 0x2024A80));
            sub_8090D90(v5, 2);
          }
        }
        else if ( (unsigned __int8)battle_side_get_owner(v2024A60) == 1 && !(v20239F8 & 0x902) )
        {
          v6 = SpeciesToNationalPokedexNum(*(_WORD *)(88 * v2024A60 + 0x2024A80));
          sub_8090D90(v6, 2);
          dp01_build_cmdbuf_x04_4_4_4(0);
          dp01_battle_side_mark_buffer_for_execution(v2024A60);
        }
        if ( v20239F8 & 0x40
          && ((unsigned __int8)battle_get_per_side_status(v2024A60) == 2
           || (unsigned __int8)battle_get_per_side_status(v2024A60) == 3) )
        {
          dp01_build_cmdbuf_x07_7_7_7(0);
          dp01_battle_side_mark_buffer_for_execution(v2024A60);
        }
        ++v2024A60;
      }
      while ( v2024A60 < (unsigned int)v2024A68 );
    }
    dword_30042D4 = (int)bc_801333C;
  }
  return v8;
}
