int sub_8015894()
{
  int v0; // r6@1
  int v1; // r4@1
  _WORD *v2; // r8@1
  int v3; // r3@14
  int v4; // r1@17

  v0 = 0;
  v1 = *(_WORD *)(2 * *(_BYTE *)((v2024A60 << 9) + 0x2024262) + 88 * v2024A60 + 0x2024A8C);
  v2 = (_WORD *)(2 * v2024A60 + 33644776);
  if ( *(_WORD *)(28 * v2024A60 + 0x2024CAC) == v1
    && *(_WORD *)(2 * *(_BYTE *)((v2024A60 << 9) + 0x2024262) + 88 * v2024A60 + 0x2024A8C) )
  {
    v2016003 = v2024A60;
    v2024BE6 = v1;
    *(_DWORD *)(4 * v2024A60 + 0x2024C1C) = &gUnknown_081D9144;
    v0 = 1;
  }
  if ( v1 == *(_WORD *)(2 * v2024A60 + 0x2024C34) && v1 != 165 && *(_DWORD *)(88 * v2024A60 + 0x2024AD0) < 0 )
  {
    b_cancel_multi_turn_move_maybe(v2024A60);
    *(_DWORD *)(4 * v2024A60 + 0x2024C1C) = &gUnknown_081D937C;
    v0 = (v0 + 1) & 0xFF;
  }
  if ( *(_BYTE *)(28 * v2024A60 + 0x2024CBB) << 28 && !*((_BYTE *)&gBattleMoves + 12 * v1 + 1) )
  {
    v2024BE6 = v1;
    *(_DWORD *)(4 * v2024A60 + 0x2024C1C) = &gUnknown_081D938B;
    v0 = (v0 + 1) & 0xFF;
  }
  if ( sub_8015D5C(v2024A60, v1) << 24 )
  {
    v2024BE6 = v1;
    *(_DWORD *)(4 * v2024A60 + 0x2024C1C) = &gUnknown_081D9464;
    v0 = (v0 + 1) & 0xFF;
  }
  if ( *(_WORD *)(88 * v2024A60 + 0x2024AAE) == 175 )
    v3 = *(_BYTE *)(28 * v2024A60 + 0x2024DF7);
  else
    v3 = itemid_get_x12(*(_WORD *)(88 * v2024A60 + 0x2024AAE)) & 0xFF;
  v2024C0B = v2024A60;
  if ( v3 == 29 )
  {
    v4 = *v2;
    if ( *v2 )
    {
      if ( v4 != 0xFFFF && v4 != v1 )
      {
        v2024BE6 = *v2;
        v2024C04 = *(_WORD *)(88 * v2024A60 + 0x2024AAE);
        *(_DWORD *)(4 * v2024A60 + 0x2024C1C) = &gUnknown_081D9AC2;
        v0 = (v0 + 1) & 0xFF;
      }
    }
  }
  if ( !*(_BYTE *)(88 * v2024A60 + *(_BYTE *)((v2024A60 << 9) + 0x2024262) + 0x2024AA4) )
  {
    *(_DWORD *)(4 * v2024A60 + 0x2024C1C) = &gUnknown_081D9369;
    v0 = (v0 + 1) & 0xFF;
  }
  return v0;
}
