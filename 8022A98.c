int atk50_openpartyscreen()
{
  char v0; // r9@1
  int v1; // r8@1
  int v2; // r0@1
  int v3; // r5@13
  char v4; // r0@52
  int v5; // r5@59
  char v6; // r5@79
  int v7; // r7@81
  int v8; // r0@94
  int v10; // [sp+1Ch] [bp-4h]@0

  v0 = 0;
  v1 = *(_BYTE *)(v2024C10 + 2) | (*(_BYTE *)(v2024C10 + 3) << 8) | (*(_BYTE *)(v2024C10 + 4) << 16) | (*(_BYTE *)(v2024C10 + 5) << 24);
  v2 = *(_BYTE *)(v2024C10 + 1);
  if ( v2 == 5 )
  {
    if ( (v20239F8 & 0x41) == 1 )
    {
      if ( v20239F8 & 1 )
      {
        v3 = v2024C6C >> 28;
        if ( (v2024C6C >> 28) & 1 )
        {
          v2024A60 = 0;
          if ( sub_8018018(0, 6u, 6u) << 24 )
          {
            v2024C0C |= gBitTable[v2024A60];
            v2024C6C &= ~(gBitTable[v2024A60] << 28);
            dp01_build_cmdbuf_x2A_2A_2A_2A(0);
            dp01_battle_side_mark_buffer_for_execution(v2024A60);
          }
          else if ( *(_BYTE *)(20 * v2024A60 + 0x2024D68) & 0x40 )
          {
            sub_800D1D8(0, 2);
            dp01_battle_side_mark_buffer_for_execution(v2024A60);
            v0 = 1;
          }
          else
          {
            sub_8022A3C(v201606A);
            *(_BYTE *)(20 * v2024A60 + 0x2024D68) |= 0x40u;
          }
        }
        if ( v3 & 4 && !(v3 & 1) )
        {
          v2024A60 = 2;
          if ( sub_8018018(2u, 6u, 6u) << 24 )
          {
            v2024C0C |= gBitTable[v2024A60];
            v2024C6C &= ~(gBitTable[v2024A60] << 28);
            dp01_build_cmdbuf_x2A_2A_2A_2A(0);
            dp01_battle_side_mark_buffer_for_execution(v2024A60);
          }
          else if ( *(_BYTE *)(20 * v2024A60 + 0x2024D68) & 0x40 )
          {
            if ( !(v0 & 1) )
            {
              sub_800D1D8(0, 2);
              dp01_battle_side_mark_buffer_for_execution(v2024A60);
            }
          }
          else
          {
            sub_8022A3C(v2016068);
            *(_BYTE *)(20 * v2024A60 + 0x2024D68) |= 0x40u;
          }
        }
        if ( v3 & 2 )
        {
          v2024A60 = 1;
          if ( sub_8018018(1u, 6u, 6u) << 24 )
          {
            v2024C0C |= gBitTable[v2024A60];
            v2024C6C &= ~(gBitTable[v2024A60] << 28);
            dp01_build_cmdbuf_x2A_2A_2A_2A(0);
            dp01_battle_side_mark_buffer_for_execution(v2024A60);
          }
          else if ( *(_BYTE *)(20 * v2024A60 + 0x2024D68) & 0x40 )
          {
            sub_800D1D8(0, 2);
            dp01_battle_side_mark_buffer_for_execution(v2024A60);
            v0 |= 2u;
          }
          else
          {
            sub_8022A3C(v201606B);
            *(_BYTE *)(20 * v2024A60 + 0x2024D68) |= 0x40u;
          }
        }
        if ( v3 & 8 && !(v3 & 2) )
        {
          v2024A60 = 3;
          if ( sub_8018018(3u, 6u, 6u) << 24 )
          {
            v2024C0C |= gBitTable[v2024A60];
            v2024C6C &= ~(gBitTable[v2024A60] << 28);
            dp01_build_cmdbuf_x2A_2A_2A_2A(0);
            dp01_battle_side_mark_buffer_for_execution(v2024A60);
          }
          else if ( *(_BYTE *)(20 * v2024A60 + 0x2024D68) & 0x40 )
          {
            if ( !(v0 & 2) )
            {
              sub_800D1D8(0, 2);
              dp01_battle_side_mark_buffer_for_execution(v2024A60);
            }
          }
          else
          {
            sub_8022A3C(v2016069);
            *(_BYTE *)(20 * v2024A60 + 0x2024D68) |= 0x40u;
          }
        }
        if ( !(v2024D68 & 0x40) && !(v2024D90 & 0x40) && v3 )
        {
          if ( v2024C0C & 1 )
            v2024A60 = 2;
          else
            v2024A60 = 0;
          sub_800D1D8(0, 2);
          dp01_battle_side_mark_buffer_for_execution(v2024A60);
        }
        if ( !(v2024D7C & 0x40) && !(v2024DA4 & 0x40) && v3 )
        {
          if ( v2024C0C & 2 )
            v4 = 3;
          else
            v4 = 1;
          v2024A60 = v4;
          sub_800D1D8(0, 2);
          dp01_battle_side_mark_buffer_for_execution(v2024A60);
        }
      }
    }
    else
    {
      v2024A60 = 0;
      if ( v2024A68 > 0u )
      {
        do
        {
          if ( v2024C6C & (gBitTable[v2024A60] << 28) )
          {
            if ( sub_8018018(v2024A60, 6u, 6u) << 24 )
            {
              v2024C0C |= gBitTable[v2024A60];
              v2024C6C &= ~(gBitTable[v2024A60] << 28);
              sub_800D1D8(0, 2);
              dp01_battle_side_mark_buffer_for_execution(v2024A60);
            }
            else if ( !(*(_BYTE *)(20 * v2024A60 + 0x2024D68) & 0x40) )
            {
              sub_8022A3C(6);
              *(_BYTE *)(20 * v2024A60 + 0x2024D68) |= 0x40u;
            }
          }
          else
          {
            sub_800D1D8(0, 2);
            dp01_battle_side_mark_buffer_for_execution(v2024A60);
          }
          ++v2024A60;
        }
        while ( v2024A60 < (unsigned int)v2024A68 );
      }
    }
    v2024C10 += 6;
  }
  else if ( v2 == 6 )
  {
    if ( v20239F8 & 0x40 || !(v20239F8 & 1) )
    {
      v2024C10 += 6;
    }
    else
    {
      v5 = v2024C6C >> 28;
      if ( (v2024C6C >> 28) & 4 && v5 & 1 )
      {
        v2024A60 = 2;
        if ( sub_8018018(2u, v2024261, 6u) << 24 )
        {
          v2024C0C |= gBitTable[v2024A60];
          v2024C6C &= ~(gBitTable[v2024A60] << 28);
          dp01_build_cmdbuf_x2A_2A_2A_2A(0);
          dp01_battle_side_mark_buffer_for_execution(v2024A60);
        }
        else if ( !(*(_BYTE *)(20 * v2024A60 + 0x2024D68) & 0x40) )
        {
          sub_8022A3C(v2016068);
          *(_BYTE *)(20 * v2024A60 + 0x2024D68) |= 0x40u;
        }
      }
      if ( v5 & 8 && v5 & 2 )
      {
        v2024A60 = 3;
        if ( sub_8018018(3u, v2024461, 6u) << 24 )
        {
          v2024C0C |= gBitTable[v2024A60];
          v2024C6C &= ~(gBitTable[v2024A60] << 28);
          dp01_build_cmdbuf_x2A_2A_2A_2A(0);
          dp01_battle_side_mark_buffer_for_execution(v2024A60);
        }
        else if ( !(*(_BYTE *)(20 * v2024A60 + 0x2024D68) & 0x40) )
        {
          sub_8022A3C(v2016069);
          *(_BYTE *)(20 * v2024A60 + 0x2024D68) |= 0x40u;
        }
      }
      v2024C10 += 6;
    }
    v2024C09 = 0;
    if ( !((v2024C6C >> 28) & 1) && v2024A68 > 0u )
    {
      do
        ++v2024C09;
      while ( !(gBitTable[v2024C09] & (v2024C6C >> 28)) && v2024C09 < (unsigned int)v2024A68 );
    }
    if ( v2024C09 == v2024A68 )
      v2024C10 = v1;
  }
  else
  {
    v6 = 1;
    if ( *(_BYTE *)(v2024C10 + 1) & 0x80 )
      v6 = 0;
    v7 = (unsigned __int8)sub_8015150(*(_BYTE *)(v2024C10 + 1) & 0x7F);
    if ( *(_BYTE *)(20 * v7 + 0x2024D68) & 0x40 )
    {
      v2024C10 += 6;
    }
    else if ( sub_8018018(v7, 6u, 6u) << 24 )
    {
      v2024A60 = v7;
      v2024C0C |= gBitTable[(unsigned __int8)v7];
      v2024C6C &= ~(gBitTable[(unsigned __int8)v7] << 28);
      v2024C10 = v1;
    }
    else
    {
      v2024A60 = v7;
      *(_BYTE *)((unsigned __int8)v7 + 0x2016064) = *(_WORD *)(2 * (unsigned __int8)v7 + 0x2024A6A);
      dp01_build_cmdbuf_x16_a_b_c_ptr_d_e_f(0, v6, *(_BYTE *)((v2024A60 ^ 2) + 0x2016068), 0, 3 * v2024A60 + 33644652);
      dp01_battle_side_mark_buffer_for_execution(v2024A60);
      v2024C10 += 6;
      if ( !(battle_get_per_side_status(v2024A60) << 24) && (unsigned __int8)byte_30042E2 <= 0xFEu )
        ++byte_30042E2;
      if ( v20239F8 & 0x40 )
      {
        v2024A60 = 0;
        if ( v2024A68 )
        {
          do
          {
            if ( v2024A60 != v7 )
            {
              sub_800D1D8(0, 2);
              dp01_battle_side_mark_buffer_for_execution(v2024A60);
            }
            ++v2024A60;
          }
          while ( v2024A60 < (unsigned int)v2024A68 );
        }
      }
      else
      {
        v8 = battle_get_per_side_status(v7);
        v2024A60 = battle_get_side_with_given_state((v8 ^ 1) & 0xFF);
        if ( v2024C0C & gBitTable[v2024A60] )
          v2024A60 ^= 2u;
        sub_800D1D8(0, 2);
        dp01_battle_side_mark_buffer_for_execution(v2024A60);
      }
    }
  }
  return v10;
}
