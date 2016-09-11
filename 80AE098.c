int __fastcall sub_80AE098(unsigned __int8 a1)
{
  unsigned int v1; // r7@1
  char v2; // r2@2
  int v3; // r2@3
  int v4; // r0@4
  char v5; // r1@4
  __int16 v6; // r0@6
  int v7; // r2@7
  char v8; // r2@9
  int v9; // r2@10
  char v10; // r0@10
  int v11; // r2@10
  char v12; // r0@10
  int v13; // r2@10
  char v14; // r0@10
  int v15; // r2@10
  char v16; // r0@10
  int v17; // r2@10
  char v18; // r0@10
  int v19; // r2@10
  char v20; // r0@10
  int v21; // r2@10
  __int16 v22; // r0@10
  int v23; // r2@10
  __int16 v24; // r0@10
  int v25; // r2@10
  __int16 v26; // r0@10
  int v27; // r2@10
  __int16 v28; // r0@10
  int v29; // r2@10
  int v30; // r2@10
  int v31; // r3@10
  unsigned int v32; // r4@10
  unsigned int v33; // r5@10
  unsigned int v34; // r6@10
  int v36; // [sp+0h] [bp-2Ch]@1
  char v37; // [sp+5h] [bp-27h]@2
  char v38; // [sp+7h] [bp-25h]@2
  char v39; // [sp+Ah] [bp-22h]@8
  int v40; // [sp+28h] [bp-4h]@30

  v1 = a1;
  StringCopy(&v36, (_BYTE *)0x2024EA4);
  SkipExtCtrlCodes(&v36);
  if ( v203869A & 1 )
  {
    v2 = v37;
    v37 = -1;
    v38 = v2;
  }
  memcpy((v2038695 << 6) + 33785213, &v36, 8);
  if ( v2024EAC )
  {
    v4 = (v2038695 << 6) + 33785213;
    v5 = -39;
  }
  else
  {
    v4 = (v2038695 << 6) + 33785213;
    v5 = -40;
  }
  *(_BYTE *)(v4 + 8) = v5;
  *(_DWORD *)((v2038695 << 6) + 0x2038588) = 0;
  *(_BYTE *)((v2038695 << 6) + 0x203859C) = 0;
  v6 = GetMonData((int)&dword_3004360[25 * v1], 11, v3);
  *(_WORD *)((v2038695 << 6) + 0x2038570) = v6;
  GetMonData((int)&dword_3004360[25 * v1], 2, (int)&v36);
  StringGetEnd10((int)&v36);
  if ( v203869A & 1 )
  {
    SkipExtCtrlCodes(&v36);
    if ( GetMonData((int)&dword_3004360[25 * v1], 3, v7) == 1 )
    {
      v37 = -1;
      v39 = -4;
    }
    else
    {
      v8 = v37;
      v37 = -1;
      v39 = v8;
    }
  }
  memcpy((v2038695 << 6) + 33785202, &v36, 11);
  v10 = GetMonData((int)&dword_3004360[25 * v1], 22, v9);
  *(_BYTE *)((v2038695 << 6) + 0x2038596) = v10;
  v12 = GetMonData((int)&dword_3004360[25 * v1], 23, v11);
  *(_BYTE *)((v2038695 << 6) + 0x2038597) = v12;
  v14 = GetMonData((int)&dword_3004360[25 * v1], 24, v13);
  *(_BYTE *)((v2038695 << 6) + 0x2038598) = v14;
  v16 = GetMonData((int)&dword_3004360[25 * v1], 33, v15);
  *(_BYTE *)((v2038695 << 6) + 0x2038599) = v16;
  v18 = GetMonData((int)&dword_3004360[25 * v1], 47, v17);
  *(_BYTE *)((v2038695 << 6) + 0x203859A) = v18;
  v20 = GetMonData((int)&dword_3004360[25 * v1], 48, v19);
  *(_BYTE *)((v2038695 << 6) + 0x203859B) = v20;
  v22 = GetMonData((int)&dword_3004360[25 * v1], 13, v21);
  *(_WORD *)((v2038695 << 6) + 0x203858E) = v22;
  v24 = GetMonData((int)&dword_3004360[25 * v1], 14, v23);
  *(_WORD *)((v2038695 << 6) + 0x2038590) = v24;
  v26 = GetMonData((int)&dword_3004360[25 * v1], 15, v25);
  *(_WORD *)((v2038695 << 6) + 0x2038592) = v26;
  v28 = GetMonData((int)&dword_3004360[25 * v1], 16, v27);
  *(_WORD *)((v2038695 << 6) + 0x2038594) = v28;
  *(_DWORD *)((v2038695 << 6) + 0x20385A8) = GetMonData((int)&dword_3004360[25 * v1], 0, v29);
  *(_DWORD *)((v2038695 << 6) + 0x20385AC) = GetMonData((int)&dword_3004360[25 * v1], 1, 33785256);
  v30 = (unsigned __int16)GetMonData((int)&dword_3004360[25 * v1], 12, 58);
  v31 = *(_BYTE *)((v2038695 << 6) + 0x2038596);
  LOWORD(v32) = *(_BYTE *)((v2038695 << 6) + 0x2038597);
  LOWORD(v33) = *(_BYTE *)((v2038695 << 6) + 0x2038598);
  LOWORD(v34) = *(_BYTE *)((v2038695 << 6) + 0x2038599);
  LOWORD(v1) = *(_BYTE *)((v2038695 << 6) + 0x203859A);
  switch ( v30 )
  {
    case 254:
      v31 = *(_BYTE *)((v2038695 << 6) + 0x2038596) + 20;
      break;
    case 255:
      v32 = (((unsigned int)*(_BYTE *)((v2038695 << 6) + 0x2038597) << 16) + 1310720) >> 16;
      break;
    case 256:
      v33 = (((unsigned int)*(_BYTE *)((v2038695 << 6) + 0x2038598) << 16) + 1310720) >> 16;
      break;
    case 257:
      v34 = (((unsigned int)*(_BYTE *)((v2038695 << 6) + 0x2038599) << 16) + 1310720) >> 16;
      break;
    case 258:
      v1 = (((unsigned int)*(_BYTE *)((v2038695 << 6) + 0x203859A) << 16) + 1310720) >> 16;
      break;
  }
  if ( v31 > 255 )
    LOBYTE(v31) = -1;
  if ( (signed __int16)v32 > 255 )
    LOBYTE(v32) = -1;
  if ( (signed __int16)v33 > 255 )
    LOBYTE(v33) = -1;
  if ( (signed __int16)v34 > 255 )
    LOBYTE(v34) = -1;
  if ( (signed __int16)v1 > 255 )
    LOBYTE(v1) = -1;
  *(_BYTE *)((v2038695 << 6) + 0x2038596) = v31;
  *(_BYTE *)((v2038695 << 6) + 0x2038597) = v32;
  *(_BYTE *)((v2038695 << 6) + 0x2038598) = v33;
  *(_BYTE *)((v2038695 << 6) + 0x2038599) = v34;
  *(_BYTE *)((v2038695 << 6) + 0x203859A) = v1;
  return v40;
}
