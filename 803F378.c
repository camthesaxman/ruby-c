signed int __fastcall sub_803F378(int a1)
{
  int v1; // r7@3
  signed int v2; // r5@6
  int v3; // r6@6

  a1 = (unsigned __int16)a1;
  if ( (unsigned __int16)a1 == 175 )
  {
    if ( byte_3001BAD & 2 )
      v1 = 28 * v2024E6C + 33705464;
    else
      v1 = 33721770;
  }
  else
  {
    v1 = (int)*(&gItemEffectTable + a1 - 13);
  }
  v2024C0B = v2024E6C;
  v2 = 0;
  v3 = 0;
  do
  {
    if ( *(_BYTE *)(v1 + v2) & 0xF )
      sub_803F324(v3);
    if ( *(_BYTE *)(v1 + v2) & 0xF0 )
    {
      if ( v2 )
      {
        sub_803F324(v3 + 1);
      }
      else
      {
        v2024C07 = v2024E6C;
        get_battle_strings_(&gUnknown_083FEE92);
      }
    }
    v3 += 2;
    ++v2;
  }
  while ( v2 <= 2 );
  if ( *(_BYTE *)(v1 + 3) & 0x80 )
  {
    v2024C07 = v2024E6C;
    get_battle_strings_(&gUnknown_083FEE5D);
  }
  return 33700044;
}
