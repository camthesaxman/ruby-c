int __fastcall sub_8094A74(int a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // r5@1
  int v4; // r7@1
  unsigned int v5; // r4@2
  unsigned __int8 v6; // r0@2
  int v7; // r6@4
  signed int v8; // r3@9
  signed int v9; // r4@9
  signed int v10; // r3@14
  signed int v11; // r4@14
  signed int v12; // r4@19
  char *v13; // r3@19
  unsigned __int8 v15; // [sp+0h] [bp-1Ch]@9
  unsigned __int8 v16; // [sp+1h] [bp-1Bh]@14
  int v17; // [sp+18h] [bp-4h]@21

  v3 = a1;
  v4 = a2;
  if ( battle_side_get_owner(a3) << 24 )
  {
    v5 = battle_get_side_with_given_state(1u) & 0xFF;
    v6 = 3;
  }
  else
  {
    v5 = battle_get_side_with_given_state(0) & 0xFF;
    v6 = 2;
  }
  v7 = (unsigned __int8)battle_get_side_with_given_state(v6);
  if ( (unsigned __int8)sub_806B528() == 1 )
  {
    if ( v4 )
    {
      *(_BYTE *)v3 = 48;
      *(_BYTE *)(v3 + 1) = 69;
      *(_BYTE *)(v3 + 2) = 18;
    }
    else
    {
      *(_BYTE *)v3 = 3;
      *(_BYTE *)(v3 + 1) = 18;
      *(_BYTE *)(v3 + 2) = 69;
    }
  }
  else
  {
    if ( battle_type_is_double() << 24 )
    {
      v10 = 2;
      v15 = *(_WORD *)(2 * v5 + 0x2024A6A);
      v16 = *(_WORD *)(2 * v7 + 0x2024A6A);
      v11 = 0;
      do
      {
        if ( v11 != v15 && v11 != v16 )
          *(&v15 + v10++) = v11;
        ++v11;
      }
      while ( v11 <= 5 );
    }
    else
    {
      v8 = 1;
      v15 = *(_WORD *)(2 * v5 + 0x2024A6A);
      v9 = 0;
      do
      {
        if ( v9 != v15 )
          *(&v15 + v8++) = v9;
        ++v9;
      }
      while ( v9 <= 5 );
    }
    v12 = 0;
    v13 = (char *)&v15;
    do
    {
      *(_BYTE *)(v3 + v12) = 16 * *v13 | v13[1];
      v13 += 2;
      ++v12;
    }
    while ( v12 <= 2 );
  }
  return v17;
}
