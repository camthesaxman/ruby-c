int __fastcall sub_8144664(unsigned __int8 a1)
{
  int v1; // r5@1
  unsigned int v2; // r0@1
  int *v3; // r4@3
  __int16 v4; // r4@4
  int *v5; // r1@7
  __int16 v6; // r2@8
  char v7; // r0@9
  int *v8; // r2@10
  int *v9; // r4@15
  __int16 v10; // r1@15
  int *v11; // r0@19
  signed __int16 v12; // r1@19
  int *v13; // r1@20
  char *v14; // r0@20
  signed __int16 v15; // r2@20
  int *v16; // r2@23
  int v18; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = LOWORD(dword_3004B20[10 * a1 + 2]);
  if ( v2 <= 0x32 )
  {
    switch ( v2 )
    {
      case 0u:
        v3 = &dword_3004B20[10 * v1];
        v203935A = sine((*((_WORD *)v3 + 9) << 16 >> 17) & 0x7F, 12);
        goto _081447A8;
      case 1u:
        v4 = v203935A;
        if ( !v203935A )
        {
          v5 = &dword_3004B20[10 * v1];
          *(_WORD *)&gSprites[68 * *((_WORD *)v5 + 6) + 46] = 2;
          *((_WORD *)v5 + 9) = v4;
          goto _08144848;
        }
        v3 = &dword_3004B20[10 * v1];
        v203935A = sine((*((_WORD *)v3 + 9) << 16 >> 17) & 0x7F, 12);
_081447A8:
        ++*((_WORD *)v3 + 9);
        break;
      case 2u:
        v5 = &dword_3004B20[10 * v1];
        v6 = *((_WORD *)v5 + 9);
        if ( (signed int)*((_WORD *)v5 + 9) > 63 )
          goto _08144848;
        v7 = v6 + 1;
        *((_WORD *)v5 + 9) = v6 + 1;
        goto _08144866;
      case 3u:
        v8 = &dword_3004B20[10 * v1];
        *(_WORD *)&gSprites[68 * *((_WORD *)v8 + 6) + 46] = 3;
        *(_WORD *)&gSprites[68 * *((_WORD *)v8 + 7) + 46] = 1;
        *((_WORD *)v8 + 8) = 120;
        ++*((_WORD *)v8 + 4);
        return v18;
      case 4u:
        v5 = &dword_3004B20[10 * v1];
        if ( *((_WORD *)v5 + 8) )
        {
          --*((_WORD *)v5 + 8);
        }
        else
        {
          *((_WORD *)v5 + 9) = 64;
_08144848:
          ++*((_WORD *)v5 + 4);
        }
        break;
      case 5u:
        v9 = &dword_3004B20[10 * v1];
        v10 = *((_WORD *)v9 + 9);
        if ( (signed int)*((_WORD *)v9 + 9) <= 0 )
        {
          *(_WORD *)&gSprites[68 * *((_WORD *)v9 + 6) + 46] = 1;
          ++*((_WORD *)v9 + 4);
        }
        else
        {
          v7 = v10 - 1;
          *((_WORD *)v9 + 9) = v10 - 1;
_08144866:
          v203935A = sine(v7 & 0x7F, 20);
        }
        return v18;
      case 6u:
        v11 = &dword_3004B20[10 * v1];
        v12 = 50;
        goto _0814492A;
      case 0xAu:
        v13 = &dword_3004B20[10 * v1];
        v14 = &gSprites[68 * *((_WORD *)v13 + 7)];
        v15 = 2;
        goto _081448E0;
      case 0x14u:
        v13 = &dword_3004B20[10 * v1];
        v14 = &gSprites[68 * *((_WORD *)v13 + 6)];
        v15 = 4;
_081448E0:
        *((_WORD *)v14 + 23) = v15;
        *((_WORD *)v13 + 4) = 50;
        return v18;
      case 0x1Eu:
        v16 = &dword_3004B20[10 * v1];
        *(_WORD *)&gSprites[68 * *((_WORD *)v16 + 6) + 46] = 5;
        *(_WORD *)&gSprites[68 * *((_WORD *)v16 + 7) + 46] = 3;
        *((_WORD *)v16 + 4) = 50;
        return v18;
      case 0x32u:
        v11 = &dword_3004B20[10 * v1];
        v12 = 0;
_0814492A:
        *((_WORD *)v11 + 4) = v12;
        return v18;
      default:
        return v18;
    }
  }
  return v18;
}
