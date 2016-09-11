int __fastcall SetBoxMonData(unsigned int *a1, signed int a2, int a3)
{
  int v3; // r7@1
  signed int v4; // r10@1
  int v5; // r4@1
  int v6; // r8@1
  int v7; // r9@1
  int v8; // r6@1
  int v9; // r5@1
  signed int v10; // r2@8
  char v11; // r1@12
  char v12; // r0@12
  signed int v13; // r2@15
  int v14; // r1@21
  char v15; // r1@23
  char v16; // r0@23
  int v17; // r0@53
  int v18; // r0@54
  char v19; // r1@60
  char v20; // r2@60
  char v21; // r0@60
  char v22; // r1@64
  char v23; // r2@64
  char v24; // r0@64
  char v25; // r1@68
  char v26; // r2@68
  char v27; // r0@68
  char v28; // r1@77
  char v29; // r2@77
  char v30; // r0@77
  unsigned int v31; // r1@82
  int v33; // [sp+1Ch] [bp-4h]@0

  v3 = (int)a1;
  v4 = a2;
  v5 = a3;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( a2 <= 10
    || (v6 = GetSubstruct((int)a1, *a1, 0),
        v7 = GetSubstruct(v3, *(_DWORD *)v3, 1u),
        v8 = GetSubstruct(v3, *(_DWORD *)v3, 2u),
        v9 = GetSubstruct(v3, *(_DWORD *)v3, 3u),
        DecryptBoxMon(v3),
        (unsigned __int16)CalculateBoxMonChecksum((_DWORD *)v3) == *(_WORD *)(v3 + 28)) )
  {
    if ( (unsigned int)v4 <= 0x4F )
    {
      switch ( v4 )
      {
        case 0:
          *(_DWORD *)v3 = *(_BYTE *)v5
                        + (*(_BYTE *)(v5 + 1) << 8)
                        + (*(_BYTE *)(v5 + 2) << 16)
                        + (*(_BYTE *)(v5 + 3) << 24);
          break;
        case 1:
          *(_DWORD *)(v3 + 4) = *(_BYTE *)v5
                              + (*(_BYTE *)(v5 + 1) << 8)
                              + (*(_BYTE *)(v5 + 2) << 16)
                              + (*(_BYTE *)(v5 + 3) << 24);
          break;
        case 2:
          v10 = 0;
          do
          {
            *(_BYTE *)(v3 + 8 + v10) = *(_BYTE *)(v5 + v10);
            ++v10;
          }
          while ( v10 <= 9 );
          break;
        case 3:
          *(_BYTE *)(v3 + 18) = *(_BYTE *)v5;
          break;
        case 4:
          v11 = *(_BYTE *)v5 & 1;
          v12 = *(_BYTE *)(v3 + 19) & 0xFE;
          goto LABEL_56;
        case 5:
          v11 = 2 * (*(_BYTE *)v5 & 1);
          v12 = *(_BYTE *)(v3 + 19) & 0xFD;
          goto LABEL_56;
        case 6:
          v11 = 4 * (*(_BYTE *)v5 & 1);
          v12 = *(_BYTE *)(v3 + 19) & 0xFB;
          goto LABEL_56;
        case 7:
          v13 = 0;
          do
          {
            *(_BYTE *)(v3 + 20 + v13) = *(_BYTE *)(v5 + v13);
            ++v13;
          }
          while ( v13 <= 6 );
          break;
        case 8:
          *(_BYTE *)(v3 + 27) = *(_BYTE *)v5;
          break;
        case 9:
          *(_WORD *)(v3 + 28) = *(_BYTE *)v5 + (*(_BYTE *)(v5 + 1) << 8);
          break;
        case 10:
          *(_WORD *)(v3 + 30) = *(_BYTE *)v5 + (*(_BYTE *)(v5 + 1) << 8);
          break;
        case 11:
          v14 = *(_BYTE *)v5 + (*(_BYTE *)(v5 + 1) << 8);
          *(_WORD *)v6 = v14;
          if ( v14 << 16 )
          {
            v12 = *(_BYTE *)(v3 + 19);
            v11 = 2;
            goto LABEL_56;
          }
          v15 = *(_BYTE *)(v3 + 19);
          v16 = -3;
          goto LABEL_58;
        case 12:
          *(_WORD *)(v6 + 2) = *(_BYTE *)v5 + (*(_BYTE *)(v5 + 1) << 8);
          break;
        case 25:
          *(_DWORD *)(v6 + 4) = *(_BYTE *)v5
                              + (*(_BYTE *)(v5 + 1) << 8)
                              + (*(_BYTE *)(v5 + 2) << 16)
                              + (*(_BYTE *)(v5 + 3) << 24);
          break;
        case 21:
          *(_BYTE *)(v6 + 8) = *(_BYTE *)v5;
          break;
        case 32:
          *(_BYTE *)(v6 + 9) = *(_BYTE *)v5;
          break;
        case 13:
        case 14:
        case 15:
        case 16:
          *(_WORD *)(2 * (v4 - 13) + v7) = *(_BYTE *)v5 + (*(_BYTE *)(v5 + 1) << 8);
          break;
        case 17:
        case 18:
        case 19:
        case 20:
          *(_BYTE *)(v7 + v4 - 9) = *(_BYTE *)v5;
          break;
        case 26:
          *(_BYTE *)v8 = *(_BYTE *)v5;
          break;
        case 27:
          *(_BYTE *)(v8 + 1) = *(_BYTE *)v5;
          break;
        case 28:
          *(_BYTE *)(v8 + 2) = *(_BYTE *)v5;
          break;
        case 29:
          *(_BYTE *)(v8 + 3) = *(_BYTE *)v5;
          break;
        case 30:
          *(_BYTE *)(v8 + 4) = *(_BYTE *)v5;
          break;
        case 31:
          *(_BYTE *)(v8 + 5) = *(_BYTE *)v5;
          break;
        case 22:
          *(_BYTE *)(v8 + 6) = *(_BYTE *)v5;
          break;
        case 23:
          *(_BYTE *)(v8 + 7) = *(_BYTE *)v5;
          break;
        case 24:
          *(_BYTE *)(v8 + 8) = *(_BYTE *)v5;
          break;
        case 33:
          *(_BYTE *)(v8 + 9) = *(_BYTE *)v5;
          break;
        case 47:
          *(_BYTE *)(v8 + 10) = *(_BYTE *)v5;
          break;
        case 48:
          *(_BYTE *)(v8 + 11) = *(_BYTE *)v5;
          break;
        case 34:
          *(_BYTE *)v9 = *(_BYTE *)v5;
          break;
        case 35:
          *(_BYTE *)(v9 + 1) = *(_BYTE *)v5;
          break;
        case 36:
          *(_BYTE *)(v9 + 2) = *(_BYTE *)(v9 + 2) & 0x80 | *(_BYTE *)v5 & 0x7F;
          break;
        case 37:
          *(_WORD *)(v9 + 2) = *(_WORD *)(v9 + 2) & 0xF87F | ((*(_BYTE *)v5 & 0xF) << 7);
          break;
        case 38:
          *(_BYTE *)(v9 + 3) = *(_BYTE *)(v9 + 3) & 0x87 | 8 * (*(_BYTE *)v5 & 0xF);
          break;
        case 49:
          *(_BYTE *)(v9 + 3) = *(_BYTE *)(v9 + 3) & 0x7F | (*(_BYTE *)v5 << 7);
          break;
        case 39:
          *(_BYTE *)(v9 + 4) = *(_BYTE *)(v9 + 4) & 0xE0 | *(_BYTE *)v5 & 0x1F;
          break;
        case 40:
          *(_WORD *)(v9 + 4) = *(_WORD *)(v9 + 4) & 0xFC1F | 32 * (*(_BYTE *)v5 & 0x1F);
          break;
        case 41:
          *(_BYTE *)(v9 + 5) = *(_BYTE *)(v9 + 5) & 0x83 | 4 * (*(_BYTE *)v5 & 0x1F);
          break;
        case 42:
          *(_DWORD *)(v9 + 4) = *(_DWORD *)(v9 + 4) & 0xFFF07FFF | ((*(_BYTE *)v5 & 0x1F) << 15);
          break;
        case 43:
          *(_WORD *)(v9 + 6) = *(_WORD *)(v9 + 6) & 0xFE0F | 16 * (*(_BYTE *)v5 & 0x1F);
          break;
        case 44:
          v17 = (unsigned __int8)(*(_BYTE *)(v9 + 7) & 0xC1) | 2 * (*(_BYTE *)v5 & 0x1F);
          goto LABEL_83;
        case 45:
          v18 = (unsigned __int8)(*(_BYTE *)(v9 + 7) & 0xBF) | ((*(_BYTE *)v5 & 1) << 6);
          *(_BYTE *)(v9 + 7) = v18;
          if ( v18 & 0x40 )
          {
            v12 = *(_BYTE *)(v3 + 19);
            v11 = 4;
LABEL_56:
            *(_BYTE *)(v3 + 19) = v12 | v11;
          }
          else
          {
            v15 = *(_BYTE *)(v3 + 19);
            v16 = -5;
LABEL_58:
            *(_BYTE *)(v3 + 19) = v16 & v15;
          }
          break;
        case 46:
          *(_BYTE *)(v9 + 7) = *(_BYTE *)(v9 + 7) & 0x7F | (*(_BYTE *)v5 << 7);
          break;
        case 50:
          v19 = *(_BYTE *)v5 & 7;
          v20 = *(_BYTE *)(v9 + 8);
          v21 = -8;
          goto LABEL_62;
        case 51:
          v19 = 8 * (*(_BYTE *)v5 & 7);
          v20 = *(_BYTE *)(v9 + 8);
          v21 = -57;
LABEL_62:
          *(_BYTE *)(v9 + 8) = v21 & v20 | v19;
          break;
        case 52:
          *(_WORD *)(v9 + 8) = *(_WORD *)(v9 + 8) & 0xFE3F | ((*(_BYTE *)v5 & 7) << 6);
          break;
        case 53:
          v22 = 2 * (*(_BYTE *)v5 & 7);
          v23 = *(_BYTE *)(v9 + 9);
          v24 = -15;
          goto LABEL_66;
        case 54:
          v22 = 16 * (*(_BYTE *)v5 & 7);
          v23 = *(_BYTE *)(v9 + 9);
          v24 = -113;
LABEL_66:
          *(_BYTE *)(v9 + 9) = v24 & v23 | v22;
          break;
        case 67:
          *(_BYTE *)(v9 + 9) = *(_BYTE *)(v9 + 9) & 0x7F | (*(_BYTE *)v5 << 7);
          break;
        case 68:
          v25 = *(_BYTE *)v5 & 1;
          v26 = *(_BYTE *)(v9 + 10);
          v27 = -2;
          goto LABEL_75;
        case 69:
          v25 = 2 * (*(_BYTE *)v5 & 1);
          v26 = *(_BYTE *)(v9 + 10);
          v27 = -3;
          goto LABEL_75;
        case 70:
          v25 = 4 * (*(_BYTE *)v5 & 1);
          v26 = *(_BYTE *)(v9 + 10);
          v27 = -5;
          goto LABEL_75;
        case 71:
          v25 = 8 * (*(_BYTE *)v5 & 1);
          v26 = *(_BYTE *)(v9 + 10);
          v27 = -9;
          goto LABEL_75;
        case 72:
          v25 = 16 * (*(_BYTE *)v5 & 1);
          v26 = *(_BYTE *)(v9 + 10);
          v27 = -17;
          goto LABEL_75;
        case 73:
          v25 = 32 * (*(_BYTE *)v5 & 1);
          v26 = *(_BYTE *)(v9 + 10);
          v27 = -33;
          goto LABEL_75;
        case 74:
          v25 = (*(_BYTE *)v5 & 1) << 6;
          v26 = *(_BYTE *)(v9 + 10);
          v27 = -65;
LABEL_75:
          *(_BYTE *)(v9 + 10) = v27 & v26 | v25;
          break;
        case 75:
          *(_BYTE *)(v9 + 10) = *(_BYTE *)(v9 + 10) & 0x7F | (*(_BYTE *)v5 << 7);
          break;
        case 76:
          v28 = *(_BYTE *)v5 & 1;
          v29 = *(_BYTE *)(v9 + 11);
          v30 = -2;
          goto LABEL_80;
        case 77:
          v28 = 2 * (*(_BYTE *)v5 & 1);
          v29 = *(_BYTE *)(v9 + 11);
          v30 = -3;
          goto LABEL_80;
        case 78:
          v28 = 4 * (*(_BYTE *)v5 & 1);
          v29 = *(_BYTE *)(v9 + 11);
          v30 = -5;
LABEL_80:
          *(_BYTE *)(v9 + 11) = v30 & v29 | v28;
          break;
        case 79:
          *(_BYTE *)(v9 + 11) = *(_BYTE *)(v9 + 11) & 7 | 8 * *(_BYTE *)v5;
          break;
        case 66:
          v31 = *(_BYTE *)v5;
          *(_BYTE *)(v9 + 4) = *(_BYTE *)(v9 + 4) & 0xE0 | v31 & 0x1F;
          *(_WORD *)(v9 + 4) = *(_WORD *)(v9 + 4) & 0xFC1F | 32 * ((v31 >> 5) & 0x1F);
          *(_BYTE *)(v9 + 5) &= 0x83u;
          *(_DWORD *)(v9 + 4) &= 0xFFF07FFF;
          *(_WORD *)(v9 + 6) &= 0xFE0Fu;
          LOBYTE(v17) = *(_BYTE *)(v9 + 7) & 0xC1;
LABEL_83:
          *(_BYTE *)(v9 + 7) = v17;
          break;
        default:
          break;
      }
    }
    if ( v4 > 10 )
    {
      *(_WORD *)(v3 + 28) = CalculateBoxMonChecksum((_DWORD *)v3);
      EncryptBoxMon(v3);
    }
  }
  else
  {
    *(_BYTE *)(v3 + 19) |= 5u;
    *(_BYTE *)(v9 + 7) |= 0x40u;
    EncryptBoxMon(v3);
  }
  return v33;
}
