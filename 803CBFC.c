unsigned int __fastcall GetBoxMonData(unsigned int *a1, signed int a2, _BYTE *a3)
{
  int v3; // r8@1
  _BYTE *v4; // r7@1
  unsigned int v5; // r4@1
  int v6; // r9@1
  int v7; // r10@1
  int v8; // r6@1
  int v9; // r5@1
  unsigned int v10; // r4@12
  char v11; // r3@12
  _BYTE *v12; // r2@13
  char v13; // r0@19
  int v14; // r0@20
  int v15; // r0@21
  _BYTE *v16; // r2@23
  int v17; // r0@62
  _WORD *v18; // r2@94
  int *v19; // r1@94
  int v20; // r3@95
  unsigned int v21; // r1@104
  unsigned int v22; // r2@107
  unsigned int v23; // r1@107
  signed int v25; // [sp+0h] [bp-24h]@1

  v3 = (int)a1;
  v25 = a2;
  v4 = a3;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( a2 > 10 )
  {
    v6 = GetSubstruct((int)a1, *a1, 0);
    v7 = GetSubstruct(v3, *(_DWORD *)v3, 1u);
    v8 = GetSubstruct(v3, *(_DWORD *)v3, 2u);
    v9 = GetSubstruct(v3, *(_DWORD *)v3, 3u);
    DecryptBoxMon(v3);
    if ( (unsigned __int16)CalculateBoxMonChecksum((_DWORD *)v3) != *(_WORD *)(v3 + 28) )
    {
      *(_BYTE *)(v3 + 19) |= 5u;
      *(_BYTE *)(v9 + 7) |= 0x40u;
    }
  }
  if ( (unsigned int)v25 <= 0x52 )
  {
    switch ( v25 )
    {
      case 0:
        v5 = *(_DWORD *)v3;
        break;
      case 1:
        v5 = *(_DWORD *)(v3 + 4);
        break;
      case 2:
        if ( *(_BYTE *)(v3 + 19) & 1 )
        {
          StringCopy(v4, &gBadEggNickname);
        }
        else if ( *(_BYTE *)(v3 + 19) & 4 )
        {
          StringCopy(v4, &gEggNickname);
        }
        else
        {
          v10 = 0;
          v11 = *(_BYTE *)(v3 + 18);
          if ( *(_BYTE *)(v3 + 8) != 255 )
          {
            v12 = (_BYTE *)(v3 + 8);
            do
              v4[v10++] = *v12++;
            while ( v10 <= 9 && *v12 != 255 );
          }
          v4[v10] = -1;
          ConvertInternationalString((int)v4, v11);
        }
        v5 = StringLength(v4) & 0xFFFF;
        break;
      case 3:
        v5 = *(_BYTE *)(v3 + 18);
        break;
      case 4:
        v13 = *(_BYTE *)(v3 + 19);
        goto LABEL_80;
      case 5:
        v14 = *(_BYTE *)(v3 + 19);
        goto LABEL_82;
      case 6:
        v15 = *(_BYTE *)(v3 + 19);
        goto LABEL_84;
      case 7:
        v5 = 0;
        if ( *(_BYTE *)(v3 + 20) != 255 )
        {
          v16 = (_BYTE *)(v3 + 20);
          do
            v4[v5++] = *v16++;
          while ( v5 <= 6 && *v16 != 255 );
        }
        v4[v5] = -1;
        break;
      case 8:
        v5 = *(_BYTE *)(v3 + 27);
        break;
      case 9:
        v5 = *(_WORD *)(v3 + 28);
        break;
      case 10:
        v5 = *(_WORD *)(v3 + 30);
        break;
      case 11:
        v5 = 412;
        if ( !(*(_BYTE *)(v3 + 19) & 1) )
          v5 = *(_WORD *)v6;
        break;
      case 12:
        v5 = *(_WORD *)(v6 + 2);
        break;
      case 25:
        v5 = *(_DWORD *)(v6 + 4);
        break;
      case 21:
        v5 = *(_BYTE *)(v6 + 8);
        break;
      case 32:
        v5 = *(_BYTE *)(v6 + 9);
        break;
      case 13:
      case 14:
      case 15:
      case 16:
        v5 = *(_WORD *)(2 * (v25 - 13) + v7);
        break;
      case 17:
      case 18:
      case 19:
      case 20:
        v5 = *(_BYTE *)(v25 + v7 - 9);
        break;
      case 26:
        v5 = *(_BYTE *)v8;
        break;
      case 27:
        v5 = *(_BYTE *)(v8 + 1);
        break;
      case 28:
        v5 = *(_BYTE *)(v8 + 2);
        break;
      case 29:
        v5 = *(_BYTE *)(v8 + 3);
        break;
      case 30:
        v5 = *(_BYTE *)(v8 + 4);
        break;
      case 31:
        v5 = *(_BYTE *)(v8 + 5);
        break;
      case 22:
        v5 = *(_BYTE *)(v8 + 6);
        break;
      case 23:
        v5 = *(_BYTE *)(v8 + 7);
        break;
      case 24:
        v5 = *(_BYTE *)(v8 + 8);
        break;
      case 33:
        v5 = *(_BYTE *)(v8 + 9);
        break;
      case 47:
        v5 = *(_BYTE *)(v8 + 10);
        break;
      case 48:
        v5 = *(_BYTE *)(v8 + 11);
        break;
      case 34:
        v5 = *(_BYTE *)v9;
        break;
      case 35:
        v5 = *(_BYTE *)(v9 + 1);
        break;
      case 36:
        v5 = *(_BYTE *)(v9 + 2) & 0x7F;
        break;
      case 37:
        v5 = (unsigned int)*(_WORD *)(v9 + 2) << 21 >> 28;
        break;
      case 38:
        v5 = (unsigned int)*(_BYTE *)(v9 + 3) << 25 >> 28;
        break;
      case 49:
        v5 = (unsigned int)*(_BYTE *)(v9 + 3) >> 7;
        break;
      case 39:
        v5 = *(_BYTE *)(v9 + 4) & 0x1F;
        break;
      case 40:
        v5 = (unsigned int)*(_WORD *)(v9 + 4) << 22 >> 27;
        break;
      case 41:
        v5 = (unsigned int)*(_BYTE *)(v9 + 5) << 25 >> 27;
        break;
      case 42:
        v5 = *(_DWORD *)(v9 + 4) << 12 >> 27;
        break;
      case 43:
        v5 = (unsigned int)*(_WORD *)(v9 + 6) << 23 >> 27;
        break;
      case 44:
        v5 = (unsigned int)*(_BYTE *)(v9 + 7) << 26 >> 27;
        break;
      case 45:
        v17 = *(_BYTE *)(v9 + 7);
        goto LABEL_77;
      case 46:
        v5 = (unsigned int)*(_BYTE *)(v9 + 7) >> 7;
        break;
      case 50:
        v5 = *(_BYTE *)(v9 + 8) & 7;
        break;
      case 51:
        v5 = (unsigned int)*(_BYTE *)(v9 + 8) << 26 >> 29;
        break;
      case 52:
        v5 = (unsigned int)*(_WORD *)(v9 + 8) << 23 >> 29;
        break;
      case 53:
        v5 = (unsigned int)*(_BYTE *)(v9 + 9) << 28 >> 29;
        break;
      case 54:
        v5 = (unsigned int)*(_BYTE *)(v9 + 9) << 25 >> 29;
        break;
      case 67:
        v5 = (unsigned int)*(_BYTE *)(v9 + 9) >> 7;
        break;
      case 68:
        v13 = *(_BYTE *)(v9 + 10);
        goto LABEL_80;
      case 69:
        v14 = *(_BYTE *)(v9 + 10);
        goto LABEL_82;
      case 70:
        v15 = *(_BYTE *)(v9 + 10);
        goto LABEL_84;
      case 71:
        v5 = (unsigned int)*(_BYTE *)(v9 + 10) << 28 >> 31;
        break;
      case 72:
        v5 = (unsigned int)*(_BYTE *)(v9 + 10) << 27 >> 31;
        break;
      case 73:
        v5 = (unsigned int)*(_BYTE *)(v9 + 10) << 26 >> 31;
        break;
      case 74:
        v17 = *(_BYTE *)(v9 + 10);
LABEL_77:
        v5 = (unsigned int)(v17 << 25) >> 31;
        break;
      case 75:
        v5 = (unsigned int)*(_BYTE *)(v9 + 10) >> 7;
        break;
      case 76:
        v13 = *(_BYTE *)(v9 + 11);
LABEL_80:
        v5 = v13 & 1;
        break;
      case 77:
        v14 = *(_BYTE *)(v9 + 11);
LABEL_82:
        v5 = (unsigned int)(v14 << 30) >> 31;
        break;
      case 78:
        v15 = *(_BYTE *)(v9 + 11);
LABEL_84:
        v5 = (unsigned int)(v15 << 29) >> 31;
        break;
      case 79:
        v5 = (unsigned int)*(_BYTE *)(v9 + 11) >> 3;
        break;
      case 65:
        v5 = *(_WORD *)v6;
        if ( *(_WORD *)v6 && (*(_BYTE *)(v9 + 7) & 0x40 || *(_BYTE *)(v3 + 19) & 1) )
          v5 = 412;
        break;
      case 66:
        v5 = *(_BYTE *)(v9 + 4) & 0x1F | *(_WORD *)(v9 + 4) & 0x3E0 | ((unsigned int)*(_BYTE *)(v9 + 5) << 25 >> 27 << 10) | *(_DWORD *)(v9 + 4) & 0xF8000 | ((unsigned int)*(_WORD *)(v9 + 6) << 23 >> 27 << 20) | ((unsigned int)*(_BYTE *)(v9 + 7) << 26 >> 27 << 25);
        break;
      case 80:
        if ( *(_WORD *)v6 && !(*(_BYTE *)(v9 + 7) & 0x40) && *(_WORD *)v4 != 355 )
        {
          v18 = v4;
          v19 = gBitTable;
          do
          {
            v20 = *v18;
            if ( *(_WORD *)v7 == v20
              || *(_WORD *)(v7 + 2) == v20
              || *(_WORD *)(v7 + 4) == v20
              || *(_WORD *)(v7 + 6) == v20 )
            {
              v5 |= *v19;
            }
            ++v18;
            ++v19;
          }
          while ( *v18 != 355 );
        }
        break;
      case 81:
        v5 = 0;
        if ( *(_WORD *)v6 && !(*(_BYTE *)(v9 + 7) & 0x40) )
        {
          v21 = *(_BYTE *)(v9 + 10);
          v5 = (*(_BYTE *)(v9 + 8) & 7)
             + ((unsigned int)*(_BYTE *)(v9 + 8) << 26 >> 29)
             + ((unsigned int)*(_WORD *)(v9 + 8) << 23 >> 29)
             + ((unsigned int)*(_BYTE *)(v9 + 9) << 28 >> 29)
             + ((unsigned int)*(_BYTE *)(v9 + 9) << 25 >> 29)
             + ((unsigned int)*(_BYTE *)(v9 + 9) >> 7)
             + (v21 & 1)
             + (v21 << 30 >> 31)
             + (v21 << 29 >> 31)
             + (v21 << 28 >> 31)
             + (v21 << 27 >> 31)
             + (v21 << 26 >> 31)
             + (v21 << 25 >> 31)
             + (v21 >> 7)
             + (*(_BYTE *)(v9 + 11) & 1)
             + ((unsigned int)*(_BYTE *)(v9 + 11) << 30 >> 31)
             + ((unsigned int)*(_BYTE *)(v9 + 11) << 29 >> 31);
        }
        break;
      case 82:
        v5 = 0;
        if ( *(_WORD *)v6 && !(*(_BYTE *)(v9 + 7) & 0x40) )
        {
          v22 = *(_BYTE *)(v9 + 9);
          v23 = *(_BYTE *)(v9 + 10);
          v5 = (v22 >> 7) | 2 * *(_BYTE *)(v9 + 8) & 0xF | 16 * ((unsigned int)*(_BYTE *)(v9 + 8) << 26 >> 29) | ((unsigned int)*(_WORD *)(v9 + 8) << 23 >> 29 << 7) | (v22 << 28 >> 29 << 10) | (v22 << 25 >> 29 << 13) | ((v23 & 1) << 16) | (v23 << 30 >> 31 << 17) | (v23 << 29 >> 31 << 18) | (v23 << 28 >> 31 << 19) | (v23 << 27 >> 31 << 20) | (v23 << 26 >> 31 << 21) | (v23 << 25 >> 31 << 22) | (v23 >> 7 << 23) | ((*(_BYTE *)(v9 + 11) & 1) << 24) | ((unsigned int)*(_BYTE *)(v9 + 11) << 30 >> 31 << 25) | ((unsigned int)*(_BYTE *)(v9 + 11) << 29 >> 31 << 26);
        }
        break;
      default:
        break;
    }
  }
  if ( v25 > 10 )
    EncryptBoxMon(v3);
  return v5;
}
