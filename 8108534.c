int tai2C_unk()
{
  unsigned __int8 *v0; // r0@2
  int v1; // r5@4
  int v2; // r2@4
  unsigned int *v3; // r9@4
  int v4; // r8@7
  char v5; // r0@7
  int v6; // r6@7
  signed int v7; // r5@9
  int v9; // [sp+18h] [bp-4h]@0

  v2016808 = 0;
  if ( *(_BYTE *)(v2039238 + 1) == 1 )
    v0 = (unsigned __int8 *)33704967;
  else
    v0 = (unsigned __int8 *)33704968;
  v1 = *v0;
  v3 = (unsigned int *)&unk_30045C0;
  if ( !(battle_side_get_owner(*v0) << 24) )
    v3 = dword_3004360;
  if ( v20239F8 & 1 )
  {
    v4 = *(_BYTE *)(2 * v1 + 0x2024A6A);
    v5 = battle_get_per_side_status(v1);
    v6 = *(_BYTE *)((2 * battle_get_side_with_given_state(v5 ^ 2) & 0x1FF) + 0x2024A6A);
  }
  else
  {
    v6 = *(_BYTE *)(2 * v1 + 0x2024A6A);
    v4 = *(_BYTE *)(2 * v1 + 0x2024A6A);
  }
  v7 = 0;
  do
  {
    if ( v7 != v4
      && v7 != v6
      && GetMonData((int)&v3[25 * v7], 57, v2)
      && GetMonData((int)&v3[25 * v7], 65, v2)
      && GetMonData((int)&v3[25 * v7], 65, v2) != 412 )
    {
      ++v2016808;
    }
    ++v7;
  }
  while ( v7 <= 5 );
  v2039238 += 2;
  return v9;
}
