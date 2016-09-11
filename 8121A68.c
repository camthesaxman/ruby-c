int __fastcall sub_8121A68(int a1, char *a2)
{
  int v2; // r7@1
  char *v3; // r6@1
  signed int v4; // r5@1
  int v5; // r8@1
  unsigned int v6; // r1@2
  int v7; // r4@2
  const char *v8; // r1@4
  signed int v9; // r0@5
  int v10; // r1@12
  int v11; // r0@12
  int v12; // r1@17
  _BYTE *v13; // r0@17
  _BYTE *v14; // r1@25
  int v15; // r4@27
  int v17; // [sp+0h] [bp-24h]@19
  int v18; // [sp+20h] [bp-4h]@45

  v2 = a1;
  v3 = a2;
  v4 = 1;
  v5 = 0;
  *a2 = -1;
  while ( *(_BYTE *)(v2 + v4) != 255 )
  {
    v6 = *(_BYTE *)(v2 + v4);
    v7 = v2 + v4;
    if ( v6 <= 0xA )
    {
      switch ( v6 )
      {
        case 0u:
          v8 = (const char *)*(&gUnknown_08400F8C + (*(_BYTE *)(v4 + v2 + 1) | (*(_BYTE *)(v4 + v2 + 2) << 8)) - 12);
          goto _08121CE2;
        case 1u:
          v9 = *(_BYTE *)(v7 + 1);
          if ( v9 == 2 )
          {
            v10 = *(_BYTE *)(v7 + 3);
            v11 = *(_BYTE *)(v2 + v4 + 4) << 8;
_08121B22:
            v5 = v10 | v11;
            goto _08121B26;
          }
          if ( v9 > 2 )
          {
            if ( v9 != 4 )
              goto _08121B26;
            v10 = *(_BYTE *)(v2 + v4 + 3) | (*(_BYTE *)(v2 + v4 + 4) << 8) | (*(_BYTE *)(v2 + v4 + 5) << 16);
            v11 = *(_BYTE *)(v2 + v4 + 6) << 24;
            goto _08121B22;
          }
          if ( v9 == 1 )
            v5 = *(_BYTE *)(v7 + 3);
_08121B26:
          ConvertIntToDecimalStringN(v3, v5, 0, *(_BYTE *)(v4 + v2 + 2));
          v4 += 3 + *(_BYTE *)(v4 + v2 + 1);
          break;
        case 2u:
          v8 = &gMoveNames[13 * (*(_BYTE *)(v4 + v2 + 1) | (*(_BYTE *)(v4 + v2 + 2) << 8))];
          goto _08121CE2;
        case 3u:
          v12 = 7 * *(_BYTE *)(v4 + v2 + 1);
          v13 = gTypeNames;
          goto _08121C66;
        case 4u:
          if ( battle_side_get_owner(*(_BYTE *)(v2 + v4 + 1)) << 24 )
          {
            if ( v20239F8 & 8 )
              StringAppend(v3, &gUnknown_08400797);
            else
              StringAppend(v3, "ÑÝàØ");
            GetMonData((int)&unk_30045C0 + 100 * *(_BYTE *)(v4 + v2 + 2), 2, (int)&v17);
          }
          else
          {
            GetMonData((int)&dword_3004360[25 * *(_BYTE *)(v7 + 2)], 2, (int)&v17);
          }
          StringGetEnd10((int)&v17);
          StringAppend(v3, &v17);
          goto _08121D02;
        case 5u:
          v14 = *(&gUnknown_08400F58 + *(_BYTE *)(v4 + v2 + 1));
          goto _08121C68;
        case 6u:
          GetSpeciesName(v3, *(_BYTE *)(v4 + v2 + 1) | (unsigned __int16)(*(_BYTE *)(v4 + v2 + 2) << 8));
          goto _08121D02;
        case 7u:
          v15 = v4 + v2;
          if ( battle_side_get_owner(*(_BYTE *)(v4 + v2 + 1)) << 24 )
            GetMonData((int)&unk_30045C0 + 100 * *(_BYTE *)(v15 + 2), 2, (int)v3);
          else
            GetMonData((int)&dword_3004360[25 * *(_BYTE *)(v15 + 2)], 2, (int)v3);
          StringGetEnd10((int)v3);
          goto _08121D02;
        case 8u:
          v14 = *(&gUnknown_08400F78 + *(_BYTE *)(v4 + v2 + 1));
          goto _08121C68;
        case 9u:
          v12 = 13 * *(_BYTE *)(v4 + v2 + 1);
          v13 = &gAbilityNames;
_08121C66:
          v14 = &v13[v12];
_08121C68:
          StringAppend(v3, v14);
          v4 += 2;
          break;
        case 0xAu:
          if ( v20239F8 & 2 )
          {
            if ( (*(_BYTE *)(v4 + v2 + 1) | (*(_BYTE *)(v4 + v2 + 2) << 8)) == 175 )
            {
              if ( *((_WORD *)&gLinkPlayers + 14 * v20160CB + 12) == v2024C0B )
              {
                StringCopy(v3, (_BYTE *)(28 * v2024C0B + 33705456));
                v8 = (const char *)&gUnknown_08400A85;
              }
              else
              {
                v8 = "¿ÈÃÁÇ»";
              }
_08121CE2:
              StringAppend(v3, v8);
            }
            else
            {
              itemid_copy_name(*(_BYTE *)(v4 + v2 + 1) | (*(_BYTE *)(v4 + v2 + 2) << 8), v3);
            }
          }
          else
          {
            itemid_copy_name(*(_BYTE *)(v4 + v2 + 1) | (*(_BYTE *)(v4 + v2 + 2) << 8), v3);
          }
_08121D02:
          v4 += 3;
          break;
        default:
          break;
      }
    }
  }
  return v18;
}
