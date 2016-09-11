int __fastcall dp01_getattr_by_ch1_for_player_pokemon__(unsigned __int8 a1, _BYTE *a2)
{
  _BYTE *v2; // r7@1
  int v3; // r5@1
  unsigned int v4; // r6@1
  unsigned int v5; // r0@1
  signed int v6; // r6@3
  char *v7; // r8@3
  char *v8; // r4@3
  char *v9; // r4@5
  char v10; // r0@5
  char v11; // r0@5
  char v12; // r0@5
  char v13; // r0@5
  char v14; // r0@5
  char v15; // r0@5
  char v16; // r0@5
  char v17; // r0@5
  char v18; // r0@5
  char v19; // r0@5
  char *v20; // r0@8
  int v21; // r1@8
  signed int v22; // r6@10
  char *v23; // r8@10
  signed int v24; // r6@16
  char *v25; // r0@19
  int v26; // r1@19
  char *v27; // r0@20
  signed int v28; // r1@20
  int v29; // r0@22
  char *v30; // r0@42
  signed int v31; // r1@42
  int v32; // r0@45
  __int16 v33; // r0@54
  __int16 v35; // [sp+0h] [bp-B0h]@3
  __int16 v36; // [sp+2h] [bp-AEh]@5
  __int16 v37; // [sp+4h] [bp-ACh]@5
  __int16 v38; // [sp+6h] [bp-AAh]@5
  __int16 v39; // [sp+8h] [bp-A8h]@5
  __int16 v40; // [sp+Ah] [bp-A6h]@5
  char v41; // [sp+Ch] [bp-A4h]@3
  unsigned int v42; // [sp+14h] [bp-9Ch]@5
  char v43[4]; // [sp+24h] [bp-8Ch]@4
  __int16 v44; // [sp+28h] [bp-88h]@5
  __int16 v45; // [sp+2Ah] [bp-86h]@3
  char v46; // [sp+2Bh] [bp-85h]@3
  __int16 v47; // [sp+2Ch] [bp-84h]@5
  __int16 v48; // [sp+2Eh] [bp-82h]@3
  int v49; // [sp+30h] [bp-80h]@3
  char v50; // [sp+3Bh] [bp-75h]@5
  int v51; // [sp+3Ch] [bp-74h]@3
  int v52; // [sp+44h] [bp-6Ch]@5
  int v53; // [sp+48h] [bp-68h]@5
  int v54; // [sp+4Ch] [bp-64h]@5
  int v55; // [sp+54h] [bp-5Ch]@5
  char v56[8]; // [sp+58h] [bp-58h]@10
  char v57[28]; // [sp+60h] [bp-50h]@11
  char v58; // [sp+64h] [bp-4Ch]@12
  char v59[28]; // [sp+68h] [bp-48h]@3
  __int16 *v60; // [sp+7Ch] [bp-34h]@3
  char *v61; // [sp+80h] [bp-30h]@3
  int *v62; // [sp+84h] [bp-2Ch]@3
  int *v63; // [sp+88h] [bp-28h]@3
  char *v64; // [sp+8Ch] [bp-24h]@3

  v2 = a2;
  v3 = a1;
  v4 = 0;
  v5 = *(_BYTE *)((v2024A60 << 9) + 0x2023A61);
  if ( v5 <= 0x3B )
  {
    switch ( v5 )
    {
      case 0u:
        v35 = GetMonData((char *)&unk_30045C0 + 100 * v3, 11);
        v48 = GetMonData((char *)&unk_30045C0 + 100 * v3, 12);
        v6 = 0;
        v61 = &v46;
        v60 = &v45;
        v64 = v59;
        v62 = &v49;
        v63 = &v51;
        v7 = (char *)&unk_30045C0 + 100 * v3;
        v8 = &v41;
        do
        {
          *(_WORD *)v8 = GetMonData(v7, v6 + 13);
          v43[v6] = GetMonData(v7, v6 + 17);
          v8 += 2;
          ++v6;
        }
        while ( v6 <= 3 );
        v9 = (char *)&unk_30045C0 + 100 * v3;
        v50 = GetMonData(v9, 21);
        v10 = GetMonData(v9, 32);
        *v61 = v10;
        v52 = GetMonData(v9, 25);
        v11 = GetMonData(v9, 39);
        LOBYTE(v42) = v42 & 0xE0 | v11 & 0x1F;
        v12 = GetMonData(v9, 40);
        LOWORD(v42) = v42 & 0xFC1F | 32 * (v12 & 0x1F);
        v13 = GetMonData(v9, 41);
        BYTE1(v42) = BYTE1(v42) & 0x83 | 4 * (v13 & 0x1F);
        v14 = GetMonData(v9, 42);
        v42 = v42 & 0xFFF07FFF | ((v14 & 0x1F) << 15);
        v15 = GetMonData(v9, 43);
        HIWORD(v42) = HIWORD(v42) & 0xFE0F | 16 * (v15 & 0x1F);
        v16 = GetMonData(v9, 44);
        BYTE3(v42) = BYTE3(v42) & 0xC1 | 2 * (v16 & 0x1F);
        v53 = GetMonData(v9, 0);
        v54 = GetMonData(v9, 55);
        v17 = GetMonData(v9, 56);
        *(_BYTE *)v60 = v17;
        v44 = GetMonData(v9, 57);
        v47 = GetMonData(v9, 58);
        v36 = GetMonData(v9, 59);
        v37 = GetMonData(v9, 60);
        v38 = GetMonData(v9, 61);
        v39 = GetMonData(v9, 62);
        v40 = GetMonData(v9, 63);
        v18 = GetMonData(v9, 45);
        BYTE3(v42) = BYTE3(v42) & 0xBF | ((v18 & 1) << 6);
        v19 = GetMonData(v9, 46);
        BYTE3(v42) = BYTE3(v42) & 0x7F | (v19 << 7);
        v55 = GetMonData(v9, 1);
        GetMonData(v9, 2);
        StringCopy10((int)v62, (int)v64);
        GetMonData(v9, 7);
        v4 = 0;
        do
        {
          v2[v4] = *((_BYTE *)&v35 + v4);
          ++v4;
        }
        while ( v4 <= 0x57 );
        return v4;
      case 1u:
        v20 = (char *)&unk_30045C0 + 100 * v3;
        v21 = 11;
        goto _080387BE;
      case 2u:
        v20 = (char *)&unk_30045C0 + 100 * v3;
        v21 = 12;
        goto _080387BE;
      case 3u:
        v22 = 0;
        v23 = v56;
        do
        {
          *(_WORD *)v23 = GetMonData((char *)&unk_30045C0 + 100 * v3, v22 + 13);
          v57[v22] = GetMonData((char *)&unk_30045C0 + 100 * v3, v22 + 17);
          v23 += 2;
          ++v22;
        }
        while ( v22 <= 3 );
        v58 = GetMonData((char *)&unk_30045C0 + 100 * v3, 21);
        v4 = 0;
        do
        {
          v2[v4] = v56[v4];
          ++v4;
        }
        while ( v4 <= 0xF );
        return v4;
      case 4u:
      case 5u:
      case 6u:
      case 7u:
        v20 = (char *)&unk_30045C0 + 100 * v3;
        v21 = *(_BYTE *)((v2024A60 << 9) + 0x2023A61) + 9;
        goto _080387BE;
      case 8u:
        v24 = 0;
        do
        {
          v2[v24] = GetMonData((char *)&unk_30045C0 + 100 * v3, v24 + 17);
          ++v24;
        }
        while ( v24 <= 3 );
        v2[v24] = GetMonData((char *)&unk_30045C0 + 100 * v3, 21);
        return v24 + 1;
      case 9u:
      case 0xAu:
      case 0xBu:
      case 0xCu:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = *(_BYTE *)((v2024A60 << 9) + 0x2023A61) + 8;
        goto _0803887E;
      case 0x11u:
        v27 = (char *)&unk_30045C0 + 100 * v3;
        v28 = 1;
        goto _0803855A;
      case 0x12u:
        v27 = (char *)&unk_30045C0 + 100 * v3;
        v28 = 25;
_0803855A:
        v29 = GetMonData(v27, v28);
        *v2 = v29;
        v2[1] = (unsigned __int16)(v29 & 0xFF00) >> 8;
        v2[2] = (v29 & 0xFF0000u) >> 16;
        return 3;
      case 0x13u:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 26;
        goto _0803887E;
      case 0x14u:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 27;
        goto _0803887E;
      case 0x15u:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 28;
        goto _0803887E;
      case 0x16u:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 29;
        goto _0803887E;
      case 0x17u:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 30;
        goto _0803887E;
      case 0x18u:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 31;
        goto _0803887E;
      case 0x19u:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 32;
        goto _0803887E;
      case 0x1Au:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 34;
        goto _0803887E;
      case 0x1Bu:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 35;
        goto _0803887E;
      case 0x1Cu:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 36;
        goto _0803887E;
      case 0x1Du:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 37;
        goto _0803887E;
      case 0x1Eu:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 38;
        goto _0803887E;
      case 0x1Fu:
        *a2 = GetMonData((char *)&unk_30045C0 + 100 * v3, 39);
        v2[1] = GetMonData((char *)&unk_30045C0 + 100 * v3, 40);
        v2[2] = GetMonData((char *)&unk_30045C0 + 100 * v3, 41);
        v2[3] = GetMonData((char *)&unk_30045C0 + 100 * v3, 42);
        v2[4] = GetMonData((char *)&unk_30045C0 + 100 * v3, 43);
        v2[5] = GetMonData((char *)&unk_30045C0 + 100 * v3, 44);
        return 6;
      case 0x20u:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 39;
        goto _0803887E;
      case 0x21u:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 40;
        goto _0803887E;
      case 0x22u:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 41;
        goto _0803887E;
      case 0x23u:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 42;
        goto _0803887E;
      case 0x24u:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 43;
        goto _0803887E;
      case 0x25u:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 44;
        goto _0803887E;
      case 0x26u:
        v30 = (char *)&unk_30045C0 + 100 * v3;
        v31 = 0;
        goto _0803871A;
      case 0x27u:
        v20 = (char *)&unk_30045C0 + 100 * v3;
        v21 = 9;
        goto _080387BE;
      case 0x28u:
        v30 = (char *)&unk_30045C0 + 100 * v3;
        v31 = 55;
_0803871A:
        v32 = GetMonData(v30, v31);
        *v2 = v32;
        v2[1] = (unsigned __int16)(v32 & 0xFF00) >> 8;
        v2[2] = (v32 & 0xFF0000u) >> 16;
        v2[3] = BYTE3(v32);
        return 4;
      case 0x29u:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 56;
        goto _0803887E;
      case 0x2Au:
        v20 = (char *)&unk_30045C0 + 100 * v3;
        v21 = 57;
        goto _080387BE;
      case 0x2Bu:
        v20 = (char *)&unk_30045C0 + 100 * v3;
        v21 = 58;
        goto _080387BE;
      case 0x2Cu:
        v20 = (char *)&unk_30045C0 + 100 * v3;
        v21 = 59;
        goto _080387BE;
      case 0x2Du:
        v20 = (char *)&unk_30045C0 + 100 * v3;
        v21 = 60;
        goto _080387BE;
      case 0x2Eu:
        v20 = (char *)&unk_30045C0 + 100 * v3;
        v21 = 61;
        goto _080387BE;
      case 0x2Fu:
        v20 = (char *)&unk_30045C0 + 100 * v3;
        v21 = 62;
        goto _080387BE;
      case 0x30u:
        v20 = (char *)&unk_30045C0 + 100 * v3;
        v21 = 63;
_080387BE:
        v33 = GetMonData(v20, v21);
        *v2 = v33;
        v2[1] = HIBYTE(v33);
        return 2;
      case 0x31u:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 22;
        goto _0803887E;
      case 0x32u:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 23;
        goto _0803887E;
      case 0x33u:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 24;
        goto _0803887E;
      case 0x34u:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 33;
        goto _0803887E;
      case 0x35u:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 47;
        goto _0803887E;
      case 0x36u:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 48;
        goto _0803887E;
      case 0x37u:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 50;
        goto _0803887E;
      case 0x38u:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 51;
        goto _0803887E;
      case 0x39u:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 52;
        goto _0803887E;
      case 0x3Au:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 53;
        goto _0803887E;
      case 0x3Bu:
        v25 = (char *)&unk_30045C0 + 100 * v3;
        v26 = 54;
_0803887E:
        *v2 = GetMonData(v25, v26);
        v4 = 1;
        break;
      default:
        return v4;
    }
  }
  return v4;
}
