signed int __fastcall sub_8018018(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // r4@1
  int v4; // r10@1
  int v5; // r9@1
  signed int result; // r0@2
  int v7; // r7@4
  char *v8; // r8@4
  int v9; // r6@6
  int v10; // r5@6
  int v11; // r7@8
  signed int v12; // r1@13
  int v13; // r7@17
  int v14; // r6@17
  char *v15; // r8@17
  signed int v16; // r5@23

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( v20239F8 & 1 )
  {
    if ( v20239F8 & 0x40 )
    {
      v7 = (unsigned __int8)sub_803FC34(a1);
      v8 = (char *)&unk_30045C0;
      if ( !(battle_side_get_owner(v3) << 24) )
        v8 = (char *)&unk_3004360;
      v9 = (unsigned __int8)sub_803FBFC(v7);
      v10 = 3 * v9;
      if ( __OFSUB__(v10, v10 + 3) ^ 1 )
      {
        v11 = v10 + 3;
        do
        {
          if ( GetMonData(&v8[100 * v10], 57) && GetMonData(&v8[100 * v10], 65) && GetMonData(&v8[100 * v10], 65) != 412 )
            break;
          ++v10;
        }
        while ( v10 < v11 );
      }
      v12 = 0;
      if ( v10 == 3 * v9 + 3 )
        v12 = 1;
      result = v12;
    }
    else
    {
      if ( (unsigned __int8)battle_side_get_owner(a1) == 1 )
      {
        v13 = (unsigned __int8)battle_get_side_with_given_state(1);
        v14 = battle_get_side_with_given_state(3) & 0xFF;
        v15 = (char *)&unk_30045C0;
      }
      else
      {
        v13 = (unsigned __int8)battle_get_side_with_given_state(0);
        v14 = battle_get_side_with_given_state(2) & 0xFF;
        v15 = (char *)&unk_3004360;
      }
      if ( v4 == 6 )
        v4 = *(_BYTE *)(2 * v13 + 0x2024A6A);
      if ( v5 == 6 )
        v5 = *(_BYTE *)(2 * v14 + 0x2024A6A);
      v16 = 0;
      do
      {
        if ( GetMonData(&v15[100 * v16], 57)
          && GetMonData(&v15[100 * v16], 65)
          && GetMonData(&v15[100 * v16], 65) != 412
          && v16 != v4
          && v16 != v5
          && v16 != *(_BYTE *)(v13 + 33644648)
          && v16 != *(_BYTE *)(v14 + 33644648) )
        {
          break;
        }
        ++v16;
      }
      while ( v16 <= 5 );
      result = 0;
      if ( v16 == 6 )
        result = 1;
    }
  }
  else
  {
    result = 0;
  }
  return result;
}
