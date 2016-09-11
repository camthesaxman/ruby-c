int atk59_8025230()
{
  int v0; // r6@1
  int v1; // r4@1
  int i; // r5@1
  int v4; // [sp+18h] [bp-4h]@0

  v0 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  v1 = *(_BYTE *)(v2024C10 + 5) | (*(_BYTE *)(v2024C10 + 6) << 8) | (*(_BYTE *)(v2024C10 + 7) << 16) | (*(_BYTE *)(v2024C10 + 8) << 24);
  for ( i = sub_803B7C8((char *)&unk_3004360 + 100 * v2016018, *(_BYTE *)(v2024C10 + 9)) & 0xFFFF;
        i == 65534;
        i = sub_803B7C8((char *)&unk_3004360 + 100 * v2016018, 0) & 0xFFFF )
  {
    ;
  }
  if ( i )
  {
    if ( i == 0xFFFF )
    {
      v2024C10 += 10;
    }
    else
    {
      v2024A60 = battle_get_side_with_given_state(0);
      if ( *(_WORD *)(2 * v2024A60 + 0x2024A6A) == v2016018 && !(*(_DWORD *)(88 * v2024A60 + 0x2024AD0) & 0x200000) )
        GiveMoveToBattleMon(88 * v2024A60 + 33704576, i);
      if ( v20239F8 & 1 )
      {
        v2024A60 = battle_get_side_with_given_state(2);
        if ( *(_WORD *)(2 * v2024A60 + 0x2024A6A) == v2016018 && !(*(_DWORD *)(88 * v2024A60 + 0x2024AD0) & 0x200000) )
          GiveMoveToBattleMon(88 * v2024A60 + 33704576, i);
      }
      v2024C10 = v0;
    }
  }
  else
  {
    v2024C10 = v1;
  }
  return v4;
}
