int __fastcall sub_8094998(int a1, unsigned __int8 a2)
{
  int v2; // r6@1
  int v3; // r4@1
  signed int v4; // r5@6
  signed int v5; // r4@6
  signed int v6; // r5@11
  signed int v7; // r4@11
  signed int v8; // r4@16
  char *v9; // r3@16
  unsigned __int8 v11; // [sp+0h] [bp-18h]@6
  unsigned __int8 v12; // [sp+1h] [bp-17h]@11
  int v13; // [sp+14h] [bp-4h]@18

  v2 = a1;
  v3 = a2;
  if ( (unsigned __int8)sub_806B528() == 1 )
  {
    if ( v3 )
    {
      *(_BYTE *)v2 = 48;
      *(_BYTE *)(v2 + 1) = 69;
      *(_BYTE *)(v2 + 2) = 18;
    }
    else
    {
      *(_BYTE *)v2 = 3;
      *(_BYTE *)(v2 + 1) = 18;
      *(_BYTE *)(v2 + 2) = 69;
    }
  }
  else
  {
    if ( battle_type_is_double() << 24 )
    {
      v6 = 2;
      v11 = *(_WORD *)((2 * battle_get_side_with_given_state(0) & 0x1FF) + 0x2024A6A);
      v12 = *(_WORD *)((2 * battle_get_side_with_given_state(2u) & 0x1FF) + 0x2024A6A);
      v7 = 0;
      do
      {
        if ( v7 != v11 && v7 != v12 )
          *(&v11 + v6++) = v7;
        ++v7;
      }
      while ( v7 <= 5 );
    }
    else
    {
      v4 = 1;
      v11 = *(_WORD *)((2 * battle_get_side_with_given_state(0) & 0x1FF) + 0x2024A6A);
      v5 = 0;
      do
      {
        if ( v5 != v11 )
          *(&v11 + v4++) = v5;
        ++v5;
      }
      while ( v5 <= 5 );
    }
    v8 = 0;
    v9 = (char *)&v11;
    do
    {
      *(_BYTE *)(v2 + v8) = 16 * *v9 | v9[1];
      v9 += 2;
      ++v8;
    }
    while ( v8 <= 2 );
  }
  return v13;
}
