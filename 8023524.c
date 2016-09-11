int sub_8023524()
{
  int v0; // r0@6
  int v1; // r0@17
  signed int i; // r4@17
  signed int j; // r4@21
  int v4; // r3@27
  int v6; // [sp+1Ch] [bp-4h]@0

  v2024A60 = sub_8015150(*(_BYTE *)(v2024C10 + 1));
  sub_80157C4(v2024A60);
  v2024C6C &= ~(gBitTable[v2024A60] << 28);
  *(_BYTE *)(20 * v2024A60 + 0x2024D68) &= 0xBFu;
  if ( *(_WORD *)((2 * battle_side_get_owner(v2024A60) & 0x1FF) + 0x2024C7A) & 0x200
    || !(*(_WORD *)((2 * battle_side_get_owner(v2024A60) & 0x1FF) + 0x2024C7A) & 0x10)
    || *(_BYTE *)(88 * v2024A60 + 0x2024AA1) == 2
    || *(_BYTE *)(88 * v2024A60 + 0x2024AA2) == 2
    || *(_BYTE *)(88 * v2024A60 + 0x2024AA0) == 26 )
  {
    if ( *(_BYTE *)(88 * v2024A60 + 0x2024AA0) == 54 )
      *(_BYTE *)(28 * v2024A60 + 0x2024CC0) |= 1u;
    if ( !(sub_8018324(0, v2024A60, 0, 0, 0) << 24) && !(sub_801A02C(0, v2024A60, 0) << 24) )
    {
      v1 = battle_side_get_owner(v2024A60);
      *(_WORD *)((2 * v1 & 0x1FF) + 0x2024C7A) &= 0xFDFFu;
      for ( i = 0; i < v2024A68; ++i )
      {
        if ( *(_BYTE *)(i + 33704570) == v2024A60 )
          *(_BYTE *)(i + 33704566) = 12;
      }
      for ( j = 0; j < v2024A68; ++j )
        *(_WORD *)((2 * battle_side_get_owner((unsigned __int8)j) & 0x1FF) + 0x20160BC) = *(_WORD *)(88 * j + 0x2024AA8);
      if ( *(_BYTE *)(v2024C10 + 1) == 5 )
      {
        ++v2024C09;
        while ( 1 )
        {
          v4 = gBitTable[v2024C09];
          if ( (v2024C6C >> 28) & v4 )
          {
            if ( !(v2024C0C & (unsigned __int8)v4) )
              break;
          }
          if ( v2024C09 >= (unsigned int)v2024A68 )
            break;
          ++v2024C09;
        }
      }
      v2024C10 += 2;
    }
  }
  else
  {
    v0 = battle_side_get_owner(v2024A60);
    *(_WORD *)((2 * v0 & 0x1FF) + 0x2024C7A) |= 0x200u;
    v2024BEC = *(_WORD *)(88 * v2024A60 + 0x2024AAC)
             / (2 * (5 - *(_BYTE *)(12 * (unsigned __int8)battle_side_get_owner(v2024A60) + 0x2024C86)) & 0xFF);
    if ( !v2024BEC )
      v2024BEC = 1;
    v2016003 = v2024A60;
    b_movescr_stack_push_cursor();
    if ( *(_BYTE *)(v2024C10 + 1) )
    {
      if ( *(_BYTE *)(v2024C10 + 1) == 1 )
        v2024C10 = &gUnknown_081D9171;
      else
        v2024C10 = &gUnknown_081D91CD;
    }
    else
    {
      v2024C10 = &gUnknown_081D919F;
    }
  }
  return v6;
}
