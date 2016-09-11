int __fastcall dp01_getattr_by_ch1_for_player_pokemon(unsigned __int8 a1, _BYTE *a2)
{
  _BYTE *v2; // r7@1
  int v3; // r5@1
  unsigned int v4; // r6@1
  int v5; // r2@1
  unsigned int v6; // r0@1
  int v7; // r2@3
  signed int v8; // r6@3
  char *v9; // r2@3
  unsigned int *v10; // r8@3
  char *v11; // r4@3
  int v12; // r2@4
  char v13; // r0@4
  unsigned int *v14; // r4@5
  int v15; // r2@5
  char v16; // r0@5
  int v17; // r2@5
  int v18; // r2@5
  char v19; // r0@5
  int v20; // r2@5
  char v21; // r0@5
  int v22; // r2@5
  char v23; // r0@5
  int v24; // r2@5
  char v25; // r0@5
  char v26; // r0@5
  int v27; // r2@5
  char v28; // r0@5
  int v29; // r2@5
  int v30; // r2@5
  int v31; // r2@5
  char v32; // r0@5
  int v33; // r2@5
  int v34; // r2@5
  int v35; // r2@5
  int v36; // r2@5
  int v37; // r2@5
  int v38; // r2@5
  int v39; // r2@5
  int v40; // r2@5
  char v41; // r0@5
  int v42; // r2@5
  char v43; // r0@5
  int v44; // r2@5
  unsigned int *v45; // r0@8
  int v46; // r1@8
  signed int v47; // r6@10
  char *v48; // r2@10
  char *v49; // r8@10
  int v50; // r2@11
  char v51; // r0@11
  signed int v52; // r6@16
  int v53; // r2@17
  unsigned int *v54; // r0@19
  int v55; // r1@19
  unsigned int *v56; // r0@20
  int v57; // r1@20
  int v58; // r0@22
  int v59; // r2@35
  int v60; // r2@35
  int v61; // r2@35
  int v62; // r2@35
  int v63; // r2@35
  unsigned int *v64; // r0@42
  int v65; // r1@42
  int v66; // r0@45
  __int16 v67; // r0@54
  __int16 v69; // [sp+0h] [bp-B0h]@3
  __int16 v70; // [sp+2h] [bp-AEh]@5
  __int16 v71; // [sp+4h] [bp-ACh]@5
  __int16 v72; // [sp+6h] [bp-AAh]@5
  __int16 v73; // [sp+8h] [bp-A8h]@5
  __int16 v74; // [sp+Ah] [bp-A6h]@5
  char v75; // [sp+Ch] [bp-A4h]@3
  unsigned int v76; // [sp+14h] [bp-9Ch]@5
  char v77[4]; // [sp+24h] [bp-8Ch]@4
  __int16 v78; // [sp+28h] [bp-88h]@5
  __int16 v79; // [sp+2Ah] [bp-86h]@3
  char v80; // [sp+2Bh] [bp-85h]@3
  __int16 v81; // [sp+2Ch] [bp-84h]@5
  __int16 v82; // [sp+2Eh] [bp-82h]@3
  int v83; // [sp+30h] [bp-80h]@3
  char v84; // [sp+3Bh] [bp-75h]@5
  int v85; // [sp+3Ch] [bp-74h]@3
  int v86; // [sp+44h] [bp-6Ch]@5
  int v87; // [sp+48h] [bp-68h]@5
  int v88; // [sp+4Ch] [bp-64h]@5
  int v89; // [sp+54h] [bp-5Ch]@5
  char v90[8]; // [sp+58h] [bp-58h]@10
  char v91[28]; // [sp+60h] [bp-50h]@11
  char v92; // [sp+64h] [bp-4Ch]@12
  char v93[28]; // [sp+68h] [bp-48h]@3
  __int16 *v94; // [sp+7Ch] [bp-34h]@3
  char *v95; // [sp+80h] [bp-30h]@3
  int *v96; // [sp+84h] [bp-2Ch]@3
  int *v97; // [sp+88h] [bp-28h]@3
  char *v98; // [sp+8Ch] [bp-24h]@3

  v2 = a2;
  v3 = a1;
  v4 = 0;
  v5 = 33700448;
  v6 = *(_BYTE *)((v2024A60 << 9) + 0x2023A61);
  if ( v6 <= 0x3B )
  {
    switch ( v6 )
    {
      case 0u:
        v69 = GetMonData((int)&dword_3004360[25 * v3], 11, 33700448);
        v82 = GetMonData((int)&dword_3004360[25 * v3], 12, v7);
        v8 = 0;
        v95 = &v80;
        v94 = &v79;
        v98 = v93;
        v9 = (char *)&v83;
        v96 = &v83;
        v97 = &v85;
        v10 = &dword_3004360[25 * v3];
        v11 = &v75;
        do
        {
          *(_WORD *)v11 = GetMonData((int)v10, v8 + 13, (int)v9);
          v13 = GetMonData((int)v10, v8 + 17, v12);
          v9 = v77;
          v77[v8] = v13;
          v11 += 2;
          ++v8;
        }
        while ( v8 <= 3 );
        v14 = &dword_3004360[25 * v3];
        v84 = GetMonData((int)v14, 21, (int)v77);
        v16 = GetMonData((int)v14, 32, v15);
        v17 = (int)v95;
        *v95 = v16;
        v86 = GetMonData((int)v14, 25, v17);
        v19 = GetMonData((int)v14, 39, v18);
        v20 = (unsigned __int8)v76;
        LOBYTE(v76) = v76 & 0xE0 | v19 & 0x1F;
        v21 = GetMonData((int)v14, 40, v20);
        v22 = (unsigned __int16)v76;
        LOWORD(v76) = v76 & 0xFC1F | 32 * (v21 & 0x1F);
        v23 = GetMonData((int)v14, 41, v22);
        v24 = BYTE1(v76);
        BYTE1(v76) = BYTE1(v76) & 0x83 | 4 * (v23 & 0x1F);
        v25 = GetMonData((int)v14, 42, v24);
        v76 = v76 & 0xFFF07FFF | ((v25 & 0x1F) << 15);
        v26 = GetMonData((int)v14, 43, -1015809);
        v27 = HIWORD(v76);
        HIWORD(v76) = HIWORD(v76) & 0xFE0F | 16 * (v26 & 0x1F);
        v28 = GetMonData((int)v14, 44, v27);
        v29 = BYTE3(v76);
        BYTE3(v76) = BYTE3(v76) & 0xC1 | 2 * (v28 & 0x1F);
        v87 = GetMonData((int)v14, 0, v29);
        v88 = GetMonData((int)v14, 55, v30);
        v32 = GetMonData((int)v14, 56, v31);
        *(_BYTE *)v94 = v32;
        v78 = GetMonData((int)v14, 57, v33);
        v81 = GetMonData((int)v14, 58, v34);
        v70 = GetMonData((int)v14, 59, v35);
        v71 = GetMonData((int)v14, 60, v36);
        v72 = GetMonData((int)v14, 61, v37);
        v73 = GetMonData((int)v14, 62, v38);
        v74 = GetMonData((int)v14, 63, v39);
        v41 = GetMonData((int)v14, 45, v40);
        v42 = BYTE3(v76);
        BYTE3(v76) = BYTE3(v76) & 0xBF | ((v41 & 1) << 6);
        v43 = GetMonData((int)v14, 46, v42);
        v44 = BYTE3(v76);
        BYTE3(v76) = BYTE3(v76) & 0x7F | (v43 << 7);
        v89 = GetMonData((int)v14, 1, v44);
        GetMonData((int)v14, 2, (int)v98);
        StringCopy10((int)v96, (int)v98);
        GetMonData((int)v14, 7, (int)v97);
        v4 = 0;
        do
        {
          v2[v4] = *((_BYTE *)&v69 + v4);
          ++v4;
        }
        while ( v4 <= 0x57 );
        return v4;
      case 1u:
        v45 = &dword_3004360[25 * v3];
        v46 = 11;
        goto _0811EB26;
      case 2u:
        v45 = &dword_3004360[25 * v3];
        v46 = 12;
        goto _0811EB26;
      case 3u:
        v47 = 0;
        v48 = v90;
        v49 = v90;
        do
        {
          *(_WORD *)v49 = GetMonData((int)&dword_3004360[25 * v3], v47 + 13, (int)v48);
          v51 = GetMonData((int)&dword_3004360[25 * v3], v47 + 17, v50);
          v48 = v91;
          v91[v47] = v51;
          v49 += 2;
          ++v47;
        }
        while ( v47 <= 3 );
        v92 = GetMonData((int)&dword_3004360[25 * v3], 21, (int)v91);
        v4 = 0;
        do
        {
          v2[v4] = v90[v4];
          ++v4;
        }
        while ( v4 <= 0xF );
        return v4;
      case 4u:
      case 5u:
      case 6u:
      case 7u:
        v45 = &dword_3004360[25 * v3];
        v5 = 33700449;
        v46 = *(_BYTE *)((v2024A60 << 9) + 0x2023A61) + 9;
        goto _0811EB26;
      case 8u:
        v52 = 0;
        do
        {
          v2[v52] = GetMonData((int)&dword_3004360[25 * v3], v52 + 17, (int)dword_3004360);
          ++v52;
        }
        while ( v52 <= 3 );
        v2[v52] = GetMonData((int)&dword_3004360[25 * v3], 21, v53);
        return v52 + 1;
      case 9u:
      case 0xAu:
      case 0xBu:
      case 0xCu:
        v54 = &dword_3004360[25 * v3];
        v5 = 33700449;
        v55 = *(_BYTE *)((v2024A60 << 9) + 0x2023A61) + 8;
        goto _0811EBE6;
      case 0x11u:
        v56 = &dword_3004360[25 * v3];
        v57 = 1;
        goto _0811E8C2;
      case 0x12u:
        v56 = &dword_3004360[25 * v3];
        v57 = 25;
_0811E8C2:
        v58 = GetMonData((int)v56, v57, 33700448);
        *v2 = v58;
        v2[1] = (unsigned __int16)(v58 & 0xFF00) >> 8;
        v2[2] = (v58 & 0xFF0000u) >> 16;
        return 3;
      case 0x13u:
        v54 = &dword_3004360[25 * v3];
        v55 = 26;
        goto _0811EBE6;
      case 0x14u:
        v54 = &dword_3004360[25 * v3];
        v55 = 27;
        goto _0811EBE6;
      case 0x15u:
        v54 = &dword_3004360[25 * v3];
        v55 = 28;
        goto _0811EBE6;
      case 0x16u:
        v54 = &dword_3004360[25 * v3];
        v55 = 29;
        goto _0811EBE6;
      case 0x17u:
        v54 = &dword_3004360[25 * v3];
        v55 = 30;
        goto _0811EBE6;
      case 0x18u:
        v54 = &dword_3004360[25 * v3];
        v55 = 31;
        goto _0811EBE6;
      case 0x19u:
        v54 = &dword_3004360[25 * v3];
        v55 = 32;
        goto _0811EBE6;
      case 0x1Au:
        v54 = &dword_3004360[25 * v3];
        v55 = 34;
        goto _0811EBE6;
      case 0x1Bu:
        v54 = &dword_3004360[25 * v3];
        v55 = 35;
        goto _0811EBE6;
      case 0x1Cu:
        v54 = &dword_3004360[25 * v3];
        v55 = 36;
        goto _0811EBE6;
      case 0x1Du:
        v54 = &dword_3004360[25 * v3];
        v55 = 37;
        goto _0811EBE6;
      case 0x1Eu:
        v54 = &dword_3004360[25 * v3];
        v55 = 38;
        goto _0811EBE6;
      case 0x1Fu:
        *a2 = GetMonData((int)&dword_3004360[25 * v3], 39, 33700448);
        v2[1] = GetMonData((int)&dword_3004360[25 * v3], 40, v59);
        v2[2] = GetMonData((int)&dword_3004360[25 * v3], 41, v60);
        v2[3] = GetMonData((int)&dword_3004360[25 * v3], 42, v61);
        v2[4] = GetMonData((int)&dword_3004360[25 * v3], 43, v62);
        v2[5] = GetMonData((int)&dword_3004360[25 * v3], 44, v63);
        return 6;
      case 0x20u:
        v54 = &dword_3004360[25 * v3];
        v55 = 39;
        goto _0811EBE6;
      case 0x21u:
        v54 = &dword_3004360[25 * v3];
        v55 = 40;
        goto _0811EBE6;
      case 0x22u:
        v54 = &dword_3004360[25 * v3];
        v55 = 41;
        goto _0811EBE6;
      case 0x23u:
        v54 = &dword_3004360[25 * v3];
        v55 = 42;
        goto _0811EBE6;
      case 0x24u:
        v54 = &dword_3004360[25 * v3];
        v55 = 43;
        goto _0811EBE6;
      case 0x25u:
        v54 = &dword_3004360[25 * v3];
        v55 = 44;
        goto _0811EBE6;
      case 0x26u:
        v64 = &dword_3004360[25 * v3];
        v65 = 0;
        goto _0811EA82;
      case 0x27u:
        v45 = &dword_3004360[25 * v3];
        v46 = 9;
        goto _0811EB26;
      case 0x28u:
        v64 = &dword_3004360[25 * v3];
        v65 = 55;
_0811EA82:
        v66 = GetMonData((int)v64, v65, 33700448);
        *v2 = v66;
        v2[1] = (unsigned __int16)(v66 & 0xFF00) >> 8;
        v2[2] = (v66 & 0xFF0000u) >> 16;
        v2[3] = BYTE3(v66);
        return 4;
      case 0x29u:
        v54 = &dword_3004360[25 * v3];
        v55 = 56;
        goto _0811EBE6;
      case 0x2Au:
        v45 = &dword_3004360[25 * v3];
        v46 = 57;
        goto _0811EB26;
      case 0x2Bu:
        v45 = &dword_3004360[25 * v3];
        v46 = 58;
        goto _0811EB26;
      case 0x2Cu:
        v45 = &dword_3004360[25 * v3];
        v46 = 59;
        goto _0811EB26;
      case 0x2Du:
        v45 = &dword_3004360[25 * v3];
        v46 = 60;
        goto _0811EB26;
      case 0x2Eu:
        v45 = &dword_3004360[25 * v3];
        v46 = 61;
        goto _0811EB26;
      case 0x2Fu:
        v45 = &dword_3004360[25 * v3];
        v46 = 62;
        goto _0811EB26;
      case 0x30u:
        v45 = &dword_3004360[25 * v3];
        v46 = 63;
_0811EB26:
        v67 = GetMonData((int)v45, v46, v5);
        *v2 = v67;
        v2[1] = HIBYTE(v67);
        return 2;
      case 0x31u:
        v54 = &dword_3004360[25 * v3];
        v55 = 22;
        goto _0811EBE6;
      case 0x32u:
        v54 = &dword_3004360[25 * v3];
        v55 = 23;
        goto _0811EBE6;
      case 0x33u:
        v54 = &dword_3004360[25 * v3];
        v55 = 24;
        goto _0811EBE6;
      case 0x34u:
        v54 = &dword_3004360[25 * v3];
        v55 = 33;
        goto _0811EBE6;
      case 0x35u:
        v54 = &dword_3004360[25 * v3];
        v55 = 47;
        goto _0811EBE6;
      case 0x36u:
        v54 = &dword_3004360[25 * v3];
        v55 = 48;
        goto _0811EBE6;
      case 0x37u:
        v54 = &dword_3004360[25 * v3];
        v55 = 50;
        goto _0811EBE6;
      case 0x38u:
        v54 = &dword_3004360[25 * v3];
        v55 = 51;
        goto _0811EBE6;
      case 0x39u:
        v54 = &dword_3004360[25 * v3];
        v55 = 52;
        goto _0811EBE6;
      case 0x3Au:
        v54 = &dword_3004360[25 * v3];
        v55 = 53;
        goto _0811EBE6;
      case 0x3Bu:
        v54 = &dword_3004360[25 * v3];
        v55 = 54;
_0811EBE6:
        *v2 = GetMonData((int)v54, v55, v5);
        v4 = 1;
        break;
      default:
        return v4;
    }
  }
  return v4;
}
