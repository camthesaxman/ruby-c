int __fastcall sub_8138294(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r0@1
  int v3; // r3@1
  int v4; // r6@1
  unsigned int v5; // r0@1
  signed int v6; // r8@3
  unsigned int *v7; // r9@3
  int v8; // r7@3
  int v9; // r4@3
  signed int v10; // r8@8
  int v11; // r9@8
  int v12; // r6@8
  int v13; // r4@8
  unsigned int *v14; // r0@11
  int v15; // r2@11
  int v16; // r1@11
  unsigned int *v17; // r4@12
  unsigned int *v18; // r4@29
  int v19; // r2@29
  unsigned int *v20; // r0@29
  char v22; // [sp+0h] [bp-54h]@5
  int v23; // [sp+4h] [bp-50h]@3
  int v24; // [sp+8h] [bp-4Ch]@3
  int v25; // [sp+Ch] [bp-48h]@3
  int v26; // [sp+10h] [bp-44h]@3
  int v27; // [sp+14h] [bp-40h]@3
  int v28; // [sp+18h] [bp-3Ch]@3
  int v29; // [sp+1Ch] [bp-38h]@3
  int v30; // [sp+20h] [bp-34h]@3
  int v31; // [sp+24h] [bp-30h]@3
  int v32; // [sp+28h] [bp-2Ch]@3
  int v33; // [sp+2Ch] [bp-28h]@3
  int v34; // [sp+30h] [bp-24h]@3
  int v35; // [sp+50h] [bp-4h]@59

  v1 = a1;
  v2 = v2024A60 << 9;
  v3 = v2 + 33700451;
  v4 = v2 + 33700451;
  v5 = *(_BYTE *)((v2024A60 << 9) + 0x2023A61);
  if ( v5 <= 0x3B )
  {
    switch ( v5 )
    {
      case 0u:
        SetMonData((int)&dword_3004360[25 * v1], 11, v4);
        SetMonData((int)&dword_3004360[25 * v1], 12, v4 + 46);
        v6 = 0;
        v30 = v4 + 43;
        v32 = v4 + 68;
        v33 = v4 + 72;
        v34 = v4 + 76;
        v29 = v4 + 42;
        v28 = v4 + 40;
        v31 = v4 + 44;
        v23 = v4 + 2;
        v24 = v4 + 4;
        v25 = v4 + 6;
        v26 = v4 + 8;
        v27 = v4 + 10;
        v7 = &dword_3004360[25 * v1];
        v8 = v4 + 36;
        v9 = v4 + 12;
        do
        {
          SetMonData((int)v7, v6 + 13, v9);
          SetMonData((int)v7, v6 + 17, v8++);
          v9 += 2;
          ++v6;
        }
        while ( v6 <= 3 );
        SetMonData((int)&dword_3004360[25 * v1], 21, v4 + 59);
        SetMonData((int)&dword_3004360[25 * v1], 32, v30);
        SetMonData((int)&dword_3004360[25 * v1], 25, v32);
        v22 = *(_BYTE *)(v4 + 20) & 0x1F;
        SetMonData((int)&dword_3004360[25 * v1], 39, (int)&v22);
        v22 = (unsigned int)*(_WORD *)(v4 + 20) << 22 >> 27;
        SetMonData((int)&dword_3004360[25 * v1], 40, (int)&v22);
        v22 = (unsigned int)*(_BYTE *)(v4 + 21) << 25 >> 27;
        SetMonData((int)&dword_3004360[25 * v1], 41, (int)&v22);
        v22 = *(_DWORD *)(v4 + 20) << 12 >> 27;
        SetMonData((int)&dword_3004360[25 * v1], 42, (int)&v22);
        v22 = (unsigned int)*(_WORD *)(v4 + 22) << 23 >> 27;
        SetMonData((int)&dword_3004360[25 * v1], 43, (int)&v22);
        v22 = (unsigned int)*(_BYTE *)(v4 + 23) << 26 >> 27;
        SetMonData((int)&dword_3004360[25 * v1], 44, (int)&v22);
        SetMonData((int)&dword_3004360[25 * v1], 0, v33);
        SetMonData((int)&dword_3004360[25 * v1], 55, v34);
        SetMonData((int)&dword_3004360[25 * v1], 56, v29);
        SetMonData((int)&dword_3004360[25 * v1], 57, v28);
        SetMonData((int)&dword_3004360[25 * v1], 58, v31);
        SetMonData((int)&dword_3004360[25 * v1], 59, v23);
        SetMonData((int)&dword_3004360[25 * v1], 60, v24);
        SetMonData((int)&dword_3004360[25 * v1], 61, v25);
        SetMonData((int)&dword_3004360[25 * v1], 62, v26);
        SetMonData((int)&dword_3004360[25 * v1], 63, v27);
        break;
      case 1u:
        SetMonData((int)&dword_3004360[25 * v1], 11, (v2024A60 << 9) + 33700451);
        break;
      case 2u:
        SetMonData((int)&dword_3004360[25 * v1], 12, (v2024A60 << 9) + 33700451);
        break;
      case 3u:
        v10 = 0;
        v11 = v3 + 12;
        v12 = v3 + 8;
        v13 = v3;
        do
        {
          SetMonData((int)&dword_3004360[25 * v1], v10 + 13, v13);
          SetMonData((int)&dword_3004360[25 * v1], v10 + 17, v12++);
          v13 += 2;
          ++v10;
        }
        while ( v10 <= 3 );
        SetMonData((int)&dword_3004360[25 * v1], 21, v11);
        break;
      case 4u:
      case 5u:
      case 6u:
      case 7u:
        v14 = &dword_3004360[25 * v1];
        v15 = v2024A60 << 9;
        v16 = *(_BYTE *)(v15 + 0x2023A61) + 9;
        goto _0813869C;
      case 8u:
        v17 = &dword_3004360[25 * v1];
        SetMonData((int)v17, 17, (v2024A60 << 9) + 33700451);
        SetMonData((int)v17, 18, (v2024A60 << 9) + 33700452);
        SetMonData((int)v17, 19, (v2024A60 << 9) + 33700453);
        SetMonData((int)v17, 20, (v2024A60 << 9) + 33700454);
        SetMonData((int)v17, 21, (v2024A60 << 9) + 33700455);
        break;
      case 9u:
      case 0xAu:
      case 0xBu:
      case 0xCu:
        v14 = &dword_3004360[25 * v1];
        v15 = v2024A60 << 9;
        v16 = *(_BYTE *)(v15 + 0x2023A61) + 8;
_0813869C:
        SetMonData((int)v14, v16, v15 + 33700451);
        break;
      case 0x11u:
        SetMonData((int)&dword_3004360[25 * v1], 1, (v2024A60 << 9) + 33700451);
        break;
      case 0x12u:
        SetMonData((int)&dword_3004360[25 * v1], 25, (v2024A60 << 9) + 33700451);
        break;
      case 0x13u:
        SetMonData((int)&dword_3004360[25 * v1], 26, (v2024A60 << 9) + 33700451);
        break;
      case 0x14u:
        SetMonData((int)&dword_3004360[25 * v1], 27, (v2024A60 << 9) + 33700451);
        break;
      case 0x15u:
        SetMonData((int)&dword_3004360[25 * v1], 28, (v2024A60 << 9) + 33700451);
        break;
      case 0x16u:
        SetMonData((int)&dword_3004360[25 * v1], 29, (v2024A60 << 9) + 33700451);
        break;
      case 0x17u:
        SetMonData((int)&dword_3004360[25 * v1], 30, (v2024A60 << 9) + 33700451);
        break;
      case 0x18u:
        SetMonData((int)&dword_3004360[25 * v1], 31, (v2024A60 << 9) + 33700451);
        break;
      case 0x19u:
        SetMonData((int)&dword_3004360[25 * v1], 32, (v2024A60 << 9) + 33700451);
        break;
      case 0x1Au:
        SetMonData((int)&dword_3004360[25 * v1], 34, (v2024A60 << 9) + 33700451);
        break;
      case 0x1Bu:
        SetMonData((int)&dword_3004360[25 * v1], 35, (v2024A60 << 9) + 33700451);
        break;
      case 0x1Cu:
        SetMonData((int)&dword_3004360[25 * v1], 36, (v2024A60 << 9) + 33700451);
        break;
      case 0x1Du:
        SetMonData((int)&dword_3004360[25 * v1], 37, (v2024A60 << 9) + 33700451);
        break;
      case 0x1Eu:
        SetMonData((int)&dword_3004360[25 * v1], 38, (v2024A60 << 9) + 33700451);
        break;
      case 0x1Fu:
        v18 = &dword_3004360[25 * v1];
        SetMonData((int)v18, 39, (v2024A60 << 9) + 33700451);
        SetMonData((int)v18, 40, (v2024A60 << 9) + 33700452);
        SetMonData((int)v18, 41, (v2024A60 << 9) + 33700453);
        SetMonData((int)v18, 42, (v2024A60 << 9) + 33700454);
        SetMonData((int)v18, 43, (v2024A60 << 9) + 33700455);
        v19 = (v2024A60 << 9) + 33700456;
        v20 = &dword_3004360[25 * v1];
        goto _08138994;
      case 0x20u:
        SetMonData((int)&dword_3004360[25 * v1], 39, (v2024A60 << 9) + 33700451);
        break;
      case 0x21u:
        SetMonData((int)&dword_3004360[25 * v1], 40, (v2024A60 << 9) + 33700451);
        break;
      case 0x22u:
        SetMonData((int)&dword_3004360[25 * v1], 41, (v2024A60 << 9) + 33700451);
        break;
      case 0x23u:
        SetMonData((int)&dword_3004360[25 * v1], 42, (v2024A60 << 9) + 33700451);
        break;
      case 0x24u:
        SetMonData((int)&dword_3004360[25 * v1], 43, (v2024A60 << 9) + 33700451);
        break;
      case 0x25u:
        v20 = &dword_3004360[25 * v1];
        v19 = (v2024A60 << 9) + 33700451;
_08138994:
        SetMonData((int)v20, 44, v19);
        break;
      case 0x26u:
        SetMonData((int)&dword_3004360[25 * v1], 0, (v2024A60 << 9) + 33700451);
        break;
      case 0x27u:
        SetMonData((int)&dword_3004360[25 * v1], 9, (v2024A60 << 9) + 33700451);
        break;
      case 0x28u:
        SetMonData((int)&dword_3004360[25 * v1], 55, (v2024A60 << 9) + 33700451);
        break;
      case 0x29u:
        SetMonData((int)&dword_3004360[25 * v1], 56, (v2024A60 << 9) + 33700451);
        break;
      case 0x2Au:
        SetMonData((int)&dword_3004360[25 * v1], 57, (v2024A60 << 9) + 33700451);
        break;
      case 0x2Bu:
        SetMonData((int)&dword_3004360[25 * v1], 58, (v2024A60 << 9) + 33700451);
        break;
      case 0x2Cu:
        SetMonData((int)&dword_3004360[25 * v1], 59, (v2024A60 << 9) + 33700451);
        break;
      case 0x2Du:
        SetMonData((int)&dword_3004360[25 * v1], 60, (v2024A60 << 9) + 33700451);
        break;
      case 0x2Eu:
        SetMonData((int)&dword_3004360[25 * v1], 61, (v2024A60 << 9) + 33700451);
        break;
      case 0x2Fu:
        SetMonData((int)&dword_3004360[25 * v1], 62, (v2024A60 << 9) + 33700451);
        break;
      case 0x30u:
        SetMonData((int)&dword_3004360[25 * v1], 63, (v2024A60 << 9) + 33700451);
        break;
      case 0x31u:
        SetMonData((int)&dword_3004360[25 * v1], 22, (v2024A60 << 9) + 33700451);
        break;
      case 0x32u:
        SetMonData((int)&dword_3004360[25 * v1], 23, (v2024A60 << 9) + 33700451);
        break;
      case 0x33u:
        SetMonData((int)&dword_3004360[25 * v1], 24, (v2024A60 << 9) + 33700451);
        break;
      case 0x34u:
        SetMonData((int)&dword_3004360[25 * v1], 33, (v2024A60 << 9) + 33700451);
        break;
      case 0x35u:
        SetMonData((int)&dword_3004360[25 * v1], 47, (v2024A60 << 9) + 33700451);
        break;
      case 0x36u:
        SetMonData((int)&dword_3004360[25 * v1], 48, (v2024A60 << 9) + 33700451);
        break;
      case 0x37u:
        SetMonData((int)&dword_3004360[25 * v1], 50, (v2024A60 << 9) + 33700451);
        break;
      case 0x38u:
        SetMonData((int)&dword_3004360[25 * v1], 51, (v2024A60 << 9) + 33700451);
        break;
      case 0x39u:
        SetMonData((int)&dword_3004360[25 * v1], 52, (v2024A60 << 9) + 33700451);
        break;
      case 0x3Au:
        SetMonData((int)&dword_3004360[25 * v1], 53, (v2024A60 << 9) + 33700451);
        break;
      case 0x3Bu:
        SetMonData((int)&dword_3004360[25 * v1], 54, (v2024A60 << 9) + 33700451);
        break;
      default:
        break;
    }
  }
  sub_80324F8((int)&dword_3004360[25 * *(_WORD *)(2 * v2024A60 + 0x2024A6A)], v2024A60);
  return v35;
}
