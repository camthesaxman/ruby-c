int __fastcall sub_806E750(unsigned __int8 a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r5@1
  int v5; // ST04_4@1
  int v6; // ST04_4@1
  unsigned __int8 v8; // [sp+8h] [bp-1Ch]@1
  _BYTE v9[3]; // [sp+9h] [bp-1Bh]@1
  int v10; // [sp+20h] [bp-4h]@1

  v2 = a2;
  v3 = a1;
  sub_806E720(a1, &v8, v9, a2);
  v4 = 8 * v3 + v2;
  v5 = *(_DWORD *)(v4 + 4);
  sub_8089C50(v8, (unsigned __int8)v9[0], *(_BYTE *)(v4 + 1), *(_BYTE *)v4);
  v6 = (*(_BYTE *)(v4 + 1) - 1) & 0xFF;
  InitMenu(0, (v8 + 1) & 0xFF, ((unsigned __int8)v9[0] + 1) & 0xFF, *(_BYTE *)v4);
  return v10;
}
