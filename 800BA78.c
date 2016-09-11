int sub_800BA78()
{
  char v0; // r0@3
  int v1; // r5@10
  int v2; // r10@12
  char *v3; // r12@12
  int v4; // r4@12
  signed int v5; // r0@13
  signed int v6; // r1@21
  int v7; // r0@26
  int v8; // r0@27
  char *v9; // r2@32
  signed int v10; // r1@32
  signed int v11; // r0@39
  int v13; // [sp+1Ch] [bp-4h]@0

  if ( v20239F8 & 1 )
  {
    if ( (v20239F8 & 0x41) == 1 )
    {
      if ( v20239F8 & 4 )
      {
        dword_30042D4 = (int)sub_8010800;
        dword_3004330[0] = (int)sub_802BF74;
        v2024A72 = 0;
        dword_3004334 = (int)sub_8037510;
        v2024A73 = 1;
        dword_3004338 = (int)sub_802BF74;
        v2024A74 = 2;
        dword_300433C = (int)sub_8037510;
        v2024A75 = 3;
      }
      else
      {
        dword_3004334 = (int)sub_802BF74;
        v2024A73 = 0;
        dword_3004330[0] = (int)sub_8037510;
        v2024A72 = 1;
        dword_300433C = (int)sub_802BF74;
        v2024A75 = 2;
        dword_3004338 = (int)sub_8037510;
        v2024A74 = 3;
      }
      v2024A68 = 4;
      return v13;
    }
    v1 = (unsigned __int8)GetMultiplayerId();
    if ( v20239F8 & 4 )
      dword_30042D4 = (int)sub_8010800;
    v2 = 0;
    v3 = (char *)&gLinkPlayers;
    v4 = 0;
    while ( 1 )
    {
      v5 = *(_WORD *)&v3[v4 + 24];
      if ( v5 > 2 )
        break;
      if ( v5 >= 1 )
      {
        sub_8094978((unsigned __int8)v5, 1);
      }
      else if ( !*(_WORD *)&v3[v4 + 24] )
      {
        goto _0800BBE8;
      }
_0800BC06:
      if ( v2 == v1 )
      {
        dword_3004330[*(_WORD *)((char *)&gLinkPlayers + v4 + 24)] = (int)sub_802BF74;
        v6 = *(_WORD *)((char *)&gLinkPlayers + v4 + 24);
        v3 = (char *)&gLinkPlayers;
        if ( v6 <= 2 )
        {
          if ( v6 >= 1 )
          {
            *(_BYTE *)(*(_WORD *)((char *)&gLinkPlayers + v4 + 24) + 0x2024A72) = 2;
            v8 = *(_WORD *)((char *)&gLinkPlayers + v4 + 24);
            goto _0800BD24;
          }
          if ( *(_WORD *)((char *)&gLinkPlayers + v4 + 24) )
            goto _0800BD2C;
_0800BC3C:
          *(_BYTE *)(*(_WORD *)((char *)&gLinkPlayers + v4 + 24) + 0x2024A72) = 0;
          v7 = *(_WORD *)((char *)&gLinkPlayers + v4 + 24);
          goto _0800BD12;
        }
        if ( v6 == 3 )
          goto _0800BC3C;
        goto _0800BD2C;
      }
      v3 = (char *)&gLinkPlayers;
      if ( *(_WORD *)((char *)&gLinkPlayers + v4 + 24) & 1 )
      {
        if ( !(*((_WORD *)&gLinkPlayers + 14 * v1 + 12) & 1) )
        {
_0800BCD8:
          v9 = (char *)&gLinkPlayers + v4;
          dword_3004330[*(_WORD *)((char *)&gLinkPlayers + v4 + 24)] = (int)sub_8037510;
          v11 = *(_WORD *)((char *)&gLinkPlayers + v4 + 24);
          if ( v11 <= 2 )
          {
            if ( v11 >= 1 )
            {
              *(_BYTE *)(*(_WORD *)((char *)&gLinkPlayers + v4 + 24) + 0x2024A72) = 3;
_0800BD22:
              v8 = *((_WORD *)v9 + 12);
_0800BD24:
              *(_WORD *)(2 * v8 + 0x2024A6A) = 3;
              goto _0800BD2C;
            }
            if ( *(_WORD *)((char *)&gLinkPlayers + v4 + 24) )
              goto _0800BD2C;
_0800BD04:
            *(_BYTE *)(*(_WORD *)((char *)&gLinkPlayers + v4 + 24) + 0x2024A72) = 1;
            v7 = *(_WORD *)((char *)&gLinkPlayers + v4 + 24);
_0800BD12:
            *(_WORD *)(2 * v7 + 0x2024A6A) = 0;
            goto _0800BD2C;
          }
          if ( v11 == 3 )
            goto _0800BD04;
          goto _0800BD2C;
        }
      }
      else if ( *((_WORD *)&gLinkPlayers + 14 * v1 + 12) & 1 )
      {
        goto _0800BCD8;
      }
      v9 = (char *)&gLinkPlayers + v4;
      dword_3004330[*(_WORD *)((char *)&gLinkPlayers + v4 + 24)] = (int)sub_811DA78;
      v10 = *(_WORD *)((char *)&gLinkPlayers + v4 + 24);
      if ( v10 <= 2 )
      {
        if ( v10 >= 1 )
        {
          *(_BYTE *)(*(_WORD *)((char *)&gLinkPlayers + v4 + 24) + 0x2024A72) = 2;
          goto _0800BD22;
        }
        if ( *(_WORD *)((char *)&gLinkPlayers + v4 + 24) )
          goto _0800BD2C;
_0800BCC0:
        *(_BYTE *)(*(_WORD *)((char *)&gLinkPlayers + v4 + 24) + 0x2024A72) = 0;
        v7 = *(_WORD *)((char *)&gLinkPlayers + v4 + 24);
        goto _0800BD12;
      }
      if ( v10 == 3 )
        goto _0800BCC0;
_0800BD2C:
      v4 += 28;
      if ( ++v2 > 3 )
      {
        v0 = 4;
        goto _0800BD3E;
      }
    }
    if ( v5 != 3 )
      goto _0800BC06;
_0800BBE8:
    sub_8094978(*((_BYTE *)&gLinkPlayers + v4 + 24), 0);
    goto _0800BC06;
  }
  if ( v20239F8 & 4 )
  {
    dword_30042D4 = (int)sub_8010800;
    dword_3004330[0] = (int)sub_802BF74;
    v2024A72 = 0;
    dword_3004334 = (int)sub_8037510;
    v2024A73 = 1;
    v0 = 2;
  }
  else
  {
    dword_3004334 = (int)sub_802BF74;
    v2024A73 = 0;
    dword_3004330[0] = (int)sub_8037510;
    v2024A72 = 1;
    v0 = 2;
  }
_0800BD3E:
  v2024A68 = v0;
  return v13;
}
