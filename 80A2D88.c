signed int __fastcall sub_80A2D88(unsigned int *a1, int a2)
{
  int v2; // r6@1
  int v3; // r7@1
  __int16 v4; // r5@1
  unsigned __int8 v5; // r0@1
  int v6; // r1@2
  int v7; // r0@2
  int v8; // r2@2
  int v9; // r3@2
  int v10; // r7@2
  int v11; // r2@2
  int v12; // r3@2
  int v13; // r7@2
  int v14; // r3@2
  int v15; // r7@2
  signed int result; // r0@2
  __int16 v17; // [sp+0h] [bp-1Ch]@2
  unsigned __int8 v18; // [sp+4h] [bp-18h]@1

  v2 = (int)a1;
  v3 = a2;
  v4 = *(_WORD *)(a2 + 32);
  v5 = sub_80A2BC4(a1, *(_WORD *)(a2 + 32));
  v18 = v5;
  if ( v5 == 255 )
  {
    result = 255;
  }
  else
  {
    v6 = 36 * v5 + 33718912;
    v7 = v3;
    v8 = *(_DWORD *)v3;
    v9 = *(_DWORD *)(v3 + 4);
    v10 = *(_DWORD *)(v3 + 8);
    v7 += 12;
    *(_DWORD *)v6 = v8;
    *(_DWORD *)(v6 + 4) = v9;
    *(_DWORD *)(v6 + 8) = v10;
    v6 += 12;
    v11 = *(_DWORD *)v7;
    v12 = *(_DWORD *)(v7 + 4);
    v13 = *(_DWORD *)(v7 + 8);
    v7 += 12;
    *(_DWORD *)v6 = v11;
    *(_DWORD *)(v6 + 4) = v12;
    *(_DWORD *)(v6 + 8) = v13;
    v6 += 12;
    v14 = *(_DWORD *)(v7 + 4);
    v15 = *(_DWORD *)(v7 + 8);
    *(_DWORD *)v6 = *(_DWORD *)v7;
    *(_DWORD *)(v6 + 4) = v14;
    *(_DWORD *)(v6 + 8) = v15;
    SetMonData(v2, 64, (int)&v18);
    v17 = v4;
    SetMonData(v2, 12, (int)&v17);
    result = v18;
  }
  return result;
}
