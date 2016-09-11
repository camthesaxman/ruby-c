int __fastcall sub_803ADE8(int a1, int a2)
{
  int v2; // r7@1
  int v3; // r6@1
  int v4; // ST04_4@1
  int v5; // ST0C_4@1
  signed int v6; // r5@1
  _WORD *v7; // r4@1
  char v8; // r0@5
  unsigned __int8 v10; // [sp+10h] [bp-2Ch]@3
  char v11; // [sp+11h] [bp-2Bh]@4
  char v12; // [sp+1Ch] [bp-20h]@7
  char v13; // [sp+1Dh] [bp-1Fh]@7
  int v14; // [sp+38h] [bp-4h]@7

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a2 + 28);
  v5 = *(_DWORD *)(a2 + 20);
  CreateMon(a1, *(_WORD *)a2, *(_BYTE *)(a2 + 12), 0);
  v6 = 0;
  v7 = (_WORD *)(v3 + 4);
  do
  {
    SetMonMoveSlot(v2, *v7, (unsigned __int8)v6);
    ++v7;
    ++v6;
  }
  while ( v6 <= 3 );
  SetMonData(v2, 21, v3 + 13);
  SetMonData(v2, 12, v3 + 2);
  StringCopy(&v10, (_BYTE *)(v3 + 32));
  if ( v10 != 252 || v11 != 21 )
    v8 = 2;
  else
    v8 = 1;
  v12 = v8;
  SetMonData(v2, 3, &v12);
  SkipExtCtrlCodes(&v10);
  SetMonData(v2, 2, &v10);
  SetMonData(v2, 32, v3 + 43);
  SetMonData(v2, 26, v3 + 14);
  SetMonData(v2, 27, v3 + 15);
  SetMonData(v2, 28, v3 + 16);
  SetMonData(v2, 29, v3 + 17);
  SetMonData(v2, 30, v3 + 18);
  SetMonData(v2, 31, v3 + 19);
  v13 = *(_BYTE *)(v3 + 27) >> 7;
  SetMonData(v2, 46, &v13);
  v13 = *(_BYTE *)(v3 + 24) & 0x1F;
  SetMonData(v2, 39, &v13);
  v13 = (unsigned int)*(_WORD *)(v3 + 24) << 22 >> 27;
  SetMonData(v2, 40, &v13);
  v13 = (unsigned int)*(_BYTE *)(v3 + 25) << 25 >> 27;
  SetMonData(v2, 41, &v13);
  v13 = *(_DWORD *)(v3 + 24) << 12 >> 27;
  SetMonData(v2, 42, &v13);
  v13 = (unsigned int)*(_WORD *)(v3 + 26) << 23 >> 27;
  SetMonData(v2, 43, &v13);
  v13 = (unsigned int)*(_BYTE *)(v3 + 27) << 26 >> 27;
  SetMonData(v2, 44, &v13);
  CalculateMonStats(v2);
  return v14;
}
