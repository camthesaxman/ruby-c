int sub_8026590()
{
  char *v0; // r8@3
  unsigned int v1; // r7@6
  signed int v2; // r6@6
  unsigned __int8 v3; // r0@6
  int v4; // r5@8
  unsigned int v5; // r5@16
  int v6; // r0@29
  unsigned int v7; // r6@30
  unsigned __int8 v8; // r0@30
  unsigned int v9; // r5@31
  int v10; // r0@39
  int v12; // [sp+14h] [bp-4h]@0

  if ( v20239F8 & 8 )
  {
    v0 = (char *)&unk_30045C0;
    if ( !(battle_side_get_owner(v2024C08) << 24) )
      v0 = (char *)&unk_3004360;
    if ( v20239F8 & 0x40 )
    {
      v1 = 0;
      v2 = 0;
      v3 = sub_803FC34(v2024C08);
      if ( (unsigned __int16)sub_803FBFC(v3) == 1 )
        v2 = 3;
      v4 = v2;
      if ( __OFSUB__(v2, v2 + 3) ^ 1 )
      {
        do
        {
          if ( GetMonData(&v0[100 * v4], 11) && !GetMonData(&v0[100 * v4], 45) && GetMonData(&v0[100 * v4], 57) )
            v1 = (v1 + 1) & 0xFF;
          v4 = (v4 + 1) & 0xFF;
        }
        while ( v4 < v2 + 3 );
      }
    }
    else
    {
      v1 = 0;
      v5 = 0;
      do
      {
        if ( GetMonData(&v0[100 * v5], 11) && !GetMonData(&v0[100 * v5], 45) && GetMonData(&v0[100 * v5], 57) )
          v1 = (v1 + 1) & 0xFF;
        v5 = (v5 + 1) & 0xFF;
      }
      while ( v5 <= 5 );
    }
    if ( (v1 > 1 || (v20239F8 & 0x41) == 1) && (v1 > 2 || !(v20239F8 & 1) || v20239F8 & 0x40) )
    {
      if ( sub_80264C0() << 24 )
      {
        v6 = v20239F8 & 0x40;
        if ( v20239F8 & 0x40 )
        {
          while ( 1 )
          {
            v7 = (unsigned __int16)Random(v6) % 3u & 0xFF;
            v8 = sub_803FC34(v2024C08);
            if ( (unsigned __int16)sub_803FBFC(v8) == 1 )
              v9 = (v7 + 3) & 0xFF;
            else
              v9 = v7;
            v6 = v9 << 16;
            if ( (unsigned __int16)v9 != *(_WORD *)(2 * v2024C08 + 0x2024A6A) )
            {
              v6 = *(_WORD *)(2 * (v2024C08 ^ 2) + 0x2024A6A);
              if ( (unsigned __int16)v9 != v6 )
              {
                v6 = GetMonData(&v0[100 * v9], 11);
                if ( v6 )
                {
                  v6 = GetMonData(&v0[100 * v9], 45);
                  if ( v6 != 1 )
                  {
                    v6 = GetMonData(&v0[100 * v9], 57);
                    if ( v6 )
                      break;
                  }
                }
              }
            }
          }
        }
        else
        {
          v10 = v20239F8 & 1;
          if ( v20239F8 & 1 )
          {
            while ( 1 )
            {
              do
              {
                v9 = (unsigned __int16)Random(v10) % 6u & 0xFF;
                v10 = *(_WORD *)(2 * v2024C08 + 0x2024A6A);
              }
              while ( v9 == v10 );
              v10 = *(_WORD *)(2 * (v2024C08 ^ 2) + 0x2024A6A);
              if ( v9 != v10 )
              {
                v10 = GetMonData(&v0[100 * v9], 11);
                if ( v10 )
                {
                  v10 = GetMonData(&v0[100 * v9], 45);
                  if ( v10 != 1 )
                  {
                    v10 = GetMonData(&v0[100 * v9], 57);
                    if ( v10 )
                      break;
                  }
                }
              }
            }
          }
          else
          {
            while ( 1 )
            {
              do
              {
                v9 = (unsigned __int16)Random(v10) % 6u & 0xFF;
                v10 = *(_WORD *)(2 * v2024C08 + 0x2024A6A);
              }
              while ( v9 == v10 );
              v10 = GetMonData(&v0[100 * v9], 11);
              if ( v10 )
              {
                v10 = GetMonData(&v0[100 * v9], 45);
                if ( v10 != 1 )
                {
                  v10 = GetMonData(&v0[100 * v9], 57);
                  if ( v10 )
                    break;
                }
              }
            }
          }
        }
        *(_BYTE *)(v2024C08 + 0x2016068) = v9;
        if ( !(sub_806B528() << 24) )
          sub_8012258(v2024C08);
        sub_8094B6C(v2024C08, v9, 0);
        sub_8094B6C(v2024C08 ^ 2, v9, 1);
      }
    }
    else
    {
      v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
    }
  }
  else
  {
    sub_80264C0();
  }
  return v12;
}
