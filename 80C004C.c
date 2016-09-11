signed int __fastcall sub_80C004C(int a1, int a2, unsigned __int8 a3)
{
  int v3; // r6@1
  int v4; // r4@1
  unsigned __int16 v5; // r5@1
  signed int result; // r0@3
  int v7; // r0@4
  int v8; // r2@4
  int v9; // r3@4
  int v10; // r4@4
  int v11; // r1@4
  int v12; // r2@4
  int v13; // r3@4
  int v14; // r4@4
  int v15; // r1@4
  int v16; // r3@4
  int v17; // r4@4

  v3 = a1;
  v4 = a2;
  v5 = GetLinkPlayerTrainerId(a3);
  if ( (unsigned __int8)v5 != *(_BYTE *)(v4 + 34) || v5 >> 8 != *(_BYTE *)(v4 + 35) )
  {
    *(_BYTE *)(v4 + 34) = *(_BYTE *)(v4 + 32);
    *(_BYTE *)(v4 + 35) = *(_BYTE *)(v4 + 33);
    *(_BYTE *)(v4 + 32) = v5;
    *(_BYTE *)(v4 + 33) = HIBYTE(v5);
    v7 = v4;
    v8 = *(_DWORD *)v4;
    v9 = *(_DWORD *)(v4 + 4);
    v10 = *(_DWORD *)(v4 + 8);
    v7 += 12;
    *(_DWORD *)v3 = v8;
    *(_DWORD *)(v3 + 4) = v9;
    *(_DWORD *)(v3 + 8) = v10;
    v11 = v3 + 12;
    v12 = *(_DWORD *)v7;
    v13 = *(_DWORD *)(v7 + 4);
    v14 = *(_DWORD *)(v7 + 8);
    v7 += 12;
    *(_DWORD *)v11 = v12;
    *(_DWORD *)(v11 + 4) = v13;
    *(_DWORD *)(v11 + 8) = v14;
    v15 = v3 + 24;
    v16 = *(_DWORD *)(v7 + 4);
    v17 = *(_DWORD *)(v7 + 8);
    *(_DWORD *)v15 = *(_DWORD *)v7;
    *(_DWORD *)(v15 + 4) = v16;
    *(_DWORD *)(v15 + 8) = v17;
    result = 1;
    *(_BYTE *)(v3 + 1) = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
