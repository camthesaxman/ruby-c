int __fastcall process_overworld_input(int a1, char a2, char a3)
{
  int v3; // r4@1
  char v4; // r5@1
  char v5; // r8@1
  int v6; // r6@1
  int v7; // r9@1
  unsigned __int8 v8; // r0@1
  int v9; // r7@1
  char v10; // r0@22
  int v12; // [sp+18h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = v202E85B;
  v7 = v202E85A;
  v8 = cur_mapdata_block_role_at_player_pos();
  v9 = sub_8056FFC(v8) & 0xFF;
  if ( v6 == 2 && !v9 || !v6 )
  {
    if ( (signed __int16)sub_80E6034() != 4 )
    {
      if ( v4 & 8 )
        *(_BYTE *)v3 |= 4u;
      if ( v4 & 4 )
        *(_BYTE *)v3 |= 8u;
      if ( v4 & 1 )
        *(_BYTE *)v3 |= 1u;
      if ( v4 & 2 )
        *(_BYTE *)v3 |= 0x80u;
    }
    if ( v5 & 0xF0 )
      *(_BYTE *)v3 |= 0x30u;
  }
  if ( !v9 )
  {
    if ( v6 == 2 && v7 == 2 )
      *(_BYTE *)v3 |= 0x40u;
    if ( v6 == 2 )
      *(_BYTE *)v3 |= 2u;
  }
  if ( v5 & 0x40 )
  {
    v10 = 2;
_08068014:
    *(_BYTE *)(v3 + 2) = v10;
    return v12;
  }
  if ( v5 & 0x80 )
  {
    v10 = 1;
    goto _08068014;
  }
  if ( v5 & 0x20 )
  {
    v10 = 3;
    goto _08068014;
  }
  if ( v5 & 0x10 )
  {
    v10 = 4;
    goto _08068014;
  }
  return v12;
}
